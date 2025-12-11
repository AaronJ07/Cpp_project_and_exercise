#include<iostream>
using namespace std;

// We use 'void' because we are modifying the array directly, not returning a number.
void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++) 
    {
        // Inner loop: moves through the array
        for(int j = 0; j < n - i - 1; j++) 
        {
            // 1. COMPARE THE VALUE (a[j]), not the index (j)
            if(a[j] > a[j+1]) 
            {
                // 2. SWAP THE VALUE
                int temp = a[j];    // Store value of current bucket
                a[j] = a[j+1];      // Pour next bucket into current
                a[j+1] = temp;      // Pour stored value into next
            }
        }
    }
}

int main()
{
    int n = 6;
    int a[] = {2 , 5 , 1 , 6 , 9 , 3};

    // 1. Perform the sort
    bubble_sort(a, n);

    // 2. Print the array manually (C++ cannot print a whole array at once)
    cout << "The array after sort: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}