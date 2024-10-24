#include <stdio.h>
#include <stdlib.h>

// kenarları metre cinsinden verilen alanın dönümünü hesaplama

int main() {
	
	float kenar1, kenar2, alan;
	printf("Donum olarak hesaplamak istediginiz alanin kenar uzunluklarini metre cinsinden yaziniz:\n");

	printf("1. kenar:");	
	scanf("%f", &kenar1);
	
	printf("2. kenar:");	
	scanf("%f", &kenar2);
	
	alan = kenar1 * kenar2 / 1000;
	
	printf("Alaniniz %.3f donum", alan);

return 0;
}