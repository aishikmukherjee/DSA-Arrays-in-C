#include <stdio.h>
#include <conio.h>

int main()
{
    int size; // Variable to store the number of elements in the array

    // Prompt the user to enter the size of the array
    printf("Enter number of elements you want to put in your array: ");
    scanf("%d", &size); // Read the size from user input

    float arr[size], sum = 0; // Declare an array of floats and initialize sum to 0

    // Loop to input elements into the array
    for (int i = 0; i < size; i++)
    {
        // Prompt the user to enter each element
        printf("Enter element number %d : ", i + 1);
        scanf("%f", &arr[i]); // Read each element into the array

        // Accumulate the sum of the elements
        sum = sum + arr[i];
    }

    // Calculate and print the average of the elements in the array
    printf("Average of all the elements in the array is %.3f", sum / size);

    return 0; // Indicate successful termination of the program
}
