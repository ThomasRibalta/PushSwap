# Goal of PushSwap

PushSwap is the a 42 school project, for this project we have to sort 1 stack of number like "10 7 8 5" with 2 stack to have "5 7 8 10". For make this we have just the right to use 11 instruction like : 

| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |


# Personal opinion

When I have read the subject of the project I said to myself this project is so easy but is not the reality because for have all the point we need to make or use an optimal algorithm. In first time i have make a little algorithm to sort with 2 stack but my algorithm needed too much movement. After my first algorithm I have delete all and restart with The [Turk Algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97) with this algorithm all my problem was solved. This algorithm calculate the best moove with the number of instruction and push the number at his position. 

# Result

In coming ...

# Dificulty

⭐️⭐️⭐️⬛️⬛️
