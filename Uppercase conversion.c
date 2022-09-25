#include<stdio.h>

int main()
{
    char a[100];
    int i,j;
    printf("Give the string:");
    fgets(a, 1000, stdin);
    if(a[0]=='\0')
    {
        printf("No string given");
    }
    else
    {
        i=0;
        while(i<100)
        {
            if(a[i]=='\0')
            {
                break;
            }

            j=a[i];
            if(j>96 && j<123)
            {
                a[i]=j-32;
                i=i+1;

            }
            else
            {
                i=i+1;
            }

        }
    }

    printf("The upper case conversion is: %s",a);
}
