#include <stdio.h>

/* Structure Declaration */
struct Date {
    int day;
    int month;
    int year;
};

/* Function Prototypes */
void initDate(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);

int main() {
    struct Date d;
    int choice;

    do {
        printf("\n===== DATE MENU =====\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date\n");
        printf("3. Print Date\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                initDate(&d);
                printf("Date Initialized.\n");
                break;

            case 2:
                acceptDateFromConsole(&d);
                break;

            case 3:
                printDateOnConsole(&d);
                break;

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 0);

    return 0;
}

/* Function Definitions */

void initDate(struct Date* ptrDate) {
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void acceptDateFromConsole(struct Date* ptrDate) {
    printf("Enter Day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter Month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter Year: ");
    scanf("%d", &ptrDate->year);
}

void printDateOnConsole(struct Date* ptrDate) {
    printf("Date: %02d/%02d/%04d\n",
           ptrDate->day,
           ptrDate->month,
           ptrDate->year);
}