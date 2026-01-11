#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the String: ";
    cin>>s;

    int start =0, end = s.size()-1;
    while(start<end)
    {
        if(s[start] != s[end])
        {
            cout<<"It is not a palindrome.";
        }
        
         start++, end--;
    }
    cout<<"It is a palindrome.";
}