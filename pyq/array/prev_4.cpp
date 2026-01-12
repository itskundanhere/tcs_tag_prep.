/*Given an integer array nums and an integer target, return all contiguous subarrays whose elements sum to target.
nums = [3, 4, -7, 1, 3, 3, 1, -4]
 target = 7  */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the value of target: ";
    cin >> target;

    vector<vector<int>> result;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            temp.push_back(arr[j]);

            if (sum == target)
            {
                result.push_back(temp);
            }
        }
    }

    // Printing result
    cout << "Subarrays with sum " << target << " are:\n";
    for (auto &subarray : result)
    {
        cout << "[ ";
        for (int x : subarray)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}
