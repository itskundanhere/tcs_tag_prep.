#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int digits = 0;
    int sum = 0;
    int dummy = n;

    //step 1 count the number of digits
    while(dummy>0)
    {
        digits++;
        dummy = dummy/10;
    }
    int temp = n;

    while(temp>0){
        int digit = temp%10;
        sum = sum+pow(digit, digits);
        temp = temp/10;
    }
    if (sum == n) {
        cout << "It is an Armstrong number." << endl;
    } else {
        cout << "It is NOT an Armstrong number as the sum is " << sum << endl;
    }

    return 0;
}