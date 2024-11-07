#include <stdio.h>

int main() {
    float hours, wage, gross_pay, taxes, net_pay;

    
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter the hourly wage: ");
    scanf("%f", &wage);

    
    if (hours > 40) {
        float overtime_hours = hours - 40;
        float overtime_pay = overtime_hours * (wage * 1.5);
        float regular_pay = 40 * wage;
        gross_pay = overtime_pay + regular_pay;
    } else {
        gross_pay = hours * wage;
    }

    
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }

    
    net_pay = gross_pay - taxes;

    
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}
