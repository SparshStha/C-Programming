#include<stdio.h>

int main() {
	int a, b, c, d;
	
	printf("Enter any four number: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if (a>b && a>c && a>d) {
		printf("%d is the largest number", a);
	}
	
	else if (b>a && b>c && b>d) {
		printf("%d is the largest number", b);
	}
	else if (c>a && c>b && c>d) {
		printf("%d is the largest number", c);
	}
	else {
		printf("%d is the largest number", d);
	}
	return 0;
}
