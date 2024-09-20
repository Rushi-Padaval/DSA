// #include <bits/stdc++.h>
// using namespace std ;

// int main () {
//     int n ;
//     cin >> n ;
//     int arr [n];
//     for (int i=0 ; i<n ; i++) {
//         cin >> arr [i];
//     }
    
//     int hash [13] = {0};
//     for (int i = 0 ; i < n ; i++) {
//         hash [arr [i]] += 1 ;
        
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         int number ;
//         cin >> number ;
//         //fetch
        
//         cout << hash[number] << endl ;
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);  // Use vector for dynamic array allocation
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     vector<int> hash(13, 0);  // Use vector for hash table, initialized to 0

//     // Populate the hash array
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= 0 && arr[i] < 13) {  // Ensure arr[i] is within valid range
//             hash[arr[i]] += 1;
//         } else {
//             cout << "Invalid input: " << arr[i] << " is out of range (0-12)." << endl;
//             return 1;  // Exit if invalid input is detected
//         }
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
        
//         // Fetch the count from the hash array
//         if (number >= 0 && number < 13) {  // Check if the number is within range
//             cout << hash[number] << endl;
//         } else {
//             cout << "0" << endl;  // If out of range, print 0
//         }
//     }
    
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;

    return 0;
}