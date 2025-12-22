#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the sttring: ";;
    cin>>s;

    int size;

    while(s[size]!= '\0')
    {
        size++;
    }

    cout<<"the size of string is: "<<size;
}