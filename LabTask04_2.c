#include <stdio.h>

int main() {
    int lastTwoDigits;
    float fixedPay, overtimeRate, overtimeHours, totalPay, tax, netPay;

 
    printf("Enter the last two digits of your registration number: ");
    scanf("%d", &lastTwoDigits);

   
    fixedPay = 10 * lastTwoDigits;
    overtimeRate = 2 * lastTwoDigits;
    overtimeHours = lastTwoDigits;

    
    totalPay = fixedPay + (overtimeRate * overtimeHours);

    tax = totalPay * 0.09;
    netPay = totalPay - tax;

    
    printf("\n--- Employee Pay Details ---\n");
    printf("Fixed Pay: %.2f\n", fixedPay);
    printf("Overtime Rate: %.2f\n", overtimeRate);
    printf("Overtime Hours: %.2f\n", overtimeHours);
    printf("Total Pay (Before Tax): %.2f\n", totalPay);
    printf("Tax Deducted (9%%): %.2f\n", tax);
    printf("Net Pay (After Tax): %.2f\n", netPay);

    return 0;
}
