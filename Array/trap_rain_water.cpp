#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int leftmax = 0, rightmax = 0;
        int water = 0;
        int maxheight = height[0], index = 0;

        // Find maximum height and its index
        for (int i = 1; i < n; i++) {
            if (height[i] > maxheight) {
                maxheight = height[i];
                index = i;
            }
        }

        // Left part
        for (int i = 0; i < index; i++) {
            if (leftmax > height[i])
                water += leftmax - height[i];
            else
                leftmax = height[i];
        }

        // Right part
        for (int i = n - 1; i > index; i--) {
            if (rightmax > height[i])
                water += rightmax - height[i];
            else
                rightmax = height[i];
        }

        return water;
    }
};

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights of bars: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution obj;
    int result = obj.trap(height);

    cout << "Total trapped rain water = " << result << endl;

    return 0;
}
