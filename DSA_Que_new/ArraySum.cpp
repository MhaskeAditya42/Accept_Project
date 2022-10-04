#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    cout<< " Enter "<< n << " elements"<< endl;
    for( int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int sum=0;
    for ( int i=0; i<n; i++)
    {
        sum= sum+ arr[i];
    }
    cout<< " Sum of elements of array is "<< sum << endl;
}