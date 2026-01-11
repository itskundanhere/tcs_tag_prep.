/*An automorphic number is a number whose square ends with the original number 
itself, like 5 (5²=25) or 76 (76²=5776)*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number: ";
    cin >> N;

    int sq = N * N;
    int temp = N;
    bool flag = true;   // assume number is automorphic

    while (temp > 0) {
        // Compare last digits
        if (temp % 10 != sq % 10) {
            flag = false;
            break;
        }
        // Remove last digits
        temp /= 10;
        sq /= 10;
    }

    if (flag) {
        cout << "It is an Automorphic Number" << endl;
    } else {
        cout << "It is NOT an Automorphic Number" << endl;
    }

    return 0;
}
