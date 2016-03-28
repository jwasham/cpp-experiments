#include <iostream>

using namespace std;

void minHeapify(int *a, int i, int n) {
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n) {
        if (j < n && a[j + 1] < a[j])
            j = j + 1;
        if (temp < a[j])
            break;
        else if (temp >= a[j]) {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
    return;
}

void buildMinHeap(int *a, int n) {
    int i;
    for (i = n / 2; i >= 1; i--) {
        minHeapify(a, i, n);
    }
}

int main() {
    int n, i, x;
    cout << "enter no of elements of array\n";
    cin >> n;
    int a[20];
    for (i = 1; i <= n; i++) {
        cout << "enter element" << (i) << endl;
        cin >> a[i];
    }
    buildMinHeap(a, n);
    cout << "Min Heap\n";
    for (i = 1; i <= n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}