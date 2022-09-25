#include<stdio.h>

int main()
{
    int n,i,j,c;
    printf("Give dimension:");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        printf("Give the %d th row:",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                printf("Not symmetric");
                c=1;
                break;

            }
        }
        if(c==1)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if(c==0)
    {


    printf("Symmetric");
    }
    return 2;
}
