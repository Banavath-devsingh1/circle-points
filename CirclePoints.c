#include<stdio.h>

int main()
{
    float x,y,r;
    printf("enter the coordinates",x,y);
    scanf("%f%f",&x,&y);



    if(r>sqrt(x*x+y*y))
    {
        printf("given coordinates lies inside the circle");
    }
    if(r==sqrt(x*x+y*y))
    {
        printf("given coordinates lies on the circle");
    }
    else
    {
        printf("given coordinates outside the circle");
    }
    return 0;


}
