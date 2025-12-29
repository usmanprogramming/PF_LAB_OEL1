#include <stdio.h>

int main() {
    int choice, quantity;
    char continueOrder = 'y';
    int totalBill = 0;
    int deliveryFee = 150;

    // Menu items and prices
    char *items[5] = {"Pizza", "Burger", "Sandwich", "Fries", "Pasta"};
    int prices[5] = {500, 300, 200, 100, 180};

    printf("Welcome!\n");

    while (continueOrder == 'y') {
        // Display menu
        printf("\nMenu:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d. %s - %d\n", i + 1, items[i], prices[i]);
        }

        // Take customer input
        printf("Enter item number to order: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            // Add cost to total bill
            totalBill += prices[choice - 1] * quantity;
            printf("%d %s added to your order. Current total: %d\n",
                   quantity, items[choice - 1], totalBill);
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        // Ask if customer wants to continue
        printf("Do you want to order again? (y/n): ");
        scanf(" %c", &continueOrder);
    }

    // Apply delivery fee logic
    if (totalBill > 1000) {
        printf("\nYou qualify for free delivery!\n");
    } else {
        totalBill += deliveryFee;
        printf("\nDelivery fee of %d added.\n", deliveryFee);
    }

    // Show final bill
    printf("\nFinal Bill: %d\n", totalBill);
    printf("Thank you for ordering!\n");

    return 0;
}
