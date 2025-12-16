#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the rows and columns: ";
    cin>>n>>m;
    cout<<"Enter the value for rows and column: ";
    vector<vector<int> >matrix(n, vector<int>(m,1));

    for(int i =0; i<n; i++)
    for(int j =0; j<m; j++)
    cin>>matrix[i] [j];

    for(int i = 0; i<n;i++)
    {
        for(int j =0;j<m; j++)
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}