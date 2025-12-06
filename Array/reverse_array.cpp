#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {10,5,30,52,69,77};
    int start=0, end = 5;

    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;

    };
    for(int i=0; i<6;i++)
    cout<<arr[i]<<" ";
}