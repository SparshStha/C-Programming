#include<stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact *i;
    }
    printf("The factroial is: %d", fact);

    return 0;
}