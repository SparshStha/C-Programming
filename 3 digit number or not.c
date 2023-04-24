#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	if (n>99 && n<1000){
		printf("It is three digit number");
	}
	else {
		printf("NO it isn't three digit number");
	}
	return 0;
}
