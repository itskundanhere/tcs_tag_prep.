
/*
 * Given a number N, your task is to calculate and print the sum of the table of N.
Sample test case 1:
Input:
N = 10
ouput: 55 * 10 = 550
550
Sample test case 2:
Input:
N = 68 
N * (1-10) -> 55 * 68 = 3740
ouput:
3740
 */


 #include<iostream>
 using namespace std;
 int main()
 {
    int N;
    cout<<"Enter the number: ";
    cin>>N;

    int sum = 55;
    
    int target = sum*N;
    cout<<"The output is: "<<target;

    return 0;
    

 }