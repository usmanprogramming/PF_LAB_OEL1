#include <stdio.h>

int main() {
    int money;
    int choice;
    char continueShopping = 'y';

    // Items and prices
    char *items[10] = {"Apple", "Bread", "Milk", "Eggs", "Rice",
                       "Sugar", "Tea", "Coffee", "Oil", "Salt"};
    int prices[10] = {100,150,120,200,300,180,250,400,550,50};

    printf("Enter the amount of money you have: ");
    scanf("%d", &money);

    while (continueShopping == 'y' && money > 0) {
        // Show menu
        printf("\nAvailable items:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d. %s - %d\n", i+1, items[i], prices[i]);
        }

        // User selects by number
        printf("Enter the item number to buy: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 10) {
            int index = choice - 1;

            if (money >= prices[index]) {
                money -= prices[index];
                printf("Purchased %s successfully!\n", items[index]);
                printf("Remaining balance: %d\n", money);
            } else {
                printf("Not enough money to buy %s.\n", items[index]);
            }
        } else {
            printf("Invalid item number.\n");
        }

        if (money > 0) {
            printf("Do you want to buy another item? (y/n): ");
            scanf(" %c", &continueShopping);
        } else {
            printf("You have no money left.\n");
        }
    }

    printf("\nCheckout complete.\n");
    printf("Final remaining balance: %d\n", money);

    return 0;
}
