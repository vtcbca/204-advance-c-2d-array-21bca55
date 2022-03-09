#include<stdio.h>
#include<conio.h>
void main()
{
   int m[3][3],i,j;
   clrscr();
   for(i=0;i<3;i++)// for row
   {
      for(j=0;j<3;j++)
	 {
	    printf("\n enetr the value of m[%d]:",i,j);
	    scanf("%d",&m[i][j]);
	  }
    }
    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
	    printf(" %d ",m[i][j]);
	    printf("\n");

   }
   if((i==j)&&m[0][i])
   {
    printf("\n it's not diogomal");
    }
    else
    {
    printf("diogomal");
    }
   getch();
   }
