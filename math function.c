#include<stdio.h>

int main(){
	int sp;
	printf("Enter selling price");
	scanf("%d", &sp);
	
	int cp;
	printf("Etner cost price: ");
	scanf("%d", &cp);
	
	if (sp>cp){
		printf("profit");
	}
	if (cp>sp){
		printf("loss");
	}
	else if (sp==cp){
		printf("No profit no loss");
	}
	return 0;
}
