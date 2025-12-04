//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil

#include<stdio.h>

void fact(int n)
{
    int i,f;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("fact of %d is %d\n",n,f);
}

int facto(int n)
{
    if(n==1)
    {
        return 1;
        
    }
    
    return n*facto(n-1);
}
void main()

{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    fact(n);
    
    printf("Factorial by recursion is %d\n",facto(n));
}