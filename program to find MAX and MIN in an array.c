#include <stdio.h>
#include <conio.h>

int main()
{
    // Initializing an array of integers with 15 elements
    int arr[15] = {10, 11, 15, 16, 18, 2, 4, 9, 3, 110, 5, 8, 7, 35, 64};

    // Initializing min and max with the first element of the array
    int min = arr[0], max = arr[0];

    // Loop through each element in the array
    for (int i = 0; i < 15; i++)
    {
        // Check if the current element is less than the current min
        if (min > arr[i])
        {
            // Update min if a smaller number is found
            min = arr[i];
        }
        // Check if the current element is greater than the current max
        else if (max < arr[i])
        {
            // Update max if a larger number is found
            max = arr[i];
        }
    }

    // Print the minimum value found in the array
    printf("\n MIN = %d", min);
    // Print the maximum value found in the array
    printf("\n MAX = %d", max);

    return 0; // Indicate successful termination of the program
}
