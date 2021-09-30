# Recursion_Collatz_CS50
Problem solve for CS50 LAB - Recursion (week3). Using the Collatz conjecture.  

The Collatz conjecture is applies to positive integers and speculates that it is always possible to get "back to 1" if you follow these steps:
- If n is 1, stop
- Otherwise, if n is even, repeat this process on n/2
- Otherwise, if n is odd, repear this process on 3n + 1;

The problem requires that you wrcursive function 'collatz(n)' that calculates how many steps it takes to get to 1 if you start from n and recurse as indicated above
