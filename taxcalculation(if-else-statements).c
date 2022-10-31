#include <stdio.h>

//CONSTANTS
#define BASIC_RATE 12.00
#define OVERTIME_RATE 18.00
#define STD_HOURS 40
#define TAX_FIRST (0.15)
#define TAX_SECOND (0.20)
#define TAX_THIRD (0.25)

int main()
{
    //VARIABLES
    int hours;
    double gross_pay;
    double taxes;
    double net_pay;

    printf("Enter working hours: ");
    scanf("%d", &hours);

    if (hours <= STD_HOURS) {
        gross_pay = hours * BASIC_RATE;
    }
    else {
        gross_pay = (STD_HOURS * BASIC_RATE) + ((hours-STD_HOURS) * OVERTIME_RATE);
    }

    if (gross_pay <= 300) {
        taxes = gross_pay * TAX_FIRST;
    }
    else if (gross_pay <=450) {
        taxes = (300 * TAX_FIRST) + ((gross_pay - 300) * TAX_SECOND);
    }
    else {
        taxes = (300 * TAX_FIRST) + (150 * TAX_SECOND) + ((gross_pay - 450) * TAX_THIRD);
    }

    net_pay = gross_pay - taxes;

    printf("Gross pay: %.2f\nTaxes: %.2f\nNet Pay: %.2f", gross_pay, taxes, net_pay);

    return 0;
}