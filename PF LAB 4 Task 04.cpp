#include<stdio.h>
int main()
{
	int score;
	printf("Please enter your score out of 100:\t\t");
	scanf("%d", &score);
	printf("\n");
	
	if (score>=90)
	{
		printf("You got %d marks and achieved \"A Grade\"", score);
	}
	else if(score>=80)
	{
		printf("You got %d marks and achieved \"B Grade", score);
	}	
	else if(score>=70)
	{
		printf("You got %d marks and achieved \"C Grade", score);
	}	
	else if(score>=60)
	{
		printf("You got %d marks and achieved \"D Grade", score);
	}	
	else if(score<60)
	{
		printf("You got %d marks and achieved \"F Grade", score);
	}
	
	return 0;
}
