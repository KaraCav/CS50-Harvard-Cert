// Test it here: https://replit.com/@karacav/CS50-W3-Recursion#main.c

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int collatz(int n);
int totalSteps = 0;

int main() {
  int n = get_int("Number: ");
  printf("HERE %i\n", n);
  collatz(n);  // EXAMPLE: collatz(3) should print 7
}
int collatz(int n) 
{
  // base case
  if (n == 1) 
  {
    printf("Total Steps: %i", totalSteps);
    return 0;
  }
  // recursive if odd
  else if (n % 2 != 0)
  {
    totalSteps += 1;
    return 1 + collatz(n*3 + 1);
  }
  // recursive if even
  else
  {
    totalSteps += 1;
    return 1 + collatz(n/2);
  }
}
