#include <iostream>
using namespace std;

int search(int arr[], int target, int size, bool findStartIndex) {
    int answer = -1;
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target < arr[mid])
         {
            end = mid - 1;
         } 
        else if (target > arr[mid])
         {
            start = mid + 1;
         }
        else {
            answer = mid;

            if (findStartIndex) 
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }

    return answer;
}

int count(int arr[], int size, int x) {
    int firstIndex = search(arr, x, size, true);
    int lastIndex = search(arr, x, size, false);

    if (firstIndex != -1 && lastIndex != -1)
        return lastIndex - firstIndex + 1;
    else
        return 0;
}

int main() {
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the target element to search: ";
    cin >> x;

    int c = count(arr, n, x);

    cout << x << " - " << c << endl;
    
    return 0;
}
