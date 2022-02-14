#include <stdio.h>
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	float area;
	printf("Enter the x coordinates:");
	scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
	printf("Enter the y coordinates:");
	scanf("%d %d %d %d",&y1,&y2,&y3,&y4);
	area=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	if (area==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	float A=area/2;
	float A1=(x4*(y2-y3)+x2*(y3-y4)+x3*(y4-y2))/2;
	float A2=(x1*(y4-y3)+x4*(y3-y1)+x3*(y1-y4))/2;
	float A3=(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2;
	int sum=A1+A2+A3;
	if(A==sum)
	{
		printf("\nInside");
	}
	else
	{
			printf("\nNot inside");
	}
	return 0;
	
	
}
