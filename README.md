# Starting Out With C++: From Control Structures through Objects - *by Tony Gaddis*
## Chapter 6: Functions
### Winning Division

Write a program that determines which of a company’s four divisions (Northeast, Southeast, 
Northwest, and Southwest) had the greatest sales for a quarter. It should include the following 
two functions, which are called by main.

  **double getSales()** – is passed the name of a division. It asks the user for a 
  division’s quarterly sales figure, validates the input, then returns it. It should be called 
  once for each division.
  
  **void findHighest()** – is passed the four sales totals. It determines which is the 
  largest and prints the name of the high grossing division, along with its sales figure.

**Input Validation:** Do not accept a number less than 1 for the number of years. Do not accept negative numbers for the monthly rainfall.
