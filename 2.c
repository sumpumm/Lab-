#include <iostream>
using namespace std;

void nextCombination(int* a, int n, int r) {
    int i = r - 1;
    while (i >= 0 && a[i] == n - r + i + 1) {
        i--;
    }
    if (i >= 0) {
        a[i]++;
        for (int j = i + 1; j < r; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int a[r];
    for (int i = 0; i < r; i++) {
        a[i] = i + 1;
    }

    cout << "First combination: ";
    for (int i = 0; i < r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    nextCombination(a, n, r);
    cout << "Next combination: ";
    for (int i = 0; i < r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
