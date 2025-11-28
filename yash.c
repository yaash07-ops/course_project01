#include <stdio.h>
#include <string.h>

int main() {
    char names[50][50];     // to store up to 50 member names
    int ages[50];           // to store ages
    int total = 0;          // count of members
    int choice;

    while (1) {
        printf("\n===== GYM MEMBERSHIP MANAGEMENT =====\n");
        printf("1. Add Member\n");
        printf("2. View All Members\n");
        printf("3. Search Member\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add Member
            if (total < 50) {
                printf("Enter member name: ");
                scanf("%s", names[total]);
                printf("Enter age: ");
                scanf("%d", &ages[total]);
                total++;
                printf("Member added successfully!\n");
            } else {
                printf("Member list is full!\n");
            }
        }

        else if (choice == 2) {
            // View all members
            if (total == 0) {
                printf("No members to show.\n");
            } else {
                printf("\n--- Member List ---\n");
                for (int i = 0; i < total; i++) {
                    printf("%d. Name: %s | Age: %d\n", i + 1, names[i], ages[i]);
                }
            }
        }

        else if (choice == 3) {
            // Search member
            char searchName[50];
            int found = 0;

            printf("Enter name to search: ");
            scanf("%s", searchName);

            for (int i = 0; i < total; i++) {
                if (strcmp(names[i], searchName) == 0) {
                    printf("Member Found!\n");
                    printf("Name: %s | Age: %d\n", names[i], ages[i]);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Member not found!\n");
            }
        }

        else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}