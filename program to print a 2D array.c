#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10]; // Declare an array of integers to hold 10 elements

    // Loop to get user input for each element of the array
    for(int i = 0; i < 10; i++)
    {
        // Prompt the user to enter each element
        printf("\nEnter element number %d : ", i + 1);
        scanf("%d", &arr[i]); // Read the input and store it in the array
    }

    // Print the contents of the array
    printf("\n\nThe array: [");
    for(int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]); // Print the current element
        // Check if it's not the last element to decide on a comma
        if(i != 9)
        {
            printf(", "); // Print a comma after each element except the last one
        }
        else
        {
            printf(" ]"); // Close the array brackets after the last element
        }
    }

    return 0; // Indicate successful termination of the program
}
