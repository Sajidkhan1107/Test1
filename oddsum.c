// Name: Sajid khan
// UIN: 251C003
//DIV: b
//Class: Civil
#include<stdio.h>
 int main()
 {
     int i,num1,num2, sum=0;
     printf("Enter two number");
     scanf("%d %d",&num1,&num2);
     
     if (num1>num2)
     {
        printf("It cannot be compilied");
     }
     else
     {
     for(i=num1+1;i<num2;i++)
     {
         if(i%2==1)
         {
             sum +=i;
         }
     }
     }
     printf("Sum of odd numbers between the entered numbers is: %d",sum);
 
     return 0;
 }
 
 