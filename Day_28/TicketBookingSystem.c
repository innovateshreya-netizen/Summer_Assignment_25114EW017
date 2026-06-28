//Write a program to Create ticket booking system.

#include <stdio.h>
#include <string.h>

struct Ticket {
    int seatNo;
    char name[50];
    int booked;   // 0 = Available, 1 = Booked
};

int main() {
    struct Ticket seats[10];
    int i, choice, seat, found;

    // Initialize seats
    for(i = 0; i < 10; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
        strcpy(seats[i].name, "");
    }

    while(1) {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Booking Details\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10) {
                printf("Invalid Seat Number!\n");
            }
            else if(seats[seat-1].booked == 1) {
                printf("Seat Already Booked!\n");
            }
            else {
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", seats[seat-1].name);

                seats[seat-1].booked = 1;

                printf("Ticket Booked Successfully!\n");
            }
            break;

        case 2:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 10) {
                printf("Invalid Seat Number!\n");
            }
            else if(seats[seat-1].booked == 0) {
                printf("Seat is already available.\n");
            }
            else {
                seats[seat-1].booked = 0;
                strcpy(seats[seat-1].name, "");

                printf("Ticket Cancelled Successfully!\n");
            }
            break;

        case 3:
            printf("\n------ Booking Details ------\n");

            found = 0;

            for(i = 0; i < 10; i++) {
                if(seats[i].booked == 1) {
                    printf("Seat No : %d\n", seats[i].seatNo);
                    printf("Passenger : %s\n", seats[i].name);
                    printf("--------------------------\n");
                    found = 1;
                }
            }

            if(found == 0)
                printf("No Tickets Booked.\n");

            break;

        case 4:
            printf("\nAvailable Seats: ");

            for(i = 0; i < 10; i++) {
                if(seats[i].booked == 0)
                    printf("%d ", seats[i].seatNo);
            }

            printf("\n");
            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}