#include <iostream>

using namespace std;

int main(){
	float harga, diskon, potongan, total;
	printf("Program menghitung diskon");
	printf("\nMasukkan jumlah harga: ");
	scanf("%f", &harga);
	printf("\nMasukkan diskon (%): ");
	scanf("%f", &diskon);

	potongan = (diskon/100)*harga;
	total = harga - potongan;
	printf("Harga sebelumnya: %f", harga);
	printf("\nHarga Diskon: %f", potongan);
	return 0;
}
