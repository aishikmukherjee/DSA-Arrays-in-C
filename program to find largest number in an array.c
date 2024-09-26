#include <stdio.h>
#include <conio.h>

int main()
{
    // Initializing an array of integers
    int arr[10] = {13, 2, 7, 8, 9, 11, 1, 5, 6, 3};
    // Initializing max with the first element of the array
    int max = arr[0];

    // Loop through each element in the array
    for (int i = 0; i < 10; i++)
    {
        // Check if the current element is greater than the current max
        if (max < arr[i])
        {
            // Update max if a larger number is found
            max = arr[i];
        }
    }

    // Print the largest number found in the array
    printf("The largest number in the array is %d\n", max);

    return 0; // Indicate successful termination of the program
}
