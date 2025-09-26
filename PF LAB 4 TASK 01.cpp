#include<stdio.h>
int main()
{
    int age;
    
    printf("Enter your age:\t\t");
    scanf("%d", &age);
    
    if (age>=18)
    {
    	printf("\nYou are eligible to cast your vote");
	}
	else 
	{
		printf("\nYou're not yet eligible to cast your vote");
	}
	
    return 0;
}







