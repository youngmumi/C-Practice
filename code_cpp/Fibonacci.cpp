#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() {
    int n;

    cout << "몇 항까지 구할까요: ";
    cin >> n;

    int* fib = new int[n];
    fib[0] = 0;
    fib[1] = 1;

    if (n >= 1) {
        cout << fib[0] << " ";
    }
    if (n >= 2) {
        cout << fib[1] << " ";
    }

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << " ";
    }

    cout << endl;

    system("pause");

    return 0;
