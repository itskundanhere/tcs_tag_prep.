#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sumofdivisior = 0;

    for(int i =1; i<n; i++)
    {
        if(n % i == 0)
        {
            sumofdivisior += i;
        }


    }


        if(sumofdivisior>n)
        {
            cout<<"It is an abundant number.";
        }

        else
        cout<<"It is not an abundant number.";

}