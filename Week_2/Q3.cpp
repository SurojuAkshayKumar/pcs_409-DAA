#include <iostream>
using namespace std;

int countPairsWithDiffK(int arr[], int n, int k) 
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k)
                count++;
    }
    return count;
}

int main() {
    int T, n, k;
    cout << "Enter number of test cases: ";
    cin >> T;
    while (T--) 
    {
        cout << "Enter size of array: ";
        cin >> n;
        int* arr = new int[n]; 
        cout << "Enter " << n << " elements of array: ";
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        cout << "Enter the key (k): ";
        cin >> k;
        cout << "Count of pairs with given diff is " << countPairsWithDiffK(arr, n, k) << endl;
        delete[] arr; 
    }
    return 0;
}
