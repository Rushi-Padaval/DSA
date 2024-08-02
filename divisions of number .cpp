#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void divisions() {
    int n;
    vector<int> ls; // Use a vector to store divisors
    cin >> n;
    
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ls.push_back(i); // Add i to the vector
            if ((n / i) != i) {
                ls.push_back(n / i); // Add n / i to the vector
            }
        }
    }
    
    sort(ls.begin(), ls.end()); // Sort the vector
    auto last = unique(ls.begin(), ls.end()); // Remove duplicates
    ls.erase(last, ls.end()); // Erase remaining duplicates
    
    for (auto it : ls) cout << it << " "; // Print the unique divisors
    cout << endl;
}

int main() {
    divisions();
    return 0;
}
