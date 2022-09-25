#include<stdio.h>

char y;
int check_dup(char a[1000])
{
    int i,m;
    char x;
    i=0;m=0;
    while(m<1000)
    {
        i=m;
        if(a[i]=='\0')
        {
            return 1;
        }
        else
        {
            x=a[i];
            if(i+1==1000)
            {
                return 1;
            }
            y=a[i+1];
            i=i+1;
            while(y!='\0')
            {
                if(x==y)
                {

                    return 0;
                }
                i=i+1;
                y=a[i];

            }
        }
        m=m+1;
    }
}

int main()
{
    char sample[1000];
    int x;
    printf("Give the string:");
    fgets(sample, 1000, stdin);
    x=check_dup(sample);
    if(x==0)
    {
        printf("character repeated. %c is found to be repeated.",y);
    }
    else
    {
        printf("all characters different");
    }

    return 2;
}
