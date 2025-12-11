#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;


    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    

    int start =0, end = n-1;
    while(start<end)
    {
        if (arr[start] == 0)
        start++;

        else {
        if(arr[end] == 0)
        
        {
        swap (arr[start], arr[end]);
        start++, end--;
        }
        else
        end--;
        }

        
    }

    cout<<"The sorted element of the array is this: ";
    for(int i =0; i<n; i++)
    {
   cout<<arr[i]<<" ";
    }

    return 0;

    


}