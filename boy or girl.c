#include<stdio.h>

int main() {
	
	int a;
	
	printf("If you are boy press 1, if you are girl press 2: ");
	scanf("%d", &a);
	
	switch (a){
			case 1:
		printf("You are Boy!");
		break;
	case 2:
		printf("You are Girl!");
		break;
	default:
		printf("You are some thing else!");
	}
	return 0;
		
}
