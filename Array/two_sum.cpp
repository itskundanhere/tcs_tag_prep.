#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];

    }

    int target;
    cout<<"Enter the target value: ";
    cin>>target;
    

    vector<int> ans;
    int start = 0, end = n-1;
    while(start<end)
    {
        int sum = arr[start]+arr[end]; 
        if( sum == target)
        {
            ans.push_back(start++);
            ans.push_back(end--);
            break;
            
        }
        else if (sum<target)
        start++;

        else
        end--;
    }
    if(ans.size() == 0)
        cout << "No pair found!";
    else
        cout << "Two sum indices : " << ans[0] << " and " << ans[1];
}