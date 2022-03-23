// in ra các số từ 1 -> 9
#include<stdio.h>

int main() {
    int n, count = 0;

    do {
        printf ("\nNhap vao n = ");
        scanf ("%d", &n);
    } while (n < 0 && printf ("Error, Nhap lai:"));

    for (int i=1; i<=n; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    printf ("%d", count);

    return 0;
}