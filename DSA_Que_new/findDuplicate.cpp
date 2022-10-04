#include <iostream>
using namespace std;
// codeStudio Question 

int findDuplicate(int arr[] , int size)
{
     int ans =0;
    // XORing all array elements
    for ( int i=0; i< size ; i++)
    {
        ans= ans^arr[i];
    }

    // XOR [ 1, n-1]  
    for( int i=0; i< size; i++)
    {
        ans=ans^i;
    }
    cout<< ans<< endl;
}

int main()
{
     int arr[7]= { 1,3,7,3,2,1,1};
     findDuplicate( arr, 7);
} 

// Find all duplicates in an array 
