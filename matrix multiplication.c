#include<stdio.h>

int main()
{
    int m,n,r,s=0,t;
    int i,j;
    printf("Give the dimension of first matrix:");
    scanf("%d %d",&m,&n);
    printf("Give the dimension of second matrix:");
    scanf("%d %d",&n,&r);

    int a[m][n],b[n][r],c[m][r];

    printf("First matrix: \n ");
    for(i=0;i<m;i++)
    {
        printf("Give the %d th row:",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("Second matrix: \n ");
        for(i=0;i<n;i++)
    {
        printf("Give the %d th row:",i+1);
        for(j=0;j<r;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<r;j++)
        {
            for(t=0;t<n;t++)
            {
                s=s+a[i][t]*b[t][j];
            }
            c[i][j]=s;
            s=0;
        }

    }

    printf("The multiplicated matrix is:");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 2;

}
