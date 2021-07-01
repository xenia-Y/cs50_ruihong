#include<math.h>
#include<cs50.h>
#include<stdio.h>

int main(void)
{
    float dollars;
    int quarters, dimes, nickels, pennies, cents, number,stop;
    quarters=dimes=nickels=pennies=cents=number=stop=0;
    do
    {
    dollars = get_float("Please enter owed dollars: ");
    }
    while(dollars<0);


    cents = round(dollars * 100);
    if(cents==0)
    {
        stop=1;
    }



    quarters = (int)(cents/25);
    if(stop==0)
    {
    number += quarters;
    cents = cents - quarters *25;
    }
    if(cents==0)
    {
        stop=1;
    }


    dimes = (int)(cents/10);
    if(stop==0)
    {
    number += dimes;
    cents = cents - dimes*10;
    }
    if(cents==0)
    {
        stop=1;
    }


    nickels = (int)(cents/5);
    if(stop==0)
    {
    number += nickels;
    cents = cents - dimes*5;
    }
    printf("%i\n",nickels);
    printf("%i\n",cents);
    if(cents==0)
    {
        stop=1;
    }


    if(stop==0)
    {
    pennies = (int)(cents/1);
    number += pennies;
    }

    printf("%i\n.",number);
    printf("%i\n",pennies);
    printf("%i\n",cents);
}
