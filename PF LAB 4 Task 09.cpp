#include<stdio.h>
int main()
{
	int day;
	
	printf("Please enter a number (from 1 to 7) each representing a day respectively from monday to sunday:\t\t");
	scanf("%d", &day);
	
	printf("\n");
	switch (day)
	{
		case 1:
			printf("It's Monaday!");
			break;	
		case 2:
			printf("It's Tuesday!");
			break;	
		case 3:
			printf("It's Wednesday!");
			break;	
		case 4:
			printf("It's Thursday!");
			break;	
		case 5:
			printf("It's Friday!");
			break;	
		case 6:
			printf("It's Saturday!");
			break;	
		case 7:
			printf("It's Sunday!");
			break;						
	}
	return 0;
}
