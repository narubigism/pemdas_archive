#include <iostream>
using namespace std;
int main(){
	int masuk,keluar,lama;
	printf("Program Menentukan lama bekerja");
	printf("\nJam Masuk:");
	scanf("%d", &masuk);
	
	printf("\nJam Keluar: ");
	scanf("%d", &keluar);
	if (keluar >= masuk)
		lama = keluar - masuk;
	else
		lama = (12-masuk) + keluar;

	printf("\nLama bekerja adalah: %d jam", lama);
	return 0;
}


