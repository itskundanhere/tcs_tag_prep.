// A chocolate factory is packing chocolates into the packets. The chocolate packets here represent an array
// of N number of integer values. The task is to find the empty packets (0) of chocolate and push it to the
// end of the conveyor belt (array).

// Example 1 :

// N = 8 and arr = [4, 5, 0, 1, 9, 0, 5, 0]

// There are 3 empty packets in the given set.
// These 3 empty packets represented as 0 should be pushed towards the end of the array.


#include<iostream>
using namespace std; 
int main()
{
    int N;
    cout<<"Enter the Number of choloate packets: ";
    cin>>N;

    int arr[N];
    cout<<"Enter the Choloates in packets :  ";
    for(int i = 0; i<N; i++)
    {
     cin>>arr[i];
    }

    int index = 0;
    for(int i =0; i<N; i++)
    {
        if (arr[i]!= 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index<N)
    {
        arr[index] = 0;
        index++; 
    }
cout << "Array after pushing empty packets to the end: ";
    for(int i =0; i<N; i++)
    {
        cout<< arr[i]<<" ";
    }
    return 0;






}