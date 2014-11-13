//-----------------------------------------------------------------
// Name:	Sean Gavan
// File:	start5.h
// Date:	Fall 2014
// Purp:	Include file for the MSP430 so as to know what the code for
//			each remote control button is as well as the logic pulses
//			used in the timer.
//-----------------------------------------------------------------

//-----------------------------------------------------------------
// Page 76 : MSP430 Optimizing C/C++ Compiler v 4.3 User's Guide
//-----------------------------------------------------------------
typedef		unsigned char		int8;
typedef		unsigned short		int16;
typedef		unsigned long		int32;
typedef		unsigned long long	int64;

#define		TRUE				1
#define		FALSE				0

//-----------------------------------------------------------------
// Function prototypes found in lab5.c
//-----------------------------------------------------------------
void initMSP430();
__interrupt void pinChange (void);
__interrupt void timerOverflow (void);


//-----------------------------------------------------------------
// Each PxIES bit selects the interrupt edge for the corresponding I/O pin.
//	Bit = 0: The PxIFGx flag is set with a low-to-high transition
//	Bit = 1: The PxIFGx flag is set with a high-to-low transition
//-----------------------------------------------------------------

#define		IR_PIN			(P2IN & BIT6)
#define		HIGH_2_LOW		P2IES |= BIT6
#define		LOW_2_HIGH		P2IES &= ~BIT6

#define		averageLogic0Pulse	0x0200		// Pulse length for either a 0, 1, or Start/Stop bit
#define		averageLogic1Pulse	0x0465
#define		averageStartPulse	0x2314
#define		minLogic0Pulse		averageLogic0Pulse - 100
#define		maxLogic0Pulse		averageLogic0Pulse + 100
#define		minLogic1Pulse		averageLogic1Pulse - 100
#define		maxLogic1Pulse		averageLogic1Pulse + 100
#define		minStartPulse		averageStartPulse - 100
#define		maxStartPulse		averageStartPulse + 100

#define		ONE		0xFF08F7	// Hex code for 9 remote control buttons
#define		TWO		0xFFC03F	// Converted from the binary data on the logic analyzer
#define		THR		0xFF807F
#define		FOR		0xFF609F

#define		ENTER	0xFFA05F
#define		PAUSE	0xFF38C7
#define		STOP	0xFF28D7
#define		SLOW	0xFFF00F

#define		STEP	0xFF30CF
