#include <stdio.h>
int main(){
    int zakat, nilai, laba, bulan, penghasilan, harta_simpanan, lama_disimpan;
    char jenis;

    /*buat input jenis zakat */
    printf("Jenis Zakat :\n");
    printf("1. Zakat Fitrah\n");
    printf("2. Zakat Perniagaan\n");
    printf("3. Zakat Penghasilan\n");
    printf("4. Zakat harta Simpanan\n");
    scanf("%c", &jenis);
    
    /* hitung zakat */
    switch(jenis){
        case '1':
        /*buat input nilai */
        printf("\nNilai :");
        scanf("%d", &nilai);
            zakat = nilai * 2.5;
            printf("\nZakat Fitrah : %d\n", zakat);
            break;
        case '2':
             /*buat input laba */
            printf("\nLaba :");
            scanf("%d", &laba);
            printf("Jumlah Bulan :");
            scanf("%d", &bulan);
            zakat = 0.025 * laba * bulan;
            printf("\nZakat Perniagaan : %d\n", zakat);
            break;
        case '3':
            printf("\nPenghasilan :");
            scanf("%d", &penghasilan);
            if (penghasilan > 5250000){
                zakat = 0.025 * penghasilan;
                printf("\nZakat Penghasilan : %d\n", zakat);
            }
            else{
                printf("Tidak Wajib Zakat\n");
            }
            break;
        case '4':
        printf("\nHarta Simpanan :");
        scanf("%d", &harta_simpanan);
        printf("Lama Disimpan (bulan) :");
        scanf("%d", &lama_disimpan);
        if (harta_simpanan > 59500000 && lama_disimpan > 12){
            zakat = 0.025 * harta_simpanan;
            printf("\nZakat harta Simpanan : %d\n", zakat);
            printf("\nBisa zakat");
        }
        else{
            (lama_disimpan < 12);
            printf("\nTidak Wajib Zakat\n");
        }
            break;
        default:
            printf("Input salah");
    }
    return 0;
}