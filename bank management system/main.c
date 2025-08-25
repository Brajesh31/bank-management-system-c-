#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int accountNumber;
    char name[50];
    float balance;
} Account;

void createAccount();
void viewAccounts();
void depositMoney();
void withdrawMoney();
void deleteAccount();
void saveAccounts();
void loadAccounts();

Account accounts[100];
int accountCount = 0;

int main() {
    int choice;

    loadAccounts();  // Load accounts from file at the start.

    do {
        printf("\n=== Bank Management System ===\n");
        printf("1. Create Account\n2. View Accounts\n3. Deposit Money\n4. Withdraw Money\n5. Delete Account\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createAccount(); break;
            case 2: viewAccounts(); break;
            case 3: depositMoney(); break;
            case 4: withdrawMoney(); break;
            case 5: deleteAccount(); break;
            case 6: saveAccounts(); printf("Exiting... Goodbye!\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

void createAccount() {
    if (accountCount >= 100) {
        printf("Account limit reached!\n");
        return;
    }

    Account newAccount;
    printf("Enter account number: ");
    scanf("%d", &newAccount.accountNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", newAccount.name);
    printf("Enter initial balance: ");
    scanf("%f", &newAccount.balance);

    accounts[accountCount++] = newAccount;
    printf("Account created successfully!\n");
}

void viewAccounts() {
    if (accountCount == 0) {
        printf("No accounts available.\n");
        return;
    }

    printf("\n--- Account Details ---\n");
    for (int i = 0; i < accountCount; i++) {
        printf("Account Number: %d | Name: %s | Balance: %.2f\n", accounts[i].accountNumber, accounts[i].name, accounts[i].balance);
    }
}

void depositMoney() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful! New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }

    printf("Account not found!\n");
}

void withdrawMoney() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful! Remaining balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient funds!\n");
            }
            return;
        }
    }

    printf("Account not found!\n");
}

void deleteAccount() {
    int accNo;
    printf("Enter account number to delete: ");
    scanf("%d", &accNo);

    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            for (int j = i; j < accountCount - 1; j++) {
                accounts[j] = accounts[j + 1];
            }
            accountCount--;
            printf("Account deleted successfully!\n");
            return;
        }
    }

    printf("Account not found!\n");
}

void saveAccounts() {
    FILE *file = fopen("accounts.dat", "wb");
    if (!file) {
        printf("Error saving accounts!\n");
        return;
    }
    fwrite(accounts, sizeof(Account), accountCount, file);
    fclose(file);
    printf("Accounts saved successfully!\n");
}

void loadAccounts() {
    FILE *file = fopen("accounts.dat", "rb");
    if (!file) return;

    accountCount = fread(accounts, sizeof(Account), 100, file);
    fclose(file);
    printf("Accounts loaded successfully!\n");
}
