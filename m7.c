
#include<stdio.h>
int main()
{
    int a,b,c,d,e,marks;
    printf("Enter the marks of 1 subject:");
    scanf("%d",&a);
    printf("ENter the marks of subject 2:");
    scanf("%d",&b);
    printf("ENter the marks of subject 3:");
    scanf("%d",&c);
    printf("Enter the marks of subject 4:");
    scanf("%d",&d);
    printf("ENter the marks of subject 5:");
    scanf("%d",&e);
    marks=(a+b+c+d+e)/5;

    printf("THe avg marks is:%d\n",marks);
    if (marks>=90 && marks<=100)
    {
        printf("GRADE A\n");

    }
    else if(marks>=75 && marks <=90)
    {
        printf("GRADE B\n");

    }
    else if(marks>=60 && marks<=75)
    {
        printf("GRADE C\n");
    }
    else if(marks>=50&&marks<=60)
    {
        printf("GRADE D\n");

    }
    else
    {
        printf("FAIL\n");
    }
    return 0;
}
