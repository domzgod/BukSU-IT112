#include <stdio.h>
#include <stdlib.h>

int main()
{
   int d,o,spc,rows,m,z=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(d=1;d<=rows;d++)
   {
         for(m=spc;m>=1;m--)
            {
              printf(" ");
            }
	   for(o=1;o<=d
	   ;o++)
	   printf("%d ",z++);
	printf("\n");
    spc--;
   }
    return 0;
}


