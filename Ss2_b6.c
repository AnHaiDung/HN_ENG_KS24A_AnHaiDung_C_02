#include <stdio.h>

int main() {
    const float PI = 3.14; 
    float radius = 5.0; 
    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;    
    printf("Ban kinh hinh tron: %.2f cm\n", radius);
    printf("Chu vi hinh tron: %.2f cm\n", circumference);
    printf("Dien tich hinh tron: %.2f cm^2\n", area);

    return 0;
}
