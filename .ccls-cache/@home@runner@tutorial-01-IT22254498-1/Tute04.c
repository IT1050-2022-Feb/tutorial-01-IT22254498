/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1,int n2); //function declaration
int maximum(int N1,int N2); //funtion declaration
int multiply(int NO1,int NO2);//function declaration
int main() //function main begins execution
{
   int no1, no2; //variable declaration
   printf("Enter a value for no 1 : "); //taking inputs
   scanf("%d", &no1); //assigning the values tot he variable
   printf("Enter a value for no 2 : "); //taking inputs
   scanf("%d", &no2); //assigning the value tot he variable
   printf("%d ", minimum(no1, no2));//printitng the output
   printf("%d ", maximum(no1, no2));//printitng the output
   printf("%d ", multiply(no1, no2)); //printitng the output
   return 0;
}
int minimum(int n1,int n2) //function 1implementation
{
  if(n1< n2)
  {
    return n1;//returning the value to the main function
  }
  else
  {
    return n2;//returning the value to the main function
  }
}
int maximum(int N1,int N2) //funtion 2 implementation
{
  if(N1>N2)
  {
    return N1;//returning the value to the main function
  }
  else
  {
    return N2;//returning the value to the main function
  }
}
int multiply(int NO1,int NO2) //function 3 implementation
{
  int mult; //variable declaration
  mult= NO1*NO2; //calculation
  return mult; //returning the value to the main function
}