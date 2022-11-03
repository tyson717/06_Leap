#include <stdio.h>

int main() {
    int numberOfMonth;
    printf("Enter the month number:\n");
    scanf(" %d", &numberOfMonth);
    int year;
    printf("Enter the year:\n");
    scanf(" %d", &year);
    int days;

    if (numberOfMonth == 1 ||
        numberOfMonth == 3 ||
        numberOfMonth == 5 ||
        numberOfMonth == 7 ||
        numberOfMonth == 8 ||
        numberOfMonth == 10 ||
        numberOfMonth == 12) {
        days = 31;
    }
    else if (numberOfMonth == 2)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            days = 29;
        }else
        {
            days=28;
        }
    }
    else
    {
        days = 30;
    }

    printf("The number of days in your month is %d",days);
    return 0;
}
