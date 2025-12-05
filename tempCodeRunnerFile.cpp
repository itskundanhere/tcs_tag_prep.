#include<iostream.h>
using namespace std;
int main()
{
    int num;
    cout<< "Enter a number: ";
    cin>>num;
    int rem, ans = 0, mul =1;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = mul*num+ans;
        mul = mul*2; 
    }
    cout<<ans<<endl;

}