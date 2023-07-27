#include<stdio.h>
int main() {

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0;
    int rev = 0;

    while(n>0){
        rev= rev*10;
        rev = rev + (n%10);
        n = n/10;
    }
    printf("The reverse number is %d", rev);
    sum = rev + n;
    printf("The sum = %d", sum);
    return 0;
}