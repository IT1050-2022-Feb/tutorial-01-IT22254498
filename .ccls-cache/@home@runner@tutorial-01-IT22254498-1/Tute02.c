/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h> //calculating the amount to pay for a rented vehicle

int main() //function main begins execution
{float distance, rent; //declaring variables
printf("input the distance the van has travelled in kms:"); //user inputs
scanf("%f", &distance); //assigning the value to a particular variable

if(distance<=30) //if distance is 30 or less than 30, 
{
  rent= distance* 50; //calculating the rent
  printf("the rent is %.2f.", rent); //output
}
else //else
{
  rent= 30*50 + (distance-30)*40; //calculating the rent
  printf("the rent is %.2f.",rent); //output rent
}
  return 0; //function main terminates
}
