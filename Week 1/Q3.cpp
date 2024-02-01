#include <iostream>
#include <cmath>
using namespace std;

string js(const int arr[], int n, int key, int &comp) {
    int step = sqrt(n); 


    int prev = 0, curr = step;
    while (curr < n && arr[curr] < key) {
        prev = curr;
        curr += step;
        comp++;
    }


    for (int i = prev; i < min(curr, n); ++i) {
        comp++;
        if (arr[i] == key) {
            return "Present";
        }
    }

    return "Not Present";
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n; 

        int arr[n];
        cout << "Enter " << n << " space separated integers describing the array: ";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int key;
        cout << "Enter the key element to be searched: ";
        cin >> key;

        int comp = 0;
        string result = js(arr, n, key, comp);

        cout << result << endl;
        cout << "Comparisons: " << comp << endl;
    }

    return 0;
}
