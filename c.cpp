#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int N = n;
//     int dem[10000];
//     for (int i = 0; i < n; i++)
//     {
//         dem[i] = 0;
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             dem[i]++;
//             n /= i;
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (dem[i])
//         {
//             cout << i << " " << dem[i] << endl;
//         }
//     }
//     return 0;
// }

int StrToNumArr(char a[], char b[], int A[], int B[])
{
    int lenA = strlen(a);
    int lenB = strlen(b);

    int len;
    if (lenA > lenB)
        len = lenA;
    else
        len = lenB;
    lenA--;
    lenB--;
    for (int i = len - 1; i >= 0; i--)
    {
        if (lenA >= 0)
        {
            A[i] = a[lenA] - '0';
            lenA--;
        }
        else
            A[i] = 0;

        if (lenB >= 0)
        {
            B[i] = b[lenB] - '0';
            lenB--;
        }
        else
            B[i] = 0;
    }
    return len;
}
//
long long big_mod(int A[], int B[])
{
    long long res = 0;
    for (int i = 0; i < len - 1; i++)
        res = (res * 10 + (A[i] - '0')) % B[i];

    return res;
}
//
// bignum_str qoutient(bignum_str A, long long B)
// {
//     long long hold = 0, s = 0;
//     bignum_str res;

//     for (int i = 0; i < A.size(); ++i)
//     {
//         hold = hold * 10 + (A[i] - '0');
//         s = hold / B;
//         hold %= B;
//         res = res + (char)(s + 48); // Thêm kết quả chia vào bên phải kết quả cuối.
//     }

//     // Xóa các chữ 0 vô nghĩa ở bên trái kết quả cuối.
//     while (res.size() > 1 && res.front() == '0')
//         res.erase(res.begin());

//     return res;
// }

int main() {
    char a[1001] = "";
    char b[1001] = "";
    scanf("%s%s", a, b);
    int len;

    int As[1003];
    int Bs[1003];
    int Sum[1003];
    len = StrToNumArr(a, b, As, Bs);
    int lenSum = big_mod(As, Bs, len, Sum);
}

