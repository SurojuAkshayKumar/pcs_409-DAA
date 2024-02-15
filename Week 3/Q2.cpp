#include <iostream>

using namespace std;

void selectionSort(int arr[], int n, int& comp, int& s) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;

        for (int j = i + 1; j < n; ++j) {
            comp++;
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(arr[i], arr[min]);
            s++;
        }
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
        selectionSort(arr, n, comp, s);

        cout << "Sorted Array:";
        for (int j = 0; j < n; ++j) {
            cout << " " << arr[j];
        }
        cout << endl;

        cout << "Comparisons: " << comp << endl;
        cout << "Swaps: " << s << endl;
    }

    return 0;
}
