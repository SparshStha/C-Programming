#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    int power = 1;
    for (int i=1; i<=b; i++){
        power = power * a;
    }
    printf("%d raise to the power %d is %d", a,b,power);
    return 0;
}