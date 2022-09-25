#include<stdio.h>

int sum_digit(int n)
{
    int i,j,s=0;
    i=n;
    while(i!=0)
    {
        j=i%10;
        i=i/10;
        s=s+j;

    }
    return s;
}

int main()
{
    int n;
    printf("give the number:");
    scanf("%d",&n);
    printf("the sum of digits: %d",sum_digit(n));
    return 2;
}
