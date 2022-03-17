

#include<stdio.h>

int ngay(int month, int year)
{
    if (month < 0 || month > 12 || year <= 0 || year > 100000)
    {
        printf("INVALID");
    }
    else
    {
        switch (month)
        {
        case 1:
            printf("Co so ngay la 31");
            break;
        case 3:
            printf("Co so ngay la 31");
            break;
        case 4:
            printf("Co so ngay la 30");
            break;
        case 5:
            printf("Co so ngay la 31");
            break;
        case 6:
            printf("Co so ngay la 30");
            break;
        case 7:
            printf("Co so ngay la 31");
            break;
        case 8:
            printf("Co so ngay la 31");
            break;
        case 9:
            printf("Co so ngay la 30");
            break;
        case 10:
            printf("Co so ngay la 31");
            break;
        case 11:
            printf("Co so ngay la 30");
            break;
        case 12:
            printf ("Co so ngay la 31");
            break;
        default:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                printf("Co so ngay la 29");
            }
            else
            {
                printf("Co so ngay la 28");
            }
            break;
        }
    }
    return 0;
}

int main(){
        int month, year;
        printf ("Nhap vao month = ");
        scanf ("%d", &month);
        printf ("Nhap vao year = ");
        scanf ("%d", &year);
        ngay(month, year);
        return 0;
}