/*Take a positive integer input and tell if it is divisible by 3 and 5
without using && and ||. By using Nested if else*/

#include<stdio.h>

int main() {
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n%5==0) {
		if (n%3==0) {
			printf("It is divisible by 3 and 5");
		}
		else {
			printf("It is not divisible by 3 and 5");
		}
	}
		else {
			printf("It is not divisible by 3 and 5");
		}
	return 0;
}
