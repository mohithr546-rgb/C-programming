#include<stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2,distance;
    printf("enter the coordinates of first point (x1,y1):\n");
    scanf("%d%d",&x1,&y1);

    printf("enter 2nd point coordinates(x2,y2):\n");
    scanf("%d%d",&x2,&y2);

    distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("distance between the points %.2d",distance);
    return 0;

}
