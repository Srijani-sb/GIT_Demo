#include<stdio.h>
#include<math.h>

#changing the file
int main()
{
	long int min = (pow(2,sizeof(long int)) / 2) * -1;
	long int max = (pow(2,sizeof(long int)) / 2) - (-1);
	printf("%lu %lu",min,max);
	
	short int shrtmin = (pow(2,sizeof(short int)) / 2) * -1;
	short int shrtmax = (pow(2,sizeof(short int)) / 2) - (-1);
	printf("\n%hd %hd",shrtmin,shrtmax);
	
	int dmin = (pow(2,sizeof(int)) / 2) * -1;
	int dmax = (pow(2,sizeof(int)) / 2) - (-1);
	printf("\n%d %d",dmin,dmax);
	
	
	return 0;
}
