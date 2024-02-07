#include<iostream>
using namespace std;

void findSequence(int arr[], int n) {
    for (int k = 2; k < n; ++k) {
        int left = 0;
        int right = k - 1; 
        while (left < right) {
            if (arr[left] + arr[right] == arr[k])
            {
                cout << left << ", " << right << ", " << k << endl;
                return;
            } 
            else if (arr[left] + arr[right] < arr[k]) 
            {
                left++;
            } 
            else 
            {
                right--;
            }
        }
    }
    cout << "No sequence found" << endl;
}

int main() {
    int T, n;
    cout << "Enter number of test cases: ";
    cin >> T;
    for (int t = 0; t < T; ++t) {
        cout << "Enter size of array: ";
        cin >> n;
        int* arr = new int[n];
        cout << "Enter array elements: ";
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        findSequence(arr, n);
        delete[] arr;
    }
    return 0;
}
