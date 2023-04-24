#include<stdio.h>

int main () {
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n%2==0) {
		printf("Even");
	}
	else {
		printf("Odd");
	}
	
	/* instead of else we can also use this:
	if (n%2==1) {
	printf("Odd");
	}
	*/  
	
	return 0;
}
