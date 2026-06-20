#include <stdio.h>

int main() {

    int ID[10] = {101,102,103,104,105,106,107,108,109,110};
    char *name[10] = {"TShirt","Shirt","Pant","FootWear","Groceries","Soft Drinks","Pen","Colours","Milk","Candy"};
    float price[10] = {200,400,900,250,30.25,40,5.5,49,76,15};
    int qty[10] = {10,12,14,16,18,20,24,46,28,30};

    int choice, purchaseID, purchaseqty;
    float total = 0;

    do {

        printf("\n\t\t========== DMART Invoice ==========\t\t\n");
        printf("\nMENU:\n");
        printf("1. View Inventory\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout & Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        while(choice < 1 || choice > 3) {
            printf("!!!Invalid Choice!!! Enter again: ");
            scanf("%d", &choice);
        }

        if(choice == 1) {

            printf("\n\t\t------ Current Inventory ------\t\t\n\n");
            printf("ID\tName\t\tPrice($)\tQuantity\n");

            for(int i = 0; i < 10; i++) {
                printf("%d\t%-12s\t$%.2f\t\t%d\n",
                       ID[i], name[i], price[i], qty[i]);
            }
        }

        else if(choice == 2) {

            while(1) {

                printf("\nEnter Item ID to purchase (Enter 0 to return): ");
                scanf("%d", &purchaseID);

                if(purchaseID == 0) {
                    break;
                }

                int found = 0;

                for(int j = 0; j < 10; j++) {

                    if(purchaseID == ID[j]) {

                        found = 1;

                        if(qty[j] > 0) {

                            printf("Item Available\n");
                            printf("Enter quantity: ");
                            scanf("%d", &purchaseqty);

                            if(purchaseqty <= qty[j]) {

                                total += purchaseqty * price[j];
                                qty[j] -= purchaseqty;

                                printf("Added to cart!\n");
                                printf("Current Total: $%.2f\n", total);
                            }

                            else {
                                printf("Not enough quantity available.\n");
                            }
                        }

                        else {
                            printf("Item Out of Stock.\n");
                        }
                    }
                }

                if(found == 0) {
                    printf("!!!Invalid Item ID!!!\n");
                }
            }
        }

        else {

            printf("\n\t\t========== BILL ==========\t\t\n\n");
            printf("Total Amount: $%.2f\n", total);
            printf("\n\t\t------ THANK YOU FOR SHOPPING ------\t\t\n");
        }

    } while(choice != 3);

    return 0;
}