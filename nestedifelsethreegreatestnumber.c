/*WAP to find the greatest number among 3 number by using nested if else */

#include<stdio.h>

int main() {
	
	int a, b, c;
	
	printf("Enter any three number: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b) { //'b' is already smaller than 'a', 'b' is out of range
		if (a>c) // 'b' out of range vaye paxi 'c' ta baki nai xa so (a>c)
			printf("%d is the greatest number", a);
		else
			printf("%d is the greatest number", c);
	}
	else if (b>c) //yeta chai 'a' already sano xa tei vayera 'a' na haleko
		printf("%d is the greatest number", b);
	else
		printf("%d is the greatest number", c);
	return 0;
}
