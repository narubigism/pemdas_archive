#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float alas, tinggi, sisi;
	
	alas = 4;
	tinggi = 5;
	
	sisi = sqrt((alas * alas)+(tinggi * tinggi));
	
	printf("Sisi miring segitiga adalah: %f	 ", sisi);
	return 0;
}
