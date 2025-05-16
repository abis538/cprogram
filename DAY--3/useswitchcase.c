#include <stdio.h>

void daysInMonth(int month, int year) {
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31 days\n");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30 days\n");
            break;
        case 2:  // February
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("29 days (leap year)\n");
            } else {
                printf("28 days\n");
            }
            break;
        default:
            printf("Invalid month. Please enter a month between 1 and 12.\n");
    }
