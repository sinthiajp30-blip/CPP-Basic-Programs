#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of terms (N): ";
    cin >> N;

    long long a = 0, b = 1, fib;
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        if (i == 0)
            fib = 0;
        else if (i == 1)
            fib = 1;
        else {
            fib = a + b;
            a = b;
            b = fib;
        }

        if (i % 2 == 0)
            sum += fib;
    }

    cout << "Sum of Fibonacci numbers at even indexes up to "
         << N << " terms is: " << sum << endl;

    return 0;
}

