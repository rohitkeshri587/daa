#include<stdio.h>
#include<math.h>
int n;
int max(int,int);
void warshall(int p[100][100])
{
 int i,j,k;
 for(k=1;k<=n;k++)
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
    p[i][j]=max(p[i][j],p[i][k]&&p[k][j]);
 return;
}
int max(int a,int b)
{                                                       ;
 if(a>b)
  return a;
 else
  return b;
}
int main()
{
 int i,j;
 printf("Enter the number of vertices:\n");
 scanf("%d",&n);
 int p[100][100];
 printf("Enter the adjacency matrix\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   scanf("%d",&p[i][j]);
 warshall(p);
 printf("\n Transitive closure: \n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
   printf("%d\t",p[i][j]);
  printf("\n");
 }
 return 0;
}
