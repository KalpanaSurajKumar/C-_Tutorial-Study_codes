#include<stdio.h>
int  main(){
	int choice;
	do{
	
	printf("\n Welcome to Simple Calculator\n");
	printf("Choose one of the following operation:\n");
	printf("\n 1.Addition");
	printf("\n 2.Subtraction");
	printf("\n 3.Multiply");
	printf("\n 4.Divide");
	printf("\n 5.Modulus");
	printf("\n 6.Power");
	printf("\n 7.Exit");
	
	printf("\n Now,enter your choice:");
	scanf("%d",&choice);
	} while(choice!=7);
	return 0;
	
}
