#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++) 
    {
        // Inner loop: moves through the array
        for(int j = 0; j < n - i - 1; j++) 
        {
            if(a[j] > a[j+1]) 
            {
                int temp = a[j];    
                a[j] = a[j+1];      
                a[j+1] = temp;      
            }
        }
    }
}

int main()
{
    int n = 6;
    int a[] = {2 , 5 , 1 , 6 , 9 , 3};

    bubble_sort(a, n);

    cout << "The array after sort: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}