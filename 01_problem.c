// 1. Write a c program to import 5 number using Array and display sum of it .

#include <stdio.h>

int main() {
    int x[5];
    int sum = 0;
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", & x[i]);
    }

    for(i = 0; i < 5; i++) {
        sum += x[i];
    }

    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;
}
