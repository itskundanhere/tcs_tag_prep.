/*
 * You are given an array of integers, arr,
and an integer k. Your task is to find and print the maximum number in
each contiguous window of size k.
Sample test case 1:
Input:
arr = [1, 3, -1, -3, 5, 3, 6, 7] k=3
Output:
[3, 3, 5, 5, 6, 7]
 */


 #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = 3;   // window size
    vector<int> result;

    // Sliding window logic
    for (int i = 0; i <= n - k; i++)
    {
        int maxVal = arr[i];

        for (int j = i; j < i + k; j++)
        {
            if (arr[j] > maxVal)
                maxVal = arr[j];
        }

        result.push_back(maxVal);
    }

    cout << "Output: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}
