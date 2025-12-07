#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Give the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of unsorted array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   

    for(int i = 0; i<n-1; i++)
    {
        int index = i;
        for(int j = i+1; j<n; j++){
            if (arr[j]<arr[index])
            index = j;
        }

        swap (arr[i], arr[index]);
    }
    cout<<"The sorted element of the array is this: ";
    for(int i =0; i<n; i++)
    {
   cout<<arr[i]<<" ";
    }

    return 0;
    



}