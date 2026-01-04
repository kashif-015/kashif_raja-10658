#include <stdio.h>

int main() {
    int balance = 10000;   // Initial balance
    int withdraw;

    printf("ATM Withdrawal Simulation\n");
    printf("---------------------------\n");
    printf("Current Balance: Rs %d\n", balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (withdraw > 0) {
        if (withdraw <= balance) {
            balance = balance - withdraw;
            printf("Withdrawal successful!\n");
            printf("Updated Balance: Rs %d\n", balance);
        } else {
            printf("Error: Insufficient balance.\n");
        }
    } else {
        printf("Error: Invalid withdrawal amount.\n");
    }

    return 0;
}
