#include <iostream>
using namespace std;

void printDigits() {
    int n = 7789;
    int lastDigit;
    int cnt = 0;
    
    while (n > 0) {
        lastDigit = n % 10;
        cout << lastDigit;
        cnt = cnt + 1;
        n = n / 10;
    }
    
    cout << endl; 
    cout << "The Loop Was Runs For The \033[31m" << cnt << "\033[0m Times" << endl; // Red color for cnt
}

int main() {
    printDigits();
    return 0;
}
