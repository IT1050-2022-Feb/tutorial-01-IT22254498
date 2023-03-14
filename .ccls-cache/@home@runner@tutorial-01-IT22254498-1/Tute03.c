/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h> //calculating the value of the numbers till the input number
int main() //function main begins execution
{
  int num, sum, count; //declaring variables
  sum=0; //initializing the value to 0
  
printf("enter a number:"); //input the number
  scanf("%d", &num); //assigning the value to a variable
  
  for(count=1; count<= num; count++) //for loop start
    {
    sum= sum+count; //calculating the sum
    }
    
   printf("the sum is %d.", sum); //printing the output
  
  return 0; //function main stops execution
}

