#include<iostream.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Binary number: ";
    cin>>num;
       
        int rem, ans = 0, mul = 1;
         while(num>0)
         {
            rem = num%2;
            num = num/2;
            ans = rem*mul+ans;
            mul = mul*10;

         }
         cout<<"Decimal number is: "<<ans<<endl;

    


}