#include<stdio.h>

int main() {
	
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	n>99 && n<1000 ? printf("It is three digit number") : printf("It's not three digit number") ;
	
	return 0;
}
