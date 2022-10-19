#include<bits/stdc++.h>
using namespace std;

int insSort(int F[], int size){

    for (int i = 1; i < size ; i++)
    {
        int key = F[i];
        int j =i-1;
        while (j>=0 && F[j] > key)
        {
            F[j+1] = F[j] ;
            j -= 1;
        }
        F[j+1] = key;

        // pass wise output
        for (int k = 0; k < size; k++)
        {
            cout << F[k]<<"  ";   
        }cout << endl;     
    }
    for (int i = 0; i < size; i++)
    {
        cout << F[i]<<" ";
    }cout << endl;
    
    // return F;
}

void buubleSort (int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        cout << "before = " << arr[i] << endl;
        for (int j = i+1 ; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
        cout << "after = " << arr[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }cout << endl;
    
}




int main()
{
    int arr[5] = {5,2,3,4,11};

    // insSort(arr,5);
    buubleSort(arr,5);
    return 0;
}