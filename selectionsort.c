

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
   int n, i, j, min, temp;
   clock_t start,end;
   double tt;
   printf("Enter number of elements\n");
   scanf("%d", &n);
   int array[n];
 
   for ( i = 0 ; i < n ; i++ )
      array[i]=rand();
   start=clock();
   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      min = i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( array[min] > array[j] )
            min = j;
      }
      if ( min != i )
      {
         temp = array[min];
         array[min] = array[i];
         array[i] = temp;
      }
   }
   end=clock();
   tt=(double)(end-start)/CLOCKS_PER_SEC;
   printf("total time is %lf\n",tt);
   return 0;
}
