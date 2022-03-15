#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	float sum = 0;
	
	do {
		printf ("nhap vap n = ");
		scanf ("%d", &n);
		if (n < 1) {
			printf ("\nnhap lai gia tri n = ");
		}
	} while (n < 1);
	for (int i=1; i<=n; i++) {
		sum += (1.0/ (2 * i));
	}
	
	printf ("\n");
	printf ("\nsum = %f", sum);
	printf ("\nTong 1/2 + 1/4 + ... + 1/2%d = %.2f ",n, sum);
	
	
	getch();
	return 0;
}
