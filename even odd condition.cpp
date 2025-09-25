#include<stdio.h>
int main()
{
    int number;
    
    printf("Enter your number to check:\t\t");
    scanf("%d", &number);
    
    if (number % 2==0 )
    {
    	printf("\nThe number is an even number");
    
	}
	else 
	{
		printf("\nThe number is an odd number");
	}
	
    return 0;
}

