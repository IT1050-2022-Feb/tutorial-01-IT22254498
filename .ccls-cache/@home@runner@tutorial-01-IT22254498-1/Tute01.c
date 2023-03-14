/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() //program main begins execution
{int mark1,mark2,average; //variable declaring
  printf("enter the mark of the first subject:"); //user input
  scanf("%d", &mark1); //assigning variables
  printf("enter the mark of the second subject:");//user input
    scanf("%d", &mark2); //assingning the variable
  average= (mark1+ mark2) /(2); //calculating the average

  printf("the average of the two marks is %d.\n", average); //printing the output average of the mark
    
    return 0; //program tmain termination
}

