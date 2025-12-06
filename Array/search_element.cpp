#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements in an array: ";
    cin >> num;

    int arr[num];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    int X;
    cout << "Enter the element to be searched: ";
    cin >> X;

    int index = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] == X)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
