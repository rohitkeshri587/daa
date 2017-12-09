#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
void mergesort(int a[],int low,int high);
void merge(int a[],int low, int mid, int high);
 
int main()
{
    int n,i;
    clock_t start, end;
    double tt;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=rand();
    start=clock();    
    mergesort(a,0,n-1);
    end=clock();
    tt=(double)(end-start)/CLOCKS_PER_SEC;
    printf("%lf\n",tt);  
    for(i=0;i<n;i++)
	printf("%d\n",a[i]);  
    return 0;
}
 
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low>=high)
	return;    
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);     
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
 
void merge(int a[],int low, int mid, int high)
{
    int temp[high];  
    int i,j,k;
    i=low;   
    j=mid+1;  
    k=low;
    
    while(i<=mid && j<=high)   
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=mid)    
        temp[k++]=a[i++];
        
    while(j<=high)  
        temp[k++]=a[j++];
        
    for(i=low;i<=high;i++)
        a[i]=temp[i];
    return;
}

