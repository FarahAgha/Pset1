#include <stdio.h>
# include <cs50.h>
#include <math.h>

/*
 * counting out change using quarters, dimes, nickels, and pennies 
 * in minimize numbers of coins using greedy algorithms.
 */

int main(void)
{
    int amount = -1;
    
    // amount should be non-negative value,re-prompt the user for a invalid amount 
    while (amount <= 0)
    {
        float value;
        
        printf("O hai!  How much change is owed?");
        value = GetFloat(); 
        amount =(int) round(value*100); //truncates too many digits after decimal point 
    }
    
    int coins=0;
    
    //check possible number of quarters (25¢) & amount left 
    if (amount >= 25)
    {
        coins += amount / 25;
        amount = amount % 25;
    }
    
    //check possible number of dimes (10¢) & amount left 
    if (amount >= 10)
    {
        coins += amount / 10;
        amount = amount % 10;    
    }
    
    //check possible number of  nickels (5¢) & amount left 
    if (amount >= 5)
    {
        coins += amount / 5;
        amount = amount % 5;    
    }
    
    //check possible number of pennies (1¢)
    if (amount >= 1)
    {
        coins += amount / 1;
        //amount = amount % 1;    
    }
    
    //print  minimum number of coins possible
    printf("%d\n", coins);
}
