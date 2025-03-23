#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, temp;
    printf("%d %d ", a, b);
    for(int i = 2; i < n; i++) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
