#include<stdio.h>
int main()
{
	int color;
	
	printf("Please press and enter the number of the color of light to continue:\n\n(1)Red\n(2)Yellow\n(3)Green");
	printf("\n\n");
	scanf("%d", &color);
	
	printf("\n");
	
	switch (color)
	{
		case 1:
			printf("STOP!");
			break;	
		case 2:
			printf("READY!");
			break;	
		case 3:
			printf("GO!");
			break;	
							
	}
	return 0;
}
