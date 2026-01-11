#include<iostream>
using namespace std;


string ones[]={
    "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
};
string teens[] = {
    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
};

string tens[] = {
    "", "", "Twenty", "Thirty", "Forty",
    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};

void numbertowords(int n){
    if(n==0){
        cout<<"Zero";
        return;

    }
    if(n>=1000){
        cout<<ones[n/100]<<"Thousand";
        n%=100;
    }
    if(n>=100){
        cout<<tens[n/10]<<" ";
        n%=10;
    }
    if(n>=10 & n<=19){
        cout<< teens[n-10];
        return; 
    }
    if (n>0){
           cout<<ones[n]; 
    }
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"In words: ";
    numbertowords(n);
    cout<<endl;

    return 0;

}