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
