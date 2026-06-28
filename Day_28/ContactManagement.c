//Write a program to Create contact management system.

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[100];
    int n = 0;
    int choice, i, found;
    char searchName[50];

    while (1) {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[n].phone);

            printf("Enter Email: ");
            scanf("%s", contacts[n].email);

            n++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("No Contacts Available.\n");
            } else {
                printf("\n------ Contact List ------\n");
                for (i = 0; i < n; i++) {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            scanf(" %[^\n]", searchName);

            found = 0;

            for (i = 0; i < n; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", contacts[i].name);
                    printf("Phone : %s\n", contacts[i].phone);
                    printf("Email : %s\n", contacts[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

            break;

        case 4:
            printf("Enter Name to Delete: ");
            scanf(" %[^\n]", searchName);

            found = 0;

            for (i = 0; i < n; i++) {
                if (strcmp(contacts[i].name, searchName) == 0) {
                    found = 1;

                    for (int j = i; j < n - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }

                    n--;
                    printf("Contact Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");

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