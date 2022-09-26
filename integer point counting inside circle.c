#include<stdio.h>

int number_inside_circle(int r)
{
    int i,j,c=0;
    for(i=-r;i<=r;i++)
    {
        for(j=-r;j<=r;j++)
        {
            if(i*i+j*j < r*r)
            {
                c=c+1;
            }
        }
    }
    return c;

}

int main()
{
    int r;
    printf("Give the integer radius:");
    scanf("%d",&r);
    printf("The number of integer points inside the circle of radius %d with center at origin is %d",r,number_inside_circle(r));
    return 2;

}
