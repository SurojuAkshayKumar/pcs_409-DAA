#include <iostream>

using namespace std;

void is(int arr[], int n, int& comp, int& s) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        comp++;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
            s++;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        int comp = 0, s = 0;
        is(arr, n, comp, s);

        cout << "Sorted Array:";
        for (int j = 0; j < n; ++j) {
            cout << " " << arr[j];
        }
        cout << endl;

        cout << "Comparisons: " << comp << endl;
        cout << "Shifts: " << s << endl;
    }

    return 0;
}
