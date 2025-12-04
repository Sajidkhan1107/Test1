//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>

void count()
{
    
    static int c;
    c++;
    printf("The function is called %d  times\n",c);
    
}

int main()
{
    count();
    count();
    count();
return 0;
}