// wap to count the digit of the given number

#include<stdio.h>

int main() {
    
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int count = 0;
    while (n!=0){
        n = n/10;
        count++;
    }
    printf("The number of the digits are %d",count);
    return 0;
}