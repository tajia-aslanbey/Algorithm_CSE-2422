#include <iostream>
using namespace std;
void countingSort(int a[], int n) {
int max = a[0];
for (int i = 1; i < n; i++) {
if (a[i] > max) {
max = a[i];
}
}
int count[100] = {0};
for (int i = 0; i < n; i++) {
count[a[i]]++;

}
int k = 0;
for (int i = 0; i <= max; i++) {
while (count[i] > 0) {
a[k] = i;
k++;
count[i]--;
}
}
}
int main() {
int a[] = {4, 2, 2, 8, 3, 3, 1};
int n = 7;
countingSort(a, n);
cout << "Sorted Array: ";
for (int i = 0; i < n; i++) {
cout << a[i] << " ";
}
return 0;
}
