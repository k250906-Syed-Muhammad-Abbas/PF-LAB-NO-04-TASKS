#include<stdio.h>
int main(){
	
	int year;
	
	printf("Please enter the year:\t\t");
	scanf("%d", &year);
	
	printf("\n");
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("The year %d is a leap year.", year);
	}
	else
	{
		printf("The year %d is not a leap year.", year);
	}
	
	return 0;
}
