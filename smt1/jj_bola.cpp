#include <stdio.h>
#include <unistd.h>

int main(){
    float v_bola, phi, jjbl;
    int jj_bola;
    phi = 3.14;
    printf("Menghitung Volume Bola\n ");
    fflush(stdin);
    printf("Masukkan jari jari bola: "), scanf("%i", &jj_bola);

    //tampilkan
    printf("\nJari jari: %i", jj_bola);
    printf("\nmenghitung volume bola......");
    sleep(3);
    jjbl = (jj_bola * jj_bola * jj_bola * phi ) * 4/3 ;
    printf("\nvolume bola adalah: %f", jjbl);
    return 0;
}
