#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //Reverse

    int start =0, end = s.size()-1;
    while(start<end)
    {
        swap(s[start], s[end]);
        start++, end--;
    }
    cout<<"The swaping string is: "<<s;
}