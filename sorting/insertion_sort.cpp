#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i<n; i++){
        for(int j = i; j>0; j--){
            if(arr[j] < arr[j-1])
            swap(arr[j], arr[j-1]);
            else
            break;
        }
        
    }
    cout<<"The sorted element is: ";
        for(int i =0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}