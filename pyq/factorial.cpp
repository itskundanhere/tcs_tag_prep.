#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int prod = 1;
    while(n>0){
        prod = prod*n;
        n--;
    }
    cout<<"This factorial of the number is: "<<prod<<endl;
    return 0;
}