//WAP to find whether student is pass or fail by using if else statement

#include<stdio.h>

int main() {
	
	double n;
	
	printf("Enter the percentage: ");
	scanf("%lf", &n);
	
	if (n>90) {
		printf("You are topper!");
	}	
	else if (n>40){
		printf("Pass");
	}
	else if (n==40) {
		printf("Pass");
	}	
	else {
		printf("Fail");
	}
	return 0;
}
