
#include<stdio.h>
#include<conio.h>

int NhapVao (int a, int b, char c) {
    switch (c) {
        case '+':
            printf ("Tong a + b = %d", a + b);
            break;
        case '-':
            printf ("Hieu a - b = %d", a - b);
            break;
        case '*':
            printf ("Tich a * b = %d", a * b);
            break;
        case '/':
            if (b == 0) {
                printf ("Loi, khong tinh duoc");
            } else  {
                printf ("Thuong a/b = %d", a/ b);
            }
            break;
    }
    return a, b;
}

int main() {
    int a, b;
    char c;
    printf ("Nhap vao a = "); scanf ("%d", &a);
    fflush(stdin);
    printf ("Nhap vao phep toan (+,-,*,/) : ");
    scanf ("%c", c);
    // c = getchar();
    printf ("Nhap vao b = "); scanf ("%d", &b);
    NhapVao(a, b, c);
    return 0;
}

