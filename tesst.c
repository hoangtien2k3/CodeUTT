#include <stdio.h>

int demUoc(unsigned int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return count;
}
int main()
{
    unsigned int n;
    scanf("%d", &n);
    demUoc(n);
    return 0;
}