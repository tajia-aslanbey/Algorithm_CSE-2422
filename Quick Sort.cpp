#include <iostream>
using namespace std;
int partition(int arr[], int start, int end) {
int pivot = arr[end];
int i = start - 1;
for (int j = start; j < end; j++) {
if (arr[j] < pivot) {
i++;
swap(arr[i], arr[j]); }
swap(arr[i + 1], arr[end]);
return i + 1;
}
void quickSort(int arr[], int start, int end) {
if (start < end) {
int pi = partition(arr, start, end);
quickSort(arr, start, pi - 1);
quickSort(arr, pi + 1, end);
} }

int main() {
int arr[] = {8, 4, 7, 9, 3, 10};
int n = 6;
quickSort(arr, 0, n - 1);
cout << "Sorted Array: ";
for (int i = 0; i < n; i++) {
cout << arr[i] << " ";
}
return 0;
}
