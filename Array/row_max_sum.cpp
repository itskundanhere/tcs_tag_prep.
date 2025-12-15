#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    
    for(int j= 0; j<col; j++)
    for(int i = 0; i<row; i++)
    cout<<arr[i][j]<<" ";
}

void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;
    for(int i =0; i<row; i++)
    {
        int total = 0;
        for (int j =0; j<col; j++)
        total+= arr[i][j];

        if(sum<total)
        {
            sum = total;
            index = i;
        }
    }
    cout<<index<<" ";
    
    
    
    
}
int main()


{
    //create 2D array
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] ={0,1,2,13,14,25,36,47,58,39,10,11};
    int ans[3][4];

   printrowmax(arr1,3,4);



   
}