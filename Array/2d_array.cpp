#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    
    for(int j= 0; j<col; j++)
    for(int i = 0; i<row; i++)
    cout<<arr[i][j]<<" ";
}
int main()


{
    //create 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the value in row wise
    for(int row = 0; row<3; row++)
    for(int col = 0; col<4; col++)
    cout<<arr[row][col]<<" ";
//print all the value in col wise and fun call
    printcol(arr,3,4);


    //find the array
    int X = 7;
    for(int row =0; row<3; row++)
    for(int col = 0; col<4; col++)
    {
        if(arr[row][col] == X)
    
    {
        cout<<"Yes";
        return 0;

    }
}

cout<<"No";


   
}