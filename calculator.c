#include<stdio.h>
int main()
{
	int sigma,gama,choice;
	printf(" enter the 1st value");
	scanf("%d",&sigma);
	printf(" enter the 2nd number");
	scanf("%d",&gama);
	printf(" please select the opration which you would like to perform\n");
	printf("1. add numbers\n 2. subtract numbers\n 3. multiply numbers ");
	printf(" enter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:  printf("  the sum of numbers  %d",sigma+gama);
				 break;
		case 2:  printf(" the substraction is %d",sigma-gama);
				 break;
		case 3:  printf("the multiplication of numbers is %d",sigma*gama);
				 break;
		default:  printf(" enter a valid choice");
		
	}
	
	return 0;
#include <stdio.h>

int main() {
    // Your calculator code here

    getchar(); // Wait for a key press before closing the console
    return 0;
}

}
