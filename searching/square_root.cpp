#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    

    long long start = 0, end = n, mid, ans;
    
    while(start<=end)
    {
        mid = start+(end-start)/2;

        long long sq = mid*mid;

        if(sq == n)
        {
            ans = mid;
            break;

        }

        else if (sq<mid)
        {
            ans = mid;
            start = mid+1;
        }

        else
        end = mid-1;

        

        
    }
    
    cout<<"The square root of the number is: "<<ans;
}