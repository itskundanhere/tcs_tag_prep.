#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>arr;
    arr.push_back(12);
    arr.push_back(1);
    arr.push_back(122);
    arr.push_back(125);
    arr.push_back(120);
    arr.push_back(121);
    arr.push_back(102);
    arr.push_back(1112);

    //sort the value in increasing order

    sort(arr.begin(), arr.end());
    for(int i =0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    //sort in decreasing ordr
    // sort(arr.rbegin(), arr.rend());
    // for(int i=0; i<arr.size(); i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;

    //search in binary

    cout<<binary_search(arr.begin(), arr.end(),120)<<endl;///if exist
    cout<<binary_search(arr.begin(), arr.end(),1120)<<endl;//if not exist

    

}