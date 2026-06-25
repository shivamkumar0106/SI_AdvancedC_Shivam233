#include <stdio.h>

struct Item {
    int id;
    char name[20];
    float price;
    int qty;
};

int main() {

    struct Item items[10] = {
        {101, "TShirt",      200,   10},
        {102, "Shirt",       400,   12},
        {103, "Pant",        900,   14},
        {104, "FootWear",    250,   16},
        {105, "Groceries",   30.25, 18},
        {106, "Soft Drinks", 40,    20},
        {107, "Pen",         5.5,   24},
        {108, "Colours",     49,    46},
        {109, "Milk",        76,    28},
        {110, "Candy",       15,    30}
    };

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
                       items[i].id,
                       items[i].name,
                       items[i].price,
                       items[i].qty);
            }
        }

        else if(choice == 2) {

            while(1) {

                printf("\nEnter Item ID to purchase (Enter 0 to return): ");
                scanf("%d", &purchaseID);

                if(purchaseID == 0)
                    break;

                int found = 0;

                for(int j = 0; j < 10; j++) {

                    if(purchaseID == items[j].id) {

                        found = 1;

                        if(items[j].qty > 0) {

                            printf("Item Available\n");
                            printf("Enter quantity: ");
                            scanf("%d", &purchaseqty);

                            if(purchaseqty <= items[j].qty) {

                                total += purchaseqty * items[j].price;
                                items[j].qty -= purchaseqty;

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

                        break;
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
            printf("\n\t\t------ THANK YOU FOR SHOPPING ------\t\t\n\n");
        }

    } while(choice != 3);

    return 0;
}