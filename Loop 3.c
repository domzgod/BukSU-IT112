#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yni;
    double sum = 0.10;

    for(yni=2; yni <= 15; yni++)
    {
        sum = sum + sum;
        printf("Total money for day %d is %.2f\n", yni, sum);
    }
    return 0;
}
