#include<stdio.h>
int main()
{
	float first_number, second_number;
	int operation;
	
	printf("Enter the first number:\t\t");
	scanf("%f", &first_number);
	
	printf("\nPress and enter the number of the operation to continue:\t\n1)Addition\n2)Subraction\n3)Multiplication\n4)Division");
	printf("\n\n");
	scanf("%d", &operation);
    
	printf("\nEnter the second number:\t");
	scanf("%f", &second_number);
		printf("\n");
		switch (operation)
	{
		case 1:
			printf("The sum of the two numbers is %.2f", first_number + second_number);
			break;	
		case 2:
			printf("The difference of the two numbers is %.2f", first_number - second_number);
			break;	
		case 3:
			printf("The product of the two numbers is %.2f", first_number * second_number);
			break;	
		case 4:
			printf("The quotient of the two numbers is %.2f", first_number / second_number);
			break;	
					
	}
	return 0;
}
