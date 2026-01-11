#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num1, num2, num3, num4;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"Enter the third number: ";
    cin>>num3;

    cout<<"Enter the fourth number: ";
    cin>>num4;

    int maxnumber = max(num1, max(num2, max(num3,num4)));
    cout<<"The maximum value is: "<<maxnumber<<endl;
    return 0;

}