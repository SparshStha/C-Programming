// WAP to find the given price is profit or loss.
#include<stdio.h>

int main() {
	int cp, sp;
	
	printf("Enter Selling Price: ");
	scanf("%d", &sp);
	
	printf("Enter Cost Price: ");
	scanf("%d", &cp);
	
	if (sp>cp) {
		printf("Profit");
	}
	else if (cp>sp) {
		printf("loss");
	}
	else {
		printf("No profit, No loss!");
	}
	return 0;
}
