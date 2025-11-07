#include <stdio.h>

int main() {
    float height;           // To store user's height in meters/centimeters
    double bank_balance;    // To store user's bank balance
    char phone_number[15];  // To store user's phone number (as string)

    // Prompt the user to enter height
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    // Prompt the user to enter bank balance
    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bank_balance);

    // Prompt the user to enter phone number
    printf("Enter your phone number: ");
    scanf("%s", phone_number);  // Use %s to read string input

    // Display the collected information back to the user
    printf("\nYour Details:\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSh %.2lf\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}
