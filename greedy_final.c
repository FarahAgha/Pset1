
#include <stdio.h>
# include <cs50.h>
#include <math.h>

int main(void)
{
    float amount=-1;
    
    while(amount <= 0)
    {
        float value;
        printf("O hai!  How much change is owed?");
        value = GetFloat();
        amount =round(value*100);
    }
    
    int coins=0;
    while(amount>=25)
    {
        amount-=25;
        coins++;
    }
    
    while(amount>=10)
    {
        amount-=10;
        coins++;
    }
    
    while(amount>=5)
    {
        amount-=5;
        coins++;
    }
    while(amount>=1)
    {
        amount-=1;
        coins++;
    }
    
    printf("%d\n",coins);
}
