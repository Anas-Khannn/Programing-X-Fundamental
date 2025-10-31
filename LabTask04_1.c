#include <stdio.h>

int main() {
    float fixedPay, overtimeRate, overtimeHours, totalPay;
    
    
    fixedPay = 10 * 23; 
    overtimeRate = 2 * 23; 
    overtimeHours = 23;
    
    
    printf("Enter fixed pay: ");
    scanf("%f", &fixedPay);
    
    printf("Enter overtime rate: ");
    scanf("%f", &overtimeRate);
    
    printf("Enter overtime hours: ");
    scanf("%f", &overtimeHours);
    
    
    totalPay = fixedPay + (overtimeRate * overtimeHours);
    

    printf("Total Pay: %.2f\n", totalPay);
    
    return 0;
}