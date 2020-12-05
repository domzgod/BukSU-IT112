#include <stdio.h>
#include <stdlib.h>

int main() {
	int d, y, sum = 0;
	printf("Enter a number range: ");
	scanf("%d", &d);

    printf(" These are the numbers that are not divisible by 3 in the number range: \n");
{
	for(y = 1; y <= d;)
    {
     if(y%3 != 0)
    printf("%4d", y);
    y++;
    }
{
    sum = sum + y;
    printf("%d", y);
}
    printf("\n The sum is : %d\n", sum);
    return 0;
}
}
