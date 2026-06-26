#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 20

struct Product {
    int id;
    char name[30];
    float price;
    int stock;
};

struct Cart {
    int id;
    char name[30];
    float price;
    int qty;
};

void displayInventory(struct Product items[], int n) {
    printf("\n----------- INVENTORY -----------\n");
    printf("ID\tName\t\tPrice\tStock\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%.2f\t%d\n",
               items[i].id,
               items[i].name,
               items[i].price,
               items[i].stock);
    }
}

int main() {

    struct Product items[MAX_PRODUCTS] = {
        {101, "TShirt", 200, 10},
        {102, "Shirt", 400, 12},
        {103, "Pant", 900, 14},
        {104, "FootWear", 250, 16},
        {105, "Groceries", 30.25, 18},
        {106, "SoftDrinks", 40, 20},
        {107, "Pen", 5.5, 24},
        {108, "Colours", 49, 46},
        {109, "Milk", 76, 28},
        {110, "Candy", 15, 30}
    };

    struct Cart cart[MAX_PRODUCTS];

    int n = 10;          // Number of products
    int cartCount = 0;   // Number of items in cart
    int role, choice;

    while(1) {

        printf("\n========== DMART ==========\n");
        printf("1. Owner\n");
        printf("2. Customer\n");
        printf("3. Exit\n");
        printf("Enter role: ");
        scanf("%d", &role);

        if(role == 1) {

            int ownerChoice;

            do {
                printf("\n------ OWNER MENU ------\n");
                printf("1. View Inventory\n");
                printf("2. Add Product\n");
                printf("3. Delete Product\n");
                printf("4. Change Price\n");
                printf("5. Modify Stock\n");
                printf("6. Exit Owner Menu\n");
                printf("Enter choice: ");
                scanf("%d", &ownerChoice);

                switch(ownerChoice) {

                    case 1:
                        displayInventory(items, n);
                        break;

                    case 2:
                        if(n < MAX_PRODUCTS) {

                            printf("Enter ID: ");
                            scanf("%d", &items[n].id);

                            printf("Enter Name: ");
                            scanf("%s", items[n].name);

                            printf("Enter Price: ");
                            scanf("%f", &items[n].price);

                            printf("Enter Stock: ");
                            scanf("%d", &items[n].stock);

                            n++;

                            printf("Product Added Successfully!\n");
                        }
                        else {
                            printf("Inventory Full!\n");
                        }
                        break;

                    case 3: {
                        int delID, found = 0;

                        printf("Enter Product ID to delete: ");
                        scanf("%d", &delID);

                        for(int i = 0; i < n; i++) {

                            if(items[i].id == delID) {

                                for(int j = i; j < n - 1; j++) {
                                    items[j] = items[j + 1];
                                }

                                n--;
                                found = 1;
                                printf("Product Deleted Successfully!\n");
                                break;
                            }
                        }

                        if(!found)
                            printf("Product Not Found!\n");

                        break;
                    }

                    case 4: {
                        int id, found = 0;
                        float newPrice;

                        printf("Enter Product ID: ");
                        scanf("%d", &id);

                        for(int i = 0; i < n; i++) {

                            if(items[i].id == id) {

                                printf("Enter New Price: ");
                                scanf("%f", &newPrice);

                                items[i].price = newPrice;
                                found = 1;

                                printf("Price Updated!\n");
                                break;
                            }
                        }

                        if(!found)
                            printf("Product Not Found!\n");

                        break;
                    }

                    case 5: {
                        int id, found = 0, newStock;

                        printf("Enter Product ID: ");
                        scanf("%d", &id);

                        for(int i = 0; i < n; i++) {

                            if(items[i].id == id) {

                                printf("Enter New Stock: ");
                                scanf("%d", &newStock);

                                items[i].stock = newStock;
                                found = 1;

                                printf("Stock Updated!\n");
                                break;
                            }
                        }

                        if(!found)
                            printf("Product Not Found!\n");

                        break;
                    }

                    case 6:
                        printf("Exiting Owner Menu...\n");
                        break;

                    default:
                        printf("Invalid Choice!\n");
                }

            } while(ownerChoice != 6);
        }

        else if(role == 2) {

            float total = 0;
            int customerChoice;

            do {

                printf("\n------ CUSTOMER MENU ------\n");
                printf("1. View Inventory\n");
                printf("2. Purchase Product\n");
                printf("3. Checkout\n");
                printf("Enter choice: ");
                scanf("%d", &customerChoice);

                switch(customerChoice) {

                    case 1:
                        displayInventory(items, n);
                        break;

                    case 2: {
                        int id, qty, found = 0;

                        printf("Enter Product ID: ");
                        scanf("%d", &id);

                        for(int i = 0; i < n; i++) {

                            if(items[i].id == id) {

                                found = 1;

                                printf("Available Stock: %d\n",
                                       items[i].stock);

                                printf("Enter Quantity: ");
                                scanf("%d", &qty);

                                if(qty <= items[i].stock) {

                                    // Copy values from Product to Cart
                                    cart[cartCount].id = items[i].id;
                                    strcpy(cart[cartCount].name,
                                           items[i].name);
                                    cart[cartCount].price =
                                        items[i].price;
                                    cart[cartCount].qty = qty;

                                    cartCount++;

                                    items[i].stock -= qty;

                                    total += qty * items[i].price;

                                    printf("Product Added To Cart!\n");
                                }
                                else {
                                    printf("Insufficient Stock!\n");
                                }

                                break;
                            }
                        }

                        if(!found)
                            printf("Product Not Found!\n");

                        break;
                    }

                    case 3:

                        printf("\n----------- BILL -----------\n");

                        printf("ID\tName\t\tPrice\tQty\n");

                        for(int i = 0; i < cartCount; i++) {

                            printf("%d\t%-15s\t%.2f\t%d\n",
                                   cart[i].id,
                                   cart[i].name,
                                   cart[i].price,
                                   cart[i].qty);
                        }

                        printf("\nTotal Amount = %.2f\n", total);
                        printf("Thank You For Shopping!\n");

                        cartCount = 0;
                        total = 0;

                        break;

                    default:
                        printf("Invalid Choice!\n");
                }

            } while(customerChoice != 3);
        }

        else if(role == 3) {
            printf("Program Ended.\n");
            break;
        }

        else {
            printf("Invalid Role!\n");
        }
    }

    return 0;
}