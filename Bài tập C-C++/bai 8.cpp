#include<iostream>

using namespace std;

int main() {
	int n;
	float sum = 0;
	
	do {
		cout << "Nhap vao n = ";
		cin >> n;
		if (n < 1) {
			cout << "\nnhap lai gia tri n = ";
		}
	} while (n < 1);
	
	for (int i=0; i<n; i++) {
		sum = sum + (float)(2 * i + 1) /(2 * i + 2);
	}
	cout << "\nTong 1/2 + 3/4 + 5/6 +...+ (2*n + 1)/(2*n + 2)" << " " << "= " << sum;
	return 0;
}
