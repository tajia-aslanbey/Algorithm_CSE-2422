#include <iostream>
using namespace std;

int main() {
    int arr[] = {60, 31, 23, 14, 24, 11, 70};
    int n = 7;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Sorted: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
