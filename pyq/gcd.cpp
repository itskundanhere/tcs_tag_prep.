#include <iostream>
using namespace std;

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    int ans = gcd(a, b);

    cout << "The GCD of the two numbers is " << ans << endl;

    return 0;
}
