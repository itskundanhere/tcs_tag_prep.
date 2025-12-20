#include<iostream>
using namespace std;
int main()
{
    int v;
    cout<<"Enter the total number of vehicals(Two + four wheelers): ";
    cin>>v;

    int w;
    cout<<"Total number of wheels: ";
    cin>>w;

    int x = (4 * v - w) / 2;
    int y = (w - 2 * v) / 2;

    cout << "Two wheelers: " << x << endl;
    cout << "Four wheelers: " << y << endl;
    return 0;
}