#include<stdio.h>

int main() {
	
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	if (n%3==0) {
		printf("it is divisable 3");
	}
	else {
		printf("it is not divisable by 3");
	}
	return 0;
}
