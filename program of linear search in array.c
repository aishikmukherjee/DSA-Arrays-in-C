#include <stdio.h>

int main()
{
    // Initialize an array with 25 elements
    int arr[25] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 30, 15, 25, 35, 45};

    int num_search = 30; // Number to search for in the array

    int flag = 0; // Flag to indicate if the number is found

    // Loop through the array to search for the number
    for(int i = 0; i < 25; i++)
    {
        // Check if the current element matches the number being searched
        if(arr[i] == num_search)
        {
            // If found, print the position (i+1 for 1-based index)
            printf("%d is present in array at position %d.\n", num_search, i + 1);
            flag++; // Increment the flag to indicate a match was found
        }
    }

    // After looping, check if the number was found
    if(flag == 0)
    {
        // If the flag is still 0, the number was not found in the array
        printf("%d is not present in array at any position.\n", num_search);
    }

    return 0; // Indicate successful termination of the program
}
