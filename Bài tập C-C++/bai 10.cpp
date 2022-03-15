// T(x, n) = x^(n)
// C1
//#include<stdio.h>
//#include <math.h>
//
//int main() {
//  float x, result;
//  int n;
//  printf("Nhap vào co so x: ");
//  scanf("%f", &x);
//  printf("Nhap vào so mu n: ");
//  scanf("%d", &n);
//  result = pow(x, n);
//  printf("%.1f^%d = %.1f",x,n, result);
//  
//  return 0;
//}

// C2:
#include <iostream>
using namespace std;
long long power(long long a, long long b) {
    long long result = 1;
    for(int i = 1; i <= b; i++) {
    	if (a == 1) {
    		return 1;
		} else if (b == 1) {
			return a;
		}
        result *= a;
    }
    return result;
 }
int main() {
    long long a, b , result;
    cout <<"nhap vao co so a = ";
    cin >> a;
    cout <<"\nnhap vao so mu b = ";
    cin >> b;
    result = power(a, b);
    cout <<"\nket qua a^b = " << result << endl;
}

// C3:

//int pow(int a, int n)
//{
//    if(n == 1) {
//        return a;
//    } else { 
//        if(n % 2 == 0)
//            return pow(a, n/2) * pow(a, n/2);
//        else
//            return pow(a, n/2) * pow(a, n/2) * a;
//    }
//}


