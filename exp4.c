//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
int main()
{
    int s,e,i,j,flag;
    printf("Enter range start and end:");
    scanf("%d%d",&s,&e);
    
    for(i=s;i<=e;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
