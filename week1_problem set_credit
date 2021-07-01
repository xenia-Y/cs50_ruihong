#include<cs50.h>
#include<stdio.h>

int main(void)
{
    long number, n, sum;
    int count, digit,flag;
    number = get_long("Please enter your card number:");
    n = number;
    count =0;
    flag =0;
    do
    {
        digit = n % 10;
        n = n / 10;
        count++;
        if( count % 2 == 0 )
        {
            sum = sum + digit * 2 % 10 + digit * 2 / 10;
        }
        if (count % 2 == 1 )
        {
            sum += digit;
        }
    }
    while(n!=0);
    if ( sum % 10 ==0 && number / 100000000000000 == 3 && ( (number / 10000000000000) % 10 == 4 || (number / 10000000000000) % 10 == 7) && count ==15 )
    {
        printf("AMEX\n");
        flag =1;
    }
    if ( sum % 10 ==0 && (number / 100000000000000 == 51 || number / 100000000000000 == 52 || number / 100000000000000 == 53 || number / 100000000000000 == 54 || number / 100000000000000 == 55 ) && count ==16 )
    {
        printf("MASTERCARD\n");
        flag=1;
    }
    if( sum % 10 == 0 && (count == 13 || count == 16) && ( number / 1000000000000 == 4 || number / 1000000000000000 == 4))
    {
        printf("VISA\n");
        flag=1;
    }
    if( sum % 10 !=0 || count < 13 || count >16 || count ==14 ||flag ==0) 
    {
        printf("INVALID\n");
    }
}
