#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change = 0;
    int coins = 0;
    
    printf("O hai! How much change is owed?\n");
    change = get_float();
    
    while (change < 0)
    {
        printf("How much change is owed?\n");
        change = get_float();
    }
    
    int amount = round(change * 100);
    
    while (amount > 0)
    {
        if ((amount -25) >= 0)
        {
            amount -= 25;
            coins ++;
        }
        else if ((amount - 10) >= 0)
        {
            amount -= 10;
            coins ++;
        }
        else if ((amount - 5) >= 0)
        {
            amount -= 5;
            coins ++;
        }
        else if ((amount - 1) >= 0)
        {
            amount -= 1;
            coins ++;
        }
    }
    
    printf("%i\n", coins);
}
