#include<stdio.h>
int main()
{
	int pin, password=2025;
	
	printf("Please enter the four digit pin code:\t\t");
	scanf("%d", &pin);
	
	if(password==pin)
	{
		printf("\nAccess Granted!");
	}
	
	else
	{
		printf("\nAccess Denied!");
	}
}
