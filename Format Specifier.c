// sample programming of format specifier

#include<stdio.h>
#include<conio.h>

int main(){
	float item1 = 20.232;	
	float item2 = 40.1233;
	float item3 = 50.1453;
	
	printf("Item 1: $%.2f\n", item1);
	printf("Item 2: $%.2f\n", item2);
	printf("Item 3: $%.2f\n", item3);
	return 0;
}
