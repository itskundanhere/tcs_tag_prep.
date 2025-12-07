#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size of the array: ";
    cin>>num;

    int arr[num-1];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<num-1; i++){
        cin>>arr[i];
    }
// Total sum of the array
    int sum =0;
    for(int i =0; i<num-1; i++){
        sum = sum+arr[i];

    }

    // sum of the n number 

    int ans = num*(num+1)/2;
    int missing = ans - sum;
    
    cout<<"Missing number is: "<<missing<<endl;
    return 0;

}