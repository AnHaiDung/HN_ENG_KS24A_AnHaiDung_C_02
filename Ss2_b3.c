#include <stdio.h>

int main() {
	int number1 = 10;
	int number2 = 20;
	int sum = number1 + number2;
	int dif = number1 - number2;
	int pro = number1 * number2;
	int quo = number2 / number1;
	printf("Tong cua %d va %d la: %d\n", number1, number2, sum);
    printf("Hieu cua %d va %d la: %d\n", number1, number2, dif);
    printf("Tich cua %d va %d la: %d\n", number1, number2, pro);
    printf("Thuong cua %d và %d la: %d\n", number2, number1, quo);
    
    return 0;	
}
