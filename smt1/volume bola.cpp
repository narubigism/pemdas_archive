#include <iostream>

using namespace std;

int main(){
	float volume, pi;
	int diameter;
	pi = 3.14;
	diameter = 15;
	
	volume = pi*diameter*diameter*diameter*4/3;
	
	printf("Volume bola adalah: %f\n ", volume);
	return 0;
}
