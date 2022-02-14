#include <stdio.h>
int coprime(int num1, int num2)  
{  
    int min, count=2, flag = 1;  
  
    min = num1 < num2 ? num1 : num2;  
    while(count <= min)  
    {  
        count++;
        if( num1 % count == 0 && num2 % count == 0 )  
        {  
            flag = 0;    
        }  
    }  
  
    return(flag);  
}  
  
int main()  
{  
    int n1, n2;  
  
    printf("Enter 2 positive numbers\n");  
    scanf("%d%d", &n1, &n2);  
  
    if( coprime(n1, n2) )  
    {  
        printf("%d and %d are relatively prime numbers.\n", n1, n2);  
    }  
    else  
    {  
        printf("%d and %d are not relatively prime numbers.\n", n1, n2);  
    }  
  
    return 0;  
}  
