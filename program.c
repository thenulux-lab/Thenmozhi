#include <stdio.h>
#include <string.h>

struct Transaction {
    char type[10];     // Income or Expense
    char category[20]; // e.g., Membership, Venue
    float amount;
};

int main() {
    struct Transaction t[5];
    int n, i;
    float totalIncome = 0, totalExpense = 0;

    printf("Enter number of transactions (max 5): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nTransaction %d\n", i+1);
        printf("Type (Income/Expense): ");
        scanf("%s", t[i].type);
        printf("Category: ");
        scanf("%s", t[i].category);
        printf("Amount: ");
        scanf("%f", &t[i].amount);

        if (strcmp(t[i].type, "Income") == 0)
            totalIncome += t[i].amount;
        else
            totalExpense += t[i].amount;
    }

    printf("\n--- Financial Report ---\n");
    printf("Total Income : %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance  : %.2f\n", totalIncome - totalExpense);

    return 0;
}
