#include <stdio.h>
#include <stdlib.h>

int main()
{
    int domz1, domz2, domz3, sum;

    printf("Input three angles of a triangle: \n");
    scanf("%d%d%d", &domz1, &domz2, &domz3);

    sum = domz1 + domz2 + domz3;

    if(sum == 180 && domz1 > 0 && domz2 > 0 && domz3 > 0)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
