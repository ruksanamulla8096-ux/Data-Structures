#include <stdio.h>

// Function to get maximum element
int getmax(int a[], int n)
{
    int max = a[0];
    int i;

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

// Counting Sort used inside Radix Sort
void CountSort(int a[], int n, int pos)
{
    int count[10] = {0};
    int b[n];
    int i, k = 9;

    // Count occurrences
    for(i = 0; i < n; i++)
        ++count[(a[i] / pos) % 10];

    // Cumulative count
    for(i = 1; i <= k; i++)
        count[i] = count[i] + count[i - 1];

    // Build output array
    for(i = n - 1; i >= 0; i--)
    {
        b[--count[(a[i] / pos) % 10]] = a[i];
    }

    // Copy to original array
    for(i = 0; i < n; i++)
        a[i] = b[i];
}

// Radix Sort function
void radixsort(int a[], int n)
{
    int max = getmax(a, n);
    int pos;

    for(pos = 1; max / pos > 0; pos *= 10)
        CountSort(a, n, pos);
}

// Main function
int main()
{
    int a[20], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    radixsort(a, n);

    printf("Sorted elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}