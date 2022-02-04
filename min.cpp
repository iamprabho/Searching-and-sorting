#include <iostream>

using namespace std;

void minheapify(int arr[], int n, int i)
{
    int small = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    
    if (l < n && arr[l] < arr[small]){
       small=i;
    }

    
    if (r < n && arr[r] < arr[small]){
        small = r;
    }
    // If largest is not root
    if (small != i) {
        swap(arr[i], arr[small]);

        // Recursively heapify the affected sub-tree
        minheapify(arr, n, small);
    }
}


void heapSort(int arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        minheapify(arr, n, i);

    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        minheapify(arr, i, 0);
    }
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main()
{
    int arr[] = {6,5,4,9,8,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}