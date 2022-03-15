#include<stdio.h>
#include<conio.h>


float sumOfSeries(int n) {
	float sum = 0;
	for (int i=0; i<n; i++) {
		sum += (1.0 / (2*i + 1));
	}
	return sum;
}

int main() {
	float sum = 0;
	int n;
	do {
		printf ("nhap vap n = ");
		scanf ("%d", &n);
		if (n < 1) {
			printf ("\nnhap lai gia tri n = ");
		}
	} while (n < 1);
	
	printf ("\n");
	printf ("\nTong 1 + 1/3 + 1/5 + ... + 1/(2 * %d + 1) = ", n);
	printf ("%f", sumOfSeries(n));
	
	getch();
	return 0;
}
