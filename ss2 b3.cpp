#include <stdio.h>

int main() {
    int num1 = 10;  
    int num2 = 20;
    int sum = num1 + num2; 
    int difference = num1 - num2;  
    int product = num1 * num2; 
    float quotient = (float)num1 / num2;  
    printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
    printf("Hieu cua %d va %d la: %d\n", num1, num2, difference);
    printf("Tich cua %d va %d la: %d\n", num1, num2, product);
    printf("Thuong cua %d va %d la: %.2f\n", num1, num2, quotient);

    return 0;
}

