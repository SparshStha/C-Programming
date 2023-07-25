#include<stdio.h>
int main (){
    
    int n;
    printf("enter any number: ");
    scanf ("%d", &n);
    for (int i = n; i<=100; i=i+n) {
        printf("%d ", i);
    }
    return 0;
}