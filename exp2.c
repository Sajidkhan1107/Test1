//Name: Sajid Khan
//UIN:251C003
//Branch: Civil
//DIV: B1
#include<stdio.h>
void main()
{
    int p,c,m,avg;
    printf("Enter Physics marks:");
    scanf("%d",&p);
    printf("Enter Chemistry marks:");
    scanf("%d",&c);
    printf("Enter Maths marks:");
    scanf("%d",&m);
    
    avg = (p+c+m)/3;
    printf("Average Score is: %d\n",avg);
    
    if(avg>=50){
        printf("You are eligible for admission");
    }
    else
    {
        printf("You are not eligible for admission");
    }
   
}