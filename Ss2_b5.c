#include <stdio.h>

int main() {
    int length = 20; 
    int width = 10;  
    int perimeter = 2 * (length + width); 
    int area = length * width;         
    printf("Dai: %d cm\n", length);
    printf("Rong: %d cm\n", width);
    printf("Chu vi: %d cm\n", perimeter);
    printf("Dien tich: %d cm^2\n", area);

    return 0;
}
