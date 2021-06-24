#include<stdio.h>
void sort(int a[],int n)
{
	 int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	int a[n];
	printf("enter number of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++)
	   printf("%d \t",a[i]);
}
