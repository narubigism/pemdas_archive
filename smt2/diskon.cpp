#include <stdio.h>

int main(){
	int nom, disc;
	
	printf("Program menghitung diskon");
	printf("\nMasukkan nominal belanja: ");
	scanf("%i", &nom);

	if (nom <= 10000){
		printf("Anda mendapat diskon sebesar (10%)");
	disc = nom - (nom * 30 / 100);
	printf("\nTotal harga belanja adalah: RP.%i", disc);
	}
	else if (nom >= 50000){
		printf("Anda mendapat diskon sebesar (15%)");
	disc = nom - (nom * 15 / 100);
	printf("\nTotal harga belanja adalah: RP.%i", disc);
	}
	else if (nom >= 100000){
		printf("Anda mendapat diskon sebesar (20%)");
	disc = nom - (nom * 20 / 100);
	printf("\nTotal harga belanja adalah: RP.%i", disc);
	}
	return 0;
}	
