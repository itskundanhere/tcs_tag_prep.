#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;

    int rem , mul =1, dec =0;
    while(num>0)

    {
        rem = num%10;
        num = num/10;
        dec = dec+rem*mul;
        mul = mul*2;

    }
    int oct = 0;
    mul =1;
    while(dec>0)
    {
        rem = dec%8;
        dec = dec/8;
        oct = oct+rem*mul;
        mul = mul*10;
    }
    cout<<"Octal number is: "<<oct<<endl;

}