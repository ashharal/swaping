/******************************************************************************
Name :- Haral Ashwini
Assignment No :-6
Accept two numbers and perform swapping with third variable..

*******************************************************************************/
#include <stdio.h>

int main()
{
   int num1, num2, temp;
   printf("enter the value of num1 and num2");
   scanf("%d%d",&num1 ,&num2);
   printf("before swapping num1=%d and num2=%d",num1,num2);
   temp=num1;
   num1=num2;
   num2=temp;
   printf("\nafter swapping num1=%d and num2=%d",num1,num2);

    return 0;
}
