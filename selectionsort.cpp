#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int mini = i; // Assume the first unsorted element is the minimum

        for (int j = i + 1; j <= n - 1; j++) { // Find the smallest element in the unsorted part
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selection_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
