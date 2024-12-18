// 1. Write a c program to import 5 number using Array and display sum of it .

#include <stdio.h>  // Include standard input-output library

int main() {
    int arr[5];   // Declare an array to store 5 integers
    int sum = 0;  // Initialize sum variable to 0
    int i;        // Declare a loop counter variable

    // Prompt the user to enter 5 numbers
    printf("Enter 5 numbers:\n");

    // Loop to input 5 numbers from the user
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);  // Prompt the user for the current number
        scanf("%d", &arr[i]);  // Store the number in the array at index i
    }

    // Loop to calculate the sum of the numbers
    for(i = 0; i < 5; i++) {
        sum += arr[i];  // Add the value of arr[i] to sum
    }

    // Display the sum of the entered numbers
    printf("The sum of the entered numbers is: %d\n", sum);

    return 0;  // Return 0 to indicate successful program execution
}
