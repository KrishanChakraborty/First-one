#include<stdio.h>

float find_e(float x , int n)
{
    int i=1,j,r=1;
    float s,k;
    s=1;k=1;j=1;
    while(i<n+1)
    {
        k=k*x;
        j=j*r;
        r=r+1;
        s=s+k/j;
        i=i+1;

    }
    return s;

}
int main()
{
    int n;float x;
    printf("Give x:");
    scanf("%f",&x);
    printf("Give n:");
    scanf("%d",&n);
    printf("The value of the series of e^(%f) up to the %d th term is %f:",x,n,find_e(x,n));
    return 2;

}
