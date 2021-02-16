#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Change Owed: \n");
    } while (dollar < 0);
    
    float q = 25;
    float d = 10;
    float n = 5;
    float p = 1;
    
    int cents = round(dollar * 100);
    int coins = 0;
    
    while (cents >= q) {
        cents-=q;
        coins++;
    }
    
    while (cents >= d) {
        cents-=d;
        coins++;
    }
    
    while (cents >= n) {
        cents-=n;
        coins++;
    }
    
    while (cents >= p) {
        cents-=p;
        coins++;
    }
    
    printf("Number of Coins: %i\n", coins);
}
