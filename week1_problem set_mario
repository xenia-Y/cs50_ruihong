#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int number,i,j,k,d;
    i=j=k=d=0;

    do
    {
        number = get_int("Please enter a number between 1 and 8:");
    }
    while(number<1||number>8);

    for (i=0;i<number;i++)
    {
        for(k=number-i-1;k>0;k--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("  ");
        for(d=0;d<=i;d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
