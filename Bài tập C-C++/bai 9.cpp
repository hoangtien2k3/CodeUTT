// tinh gai thua  n!

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) {
    	return 1;
	}
    return n * factorial(n -1);
}

int main() {
    int n;
    cout << "Nhap vao n = ";
    cin >> n;
    cout << "\ngia thua n! = " << factorial(n);
    return 0;
}
