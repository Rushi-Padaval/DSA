#include <iostream>
using namespace std;

void Number() {
    int n;
    cin >> n;

    int originalNumber = n;
    int sum = 0;

    // Calculate the sum of each digit raised to the power of 3
    while (n > 0) {
        int ld = n % 10;  // Last digit
        int armstrongNum = ld * ld * ld;  // Cube of the last digit
        sum += armstrongNum;  // Add to sum
        n = n / 10;  // Remove last digit
    }

    // Compare the sum to the original number
    if (sum == originalNumber) {
        cout << "True";
    } else {
        cout << "False";
    }
}

int main() {
    Number();
    return 0;
}
