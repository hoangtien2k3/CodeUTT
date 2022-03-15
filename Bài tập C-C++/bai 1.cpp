#include<stdio.h>

int main() {
	int n;
	printf ("nhap vao n = ");
	scanf ("%d", &n);
	int sum = 0;
	for (int i=1; i<=n; i++) {
		sum += i;
	}
	printf ("\n\ntong cac phan tu = ");
	printf ("%d", sum);
	return 0;
}
