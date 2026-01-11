#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the sttring: ";;
    cin>>s;

    int size =0 ;

    while(s[size]!= '\0')
    {
        size++;
    }

    cout<<"the size of string is: "<<size;
}