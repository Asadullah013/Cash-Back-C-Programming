#include <stdio.h>

int main() {
    int totalBill, customerPaid;

    printf("Enter the total bill: ");
    scanf("%d", &totalBill);
    printf("Enter the amount paid by the customer: ");
    scanf("%d", &customerPaid);

    int change = customerPaid - totalBill;

    if (change < 0) {
        printf("Customer has not paid enough. Please provide sufficient amount.\n");
        return 1;
    }

    int notes[] = {0, 0, 0, 0, 0, 0, 0, 0}; // Rs. 1, 2, 5, 10, 50, 100, 500, and 1000

    int denominations[] = {1000, 500, 100, 50, 10, 5, 2, 1};

 for (int i = 0; i < 8; i++) {
        while (change >= denominations[i]) {
            change -= denominations[i];
            notes[i]++;
        }
    }

    printf("Rs.1 Notes: %d\n", notes[7]);
    printf("Rs.2 Notes: %d\n", notes[6]);
    printf("Rs.5 Notes: %d\n", notes[5]);
    printf("Rs.10 Notes: %d\n", notes[4]);
    printf("Rs.50 Notes: %d\n", notes[3]);
    printf("Rs.100 Notes: %d\n", notes[2]);
    printf("Rs.500 Notes: %d\n", notes[1]);
    printf("Rs.1000 Notes: %d\n", notes[0]);

    return 0;
}
