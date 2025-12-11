#include<iostream>
using namespace std;

int bubble_sort(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; i < i; j++)
        {
            if(i > j)
            {
                int temp;
                i = temp;
                j = i;
                i = temp;
            }
        }
    }
}

int main()
{
    int n = 6;
    int a[] = {2 , 5 , 1 , 6 , 9 , 3};

    cout << "The array after sort: " << bubble_sort(a, n) << endl;

    return 0;
}