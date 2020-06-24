/*Write a program in C to display the multiplication table of a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150

*/


#include <stdio.h>

int main()

{

int input; //input is the number whose table we are looking for 
printf("Input the number:\n");
scanf("%d",&input);

int i;

for(i=1;i<11;i++) //i is less than 11 since we only want table till input * 10
{
    printf("%d * %d = %d\n",input,i,input*i);
}




    return 0;
}