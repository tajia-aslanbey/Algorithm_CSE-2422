#include <iostream>
using namespace std;
int getMax(int a[], int n) {
int max = a[0];
for (int i = 1; i < n; i++) {
if (a[i] > max)
max = a[i];
}
return max;
}
void countingSort(int a[], int n, int place) {
int count[10] = {0};
int output[100];

for (int i = 0; i < n; i++) {
int digit = (a[i] / place) % 10;
count[digit]++;
}
for (int i = 1; i < 10; i++) {
count[i] += count[i - 1];
}
for (int i = n - 1; i >= 0; i--) {
int digit = (a[i] / place) % 10;
output[count[digit] - 1] = a[i];
count[digit]--;
}
for (int i = 0; i < n; i++) {
a[i] = output[i];
}
}
void radixSort(int a[], int n) {
int maxNum = getMax(a, n);
int place = 1;
while (maxNum / place > 0) {
countingSort(a, n, place);
place *= 10;
}
}

int main() {
int a[] = {23, 5, 87, 12, 59, 1};
int n = 6;
radixSort(a, n);
cout << "Sorted Array: ";
for (int i = 0; i < n; i++) {
cout << a[i] << " ";
}
return 0;
}
