#include<stdio.h>
#include<string.h>
extern const char base[]="0123456789ABCDEF";
char* hexa(int x)
{
    int i,j,k=0;
    char h[100];
    i=x;
    while(i!=0)
    {
       j=i%16;
       h[k]=base[j];
       k=k+1;
       i=i >> 4;

    }
    h[k]='\0';
    return h;
}
int main()
{
    int x,y,n,i;
    unsigned long int z;
    char hex[100];
    printf("Give the first hex string:");
    scanf("%x",&x);
    printf("Give the second hex string:");
    scanf("%x",&y);
    z=x^y;
    //printf("%d",z);
    printf("The XOR of the two hex strings is:");
    printf("\n0x");
    strcpy(hex,hexa(z));
    n=strlen(hex);
    for(i=n-1;i>=0;i--)
    {
       printf("%c",hex[i]);
    }
    return 0;
}
