#include <stdio.h>
#include <conio.h>

// Function prototype for binary search
void binary_search(int arr[], int size, int num);

int main()
{
    // Initializing a sorted array of integers
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calling the binary search function to find the number 5
    binary_search(arr, 10, 5);
    return 0; // Indicate successful termination of the program
}

void binary_search(int arr[], int size, int num)
{
    // Initializing the start and end indices for the search range
    int start = 0;
    int end = size - 1;
    int flag = 0; // Flag to track if the number is found

    // Loop until the search range is valid
    while (start <= end)
    {
        // Calculate the middle index to divide the search range
        int mid = start + (end - start) / 2; // Correct calculation to avoid overflow

        // Check if the middle element is the number we're searching for
        if (arr[mid] == num) // Number found
        {
            // Print the index and position of the found number
            printf("%d is present in the array at index: %d and position: %d.\n", num, mid, mid + 1);
            flag = 1; // Set flag to indicate the number was found
            break; // Exit the loop since the number is found
        }
        // If the number at mid is greater than the searched number
        else if (arr[mid] > num)
        {
            // Adjust the end index to search the left half
            end = mid - 1; // Exclude mid since it's not the number we're looking for
        }
        // If the number at mid is less than the searched number
        else
        {
            // Adjust the start index to search the right half
            start = mid + 1; // Exclude mid since it's not the number we're looking for
        }
    }
    // If the number was not found after exiting the loop
    if (flag == 0)
    {
        // Print that the number is not present in the array
        printf("%d is not present in the array.\n", num);
    }
}
