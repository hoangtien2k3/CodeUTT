char xoa(char *a, int vt)
{
    int n = strlen(a);
    for (int i = vt; i <= n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    return 0;
}

char *Xoa_Khoang_Trang(char *a)
{
    int i, n=strlen(a);
    for (i = 0; i < n; i++){
        if (a[0] == ' ') {
            xoa(a, 0);
        }
        if (a[i] == ' ' && a[i + 1] == ' ') {
            xoa(a, i);
            i--;
        }
        if (a[n-1] == ' ') {
            xoa(a, n-1);
        }
    }
    return a;
}
