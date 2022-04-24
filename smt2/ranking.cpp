#include <stdio.h>

int main(){
    int i, j, banyak_data, max, data[100], total_nilai, n1, n2, n3, rata_rata[100], hasil; 
    char nama[20], nis[100];

    printf("\nProgram Peringkat Nilai Mata pelajaran");
    printf("\nMasukan Banyak Data Siswa : ");
    scanf("%d", &banyak_data);
    for (i = 1; i <= banyak_data; i++) {
        printf("\nData Siswa Ke-%d", i);
        printf("\nNIS Siswa : ");
        scanf("%s", nis);
        printf("\nNama Siswa : ");
        scanf("%s", nama);
        printf("\n1. MTK : ");
        scanf("%d", &n1);
        printf("\n2. AGAMA : ");
        scanf("%d", &n2);
        printf("\n3. IPA : ");
        scanf("%d", &n3);
        total_nilai = n1 + n2 + n3;
        rata_rata[i]= (total_nilai) / 3;
        /*printf("\nTotal Nilai : %d", total_nilai);*/
        printf("\nNIS : %s", nis);
        printf("\nNama : %s", nama);
        printf("\nNilai MTK : %d", n1);
        printf("\nNilai AGAMA : %d", n2);
        printf("\nNilai IPA : %d", n3);
        printf("\nRata-Rata : %d", rata_rata[i]);
        if (rata_rata[i] >= 91 && rata_rata[i] <= 100) {
            printf("\nPredikat : A\n");
        } else if (rata_rata[i] >= 76 && rata_rata[i] <= 90) {
            printf("\nPredikat : B\n");
        } else if (rata_rata[i] >= 61 && rata_rata[i] <= 75) {
            printf("\nPredikat : C\n");
        }
        if (i == 1) {
            max = total_nilai;
        } else if (total_nilai > max) {
            max = total_nilai;
        }
    }
        for(i=1;j<=banyak_data;i++){
		    for(i=1;j<=banyak_data;j++){
			    if(rata_rata[i]>rata_rata[j]){
				    hasil=rata_rata[i];
				    rata_rata[i]=rata_rata[j];
				    rata_rata[j]=hasil;
            }
        }
    }
    for(i=1;i<=banyak_data;i++){
        printf("\nRanking %i dengan nilai rata-rata %i", i,  rata_rata[i]);
    }
    return 0;
}
