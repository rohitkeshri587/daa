//bubble sort
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
   int n, c, d, swap, flag=0;
   clock_t start,end;
   printf("Enter number of elements\n");
   scanf("%d", &n);
   int array[n];
   for ( c = 0 ; c < n ; c++ )
      array[c]=rand();
   start=clock();
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      flag=0;
      for ( d = 0 ; d < n-c-1 ; d++ )
      {
         if ( array[d] > array[d+1] )
 	 {	    
         	swap = array[d];
         	array[d] = array[d+1];
         	array[d+1] = swap;
		flag=1;
      	 }
      }
      if(flag==0)
	 break;
   }
   end=clock();
   double tt;
   tt=(double)(end-start)/CLOCKS_PER_SEC;
   printf("%lf\n",tt);
   return 0;
}
