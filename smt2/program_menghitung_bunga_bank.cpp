#include <stdio.h>


int main(){
    int uang, bunga;
    printf("\n===========================================================");
    printf("\n#                Program Bunga Tabungan                   #");
    printf("\n===========================================================");
    printf("\n\nMasukkan jumlah uang: ");
    scanf("%i", &uang);
    int i = 1;
    while(i <= 10){
        bunga = uang * 0.02;
        uang = uang + bunga;
        printf("\nBunga bulan ke-%i adalah %i", i, bunga);
        printf("\nTotal uang bulan ke-%i adalah %i", i, uang);
        i++;
    }
    printf("\n===========================================================");
    printf("\nJumlah tabungan selama 10 bulan adalah %i", uang);
    return 0;
}
    
