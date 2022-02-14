#include <stdio.h>
#define SIZE 3
void sortSq(int arr[],int n)
{
	int K=0;
	int flag=0;
	/*for(K=0;K<n;K++)
	{
		if(arr[K]>=0)
		{
			flag=1;
		}
	}*/
	int i=K-1;
	int j=K;
	int p=0;
	int temp[n];
	while(i >= 0 && j < n)
	{
		if(arr[i]*arr[i]<arr[j]*arr[j])
		{
			temp[p]=arr[i]*arr[i];
			i--;
		}
		else
		{
			temp[p]=arr[j]*arr[j];
			j++;
		}
		p++;
	}
	while(i>=0)
	{
		temp[p]=arr[i]*arr[j];
		i--;
		p++;
	}
	while(j<n)
	{
		temp[p]=arr[j]*arr[j];
		j++;
		p++;
	}
	for(i=0;i<n;i++)
	{
		arr[i]=temp[i];
	}
}
int main()
{
	int arr[SIZE]={1,2,3};
	int i=0;
	/*printf("Enter the numbers in the array: ");
	for(int i=0;i<SIZE;i++)
	{
		scanf("\n%d",&arr[i]);
	}*/
	int n=sizeof(arr)/sizeof(arr[0]);
	sortSq(arr,n);
	printf("After the sort: ");
	while(i<n)
	{
		i++;
		printf("\n%d",arr[i]);
	}
	return 0;
}
