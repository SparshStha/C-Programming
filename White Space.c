// Online C compiler to run C program online
#include <stdio.h>
#include<string.h> //futher we can discuss it

int main() {
    char name[25];
    int age; 
    
    printf("What is your name: ");
    //scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    
    printf("\nHow old are you? ");
    scanf("%d", &age);
    
    printf("\nHello %s, How are you?", name);
    printf("\nAren't you %d years old.?", age);
    

    return 0;
}
