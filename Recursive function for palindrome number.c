#include <stdio.h>
#editing 
int palin(int n,int temp)
{
	if (n==0)
	{
		return temp;
	}
	temp=(temp*10)+(n%10);
	return palin(n/10,temp);
}
int main()
{
	int n,temp;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=palin(n,0);
	if(temp==n)
	{
		printf("Yes it is a palindrome");
	}
	else
	{
		printf("No its not a palindrome");
	}
	return 0;
}
