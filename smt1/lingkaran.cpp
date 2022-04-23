#include <stdio.h>
#include <unistd.h>

int main(){
    float l_lingkaran, kll_lingkaran, phi, luas, kll;
    int jj_lingkaran;
    phi = 3.14;
    printf("Menghitung luas dan keliling lingkaran\n ");
    fflush(stdin);
    printf("Masukkan jari jari lingkaran: "), scanf("%i", &jj_lingkaran);

    //tampilkan
    printf("\nJari jari: %i", jj_lingkaran);
    printf("\nmenghitung luas lingkaran......");
    sleep(3);
    luas = (jj_lingkaran * jj_lingkaran) / phi;
    printf("\nluas lingkaran adalah: %f", luas);
    sleep(2);
    kll = (2 * phi * jj_lingkaran);
    printf("\nmenghitung keliling lingkaran......");
    sleep(3);
    printf("\nkeliling lingkaran adalah: %f", kll);
    return 0;
}
