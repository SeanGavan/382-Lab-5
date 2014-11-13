# 382-Lab-5
## Lab Day 1
### Timer Counts Questions
1) 65.535 milliseconds per TAR roll-over
2) 1 microsecond
### IR Data Packets
| Pulse                         | Duration (ms) | Timer A counts |
| ----------------------------- | ------------- | -------------- | 
|   Start logic 0 half-pulse    |     8.98      |      8980      |
|   Start logic 1 half-pulse    |     4.43      |      4430      |
|   Data 1 logic 0 half-pulse   |     0.626     |      626       | 
|   Data 1 logic 1 half-pulse   |     1.61      |      1610      | 
|   Data 0 logic 0 half-pulse   |     0.590     |      590       |
|   Data 0 logic 1 half-pulse   |     0.535     |      535       | 
|   Stop logic 0 half-pulse     |     39.5      |      3950      |
|   Stop logic 1 half-pulse     |     8.97      |      8970      | 

| Button     | code (not including start and stop bits) |
| ---------- | ---------------------------------------- |
| 1          |     FF08F7    |
| 2          |     FFC03F    |
| 3          |     FF807F    |
| 4          |     FF609F    | 
| Enter      |     FFA05F    | 
| Pause      |     FF38C7    |
| Stop       |     FF28D7    |
| Slow       |     FFF00F    | 
| Step       |     FF30CF    | 

## Notebook

### Purpose
The purpose of the lab was to use a timer and interrupts in order to decode data sent as an IR packet from a remote control. This packet would toggle two LEDs using two different buttons.

### Software flow chart / algorithms
The lab code flows in such a way as to first poll for an IR packet to be received. Once this is done, an interrupt occurs that says that the value of a pin has been changed. The interrupt then uses the timer to determine whether the edge is that of a falling edge or a rising edge, and whether the data is a logic 1 or 0. The value is then stored and compared to that of the predetermined code for the "1" or "2" button on remote control #2. If a match is found, the respective LED (1 or 2) will toggle.

### Hardware schematic
![alt text](https://raw.githubusercontent.com/SeanGavan/382-Lab-5/master/Images/Schematic.PNG "IR Sensor Schematic")

### Well-formatted code
Code for this lab may be found in the Code folder.

### Debugging
A major flaw in the code to begin was that the timer and interrupt would not run in a way that would write to the array. After including the features provided on the lab page, this problem ceased to occur. Aftwerwards, the only problem was that of getting the LEDs to toggle on and off. This was soon remedied, and required functionality had been met.

### Testing methodology / results
The coding began by first decrypting the packets sent by the remote control. This meant finding out what each button's unique signal was in binary and then hex. The timer then needed to be modified so that it could measure the pulses of logic zeroes and ones. Once this had been accomplished, a test had to be done to see whether the array was containing new data. Once this was found to be true, and then once the code matched that predetermined value, the LEDs had to be tested to see if they would toggle. 

### Observations and Conclusions
It can be seen that timers can be used for variables that change over time. Since the timer can be modified, it can serve even more purposes than those used in this lab.

### Documentation 
Documentation for this lab includes C2C Terragnoli for providing clues as to where code should be put within the start5.c file.
