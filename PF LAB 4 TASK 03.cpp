#include<stdio.h>
int main()
{
    int number_1, number_2, number_3;
    
    printf("Enter the first number:\t\t");
    scanf("%d", &number_1);
    
    printf("Enter the second number:\t");
    scanf("%d", &number_2);
    
    printf("Enter the third number:\t\t");
    scanf("%d", &number_3);
    
    if (number_1>number_2 && number_1>number_3)
    {
    	printf("\nThe first number is the greatest of them all");
    
	}
	else if (number_2>number_1 && number_2>number_3)
	{
		printf("\nThe second number is the greatest of them all");
	}
	
	else
	{
		printf("\nThe third number is the greatest of them all");
	}
	
    return 0;
}

