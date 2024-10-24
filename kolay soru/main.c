#include <stdio.h>
#include <stdlib.h>

//  Kilometre/saati metre/saniyeye çeviren bir kod

int main() {
	
	float kmh, ms;
	
	printf("km/s cinsinden hiz degeri giriniz: ");
	scanf("%f", &kmh);
	
	ms = kmh*1000/3600;
	
	printf("%.f km/s = %.3f m/s'dir.", kmh, ms);
	
	
	return 0;
}