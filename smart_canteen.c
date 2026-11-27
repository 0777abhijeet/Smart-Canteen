#include <stdio.h>

int main()
{
    int price[5] = {50, 100, 40, 30, 60};
    int qty[5] = {0};
    int choice, n, i, total = 0;
    float discount, bill;

    printf("===== SMART CANTEEN =====\n");
    printf("1. Burger - Rs.50\n");
    printf("2. Pizza - Rs.100\n");
    printf("3. Sandwich - Rs.40\n");
    printf("4. Maggi - Rs.30\n");
    printf("5. Coffee - Rs.60\n");

    printf("\nEnter number of orders: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter food choice (1-5): ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter quantity: ");
            scanf("%d", &qty[choice - 1]);
        }
        else
            printf("Invalid choice!\n");
    }

    printf("\n===== FINAL BILL =====\n");

    for(i = 0; i < 5; i++)
    {
        if(qty[i] > 0)
        {
            printf("Item %d: Rs.%d\n", i + 1,
                   price[i] * qty[i]);

            total += price[i] * qty[i];
        }
    }

    if(total >= 500)
        discount = total * 0.10;
    else if(total >= 200)
        discount = total * 0.05;
    else
        discount = 0;

    bill = total - discount;

    printf("\nTotal: Rs.%d", total);
    printf("\nDiscount: Rs.%.2f", discount);
    printf("\nFinal Bill: Rs.%.2f", bill);

    printf("\nThank You! Visit Again!");

    return 0;
}