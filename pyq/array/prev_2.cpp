/*
 * Given two integers, a and b, your task is to determine the sum of the cubes of
all numbers in the range from a to b.
sample test case
a = 4
b = 9
ouput: 1989
 */


 #include<iostream>
 using namespace std;
 int main()
 {
    int a;
    cout<<"Enter the number of a = ";
    cin>>a;

    int b;
    cout<<"Enter the number of b = ";
    cin>>b;
    int total = 0;

    for(int i = a; i<=b; i++)
    {
        total = total + (i*i*i);
    }

    cout<<"sum of the cubes is: "<<total;

    return 0;









 }