//Name:Sajid Khan
//UIN:251C003
//Roll no:3
//Branch: Civil
#include<stdio.h>
struct student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    int i,t;
    struct student students[5];
    
    for(i=0;i<5;i++)
    {
        printf("Roll Number:");
        scanf("%d",&students[i].roll_no);
        
        printf("Name:");
        scanf("%s",students[i].name);
        
        printf("Marks:");
        scanf("%f",&students[i].marks);
        
        printf("\n\n");
    }
    
    t=0;
    for(i=1;i<5;i++)
    {
        if (students[i].marks>students[t].marks)
        {
            t=i;
        }
    }
    
    printf("\n\nThe Topper is:  %s\n",students[t].name);
    printf("Name:%s\t",students[t].name);
    printf("Roll no:%d\t",students[t].roll_no);
    printf("Marks:%f\t",students[t].marks);
    
return 0;    
}
