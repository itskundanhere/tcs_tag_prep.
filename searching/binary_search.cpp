#include<iostream>
using namespace std;
   int BinarySearch(int arr[], int n, int key)
{

   
    //start, end, mid
   int start =0;
   int end = n-1;
   int mid;

   while (start<=end)
   {
    //when mid==key
    mid = start+(end-start)/2;
    if (arr[mid]==key)
    return mid;
// when value is larger than mid
    else if (arr[mid]<key)
    start = mid+1;
// when value is smaller than key
    else
    end = mid-1;
    
    
   }

   return -1;
   

   


}


int main()


{
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element: ";
    for(int i =0; i<n; i++)
    cin>>arr[i];

    int key;
    cout<<"Enter the key: ";
    cin>>key;


    cout<<BinarySearch(arr, n, key)<<endl;
    return 0;
}