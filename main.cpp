#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    cout << a << " " << b << " ";
    for(int i = 2; i < n; i++) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
