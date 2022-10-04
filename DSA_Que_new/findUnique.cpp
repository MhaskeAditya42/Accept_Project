#include<iostream>
using namespace std;
/*
XOR has unique property agar sane element ke 
sath XOR karte hain to answer zero aata hain.
*/
int findUnique( int arr[], int size)
{
    int ans=0;
    for ( int i=0; i<size; i++ )
    {
        ans = ans^arr[i];
    }
    cout<< ans << endl;
    return ans;
}
int main()
{
   int arr[7]= { 3,6,7,6,7,1,3};
   findUnique( arr,7);

}