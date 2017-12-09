#include<stdio.h>
#include<string.h>
#define MAX 500
int t[MAX];
void shifttable(char p[])
{
	int i,j,m;
	m=strlen(p);
	for(i=0;i<MAX;i++)
		t[i]=m;
	for(j=0;j<m-1;j++)
		t[p[j]]=m-1-j;
}

int horspool(char str[],char p[])
{
	int i,j,k,m,n;
	n=strlen(str);
	m=strlen(p);
	i=m-1;
	while(i<n)
	{
		k=0;
		while((k<m)&&(p[m-1-k]==str[i-k]))
			k++;
		if(k==m)
			return(i-m+1);
		else
			i+=t[str[i]];
 	}
 	return -1;
}

int main()
{
	char str[100],p[100];
	int pos;
	printf("Enter the text in which pattern is to be searched:\n");
        gets(str);
	printf("Enter the pattern to be searched:\n");
	scanf("%s",p);
 	shifttable(p);
 	pos=horspool(str,p);
 	if(pos>=0)
  		printf("\nThe pattern was found starting from position %d\n",pos+1);
 	else
  		printf("\nThe pattern was not found in the given text\n");
 	return 0;
}
