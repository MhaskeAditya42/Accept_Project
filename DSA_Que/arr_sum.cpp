#include <iostream>
#include <math.h>
using namespace std;


int sum(int num[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }

    return sum;
}

int main()
{
    int size;
    cin >> size;

    int arr[1000];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of elements in an array:- " << sum(arr, size) << endl;
}