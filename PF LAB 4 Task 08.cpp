#include<stdio.h>
int main()
{
	float number;
	
	printf("Please enter the number:\t\t");
	scanf("%f", &number);
	
	printf("\n");
	if (number>0)
	{
		printf("The number %.2f is a positive number.", number);
	}
	 
	 else if (number<0)
	 {
	 	printf("The number %.2f is a negative number.", number);
	 }
	 
	 else
	 {
	 	printf("The number you have chosen is 0.");
	 }
	 
	 return 0;
}
