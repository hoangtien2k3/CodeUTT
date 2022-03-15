#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	float sum = 0;
	do {
		printf ("nhap gia tri n = ");
		scanf ("%d", &n);
		if (n < 1) {
			printf ("\nnhap lai gia tri n = ");
		}
	} while (n < 1);
	
	for (int i=1; i<=n; i++) {
		sum += 1.0 / (i * (i + 1));
	}
	
	printf ("\n");
	printf("\nTong = %f", sum);
}
