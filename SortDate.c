#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year != date2.year)
        return date1.year - date2.year;
    if (date1.month != date2.month)
        return date1.month - date2.month;
    return date1.day - date2.day;
}

void swap(struct Date *date1, struct Date *date2) {
    struct Date temp = *date1;
    *date1 = *date2;
    *date2 = temp;
}

void bubbleSort(struct Date dates[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compareDates(dates[j], dates[j + 1]) > 0) {
                swap(&dates[j], &dates[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of dates: ");
    scanf("%d", &n);

    struct Date dates[n];

    printf("Enter the dates in the format of DD/MM/YYYY:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d/%d/%d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    bubbleSort(dates, n);

    printf("\nSorted dates in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%02d/%02d/%04d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    return 0;
}
