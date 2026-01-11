#include<iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the value of radius of circle: ";
    cin>>n;

    //area of circle is 3.14*n*n;

    double ans = (3.14*n*n);
    cout<<"The area of circle is: "<<ans;
    return 0;
}