#include<stdio.h>
#include<math.h>

int prime_check(int n)
{
    int i;
    i=2;
    if(n==2)
    {
        return 1;
    }
    while(i<sqrt(n)+1)
    {
        if(n%i==0)
        {
            return 0;
        }
        i=i+1;
    }
    return 1;
}
int main()
{
    int n;
    printf("Give the number:");
    scanf("%d",&n);
    if(prime_check(n)==1)
    {
        printf("It is prime");
    }
    else
    {
        printf("Not prime");
    }
    return 2;
}
