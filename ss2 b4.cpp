#include <stdio.h>

int main() {
    float side = 5.0; 
    float perimeter = 4 * side; 
    float area = side * side;  
    printf("Chu vi cua hinh vuong voi canh %.2f la: %.2f\n", side, perimeter);
    printf("Dien tich cua hinh vuong voi canh %.2f la: %.2f\n", side, area);

    return 0;
}

