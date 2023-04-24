#include<stdio.h>

int main() {
	
	int a, b, c;
	
	printf("Enter the age of Ram: ");
	scanf("%d", &a);
	
	printf("Enter the age of Shyam: ");
	scanf("%d", &b);
	
	printf("Enter the age of Hari: ");
	scanf("%d", &c);
	
	if (a<b) {
		if (a<c)
		printf("%d Ram is the youngest", a);
	}
	else if (b<c) {
		printf("%d Shyam is the youngest", b);
	}
	else {
		printf("%d Hari is the youngest", c);
	}
	return 0;
}
