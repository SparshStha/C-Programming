/*If the age of Ram, Shyam and Hari are input through the keyboard, WAP
to determine the youngest of the three */
#include<stdio.h>

int main () {
	int a, b, c; /* Yesma maile ram ko age a vanera define gariye jastai
	b vanera Shyam and c vanera Hari
	*/
	
	printf("Enter the age of Ram: ");
	scanf("%d", &a);
	
	printf("Enter the age of Shyam: ");
	scanf("%d", &b);
	
	printf("Enter the age of Hari: ");
	scanf("%d", &c);
	
	if (a<b && a<c) {
		printf("%d Ram is smaller than others",a);
	}
	else if (b<a && b<c) {
		printf("%d Shyam is smaller than others", b);
	}
	else {
		printf ("%d Hari is smaller tha others", c);
	}
	return 0;
}
