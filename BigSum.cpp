#include <stdio.h>
#include <string.h>

int StrToArr(char a[],char b[],int A[],int B[]) {
    int lengthA = strlen(a);
    int lengthB = strlen(b);

    int totalLength;
    if (lengthA > lengthB ) 
    {
        totalLength = lengthA
    } 
     else totalLength = lengthB
    lengthA--;
    lengthB--;
    for (int  i = totalLength - 1 ; i >= 0 ; i--) {
        if (lengthA >= 0)
        {
            A[i] = a[lengthA] - '0';
            lengthA--;
        } else {
            A[i] = 0;
        }
        if (lengthB >=0)
        {
            /* code */
        }
        
        
    }
    return totalLength;
    
}
int main() {
    char a[1001] = "";
    char b[1001] = "";
    int As[1001];
    int Bs[1001];

    scanf("%s%s",a,b);

}