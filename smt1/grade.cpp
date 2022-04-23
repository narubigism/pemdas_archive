#include <stdio.h>
int main ()
{
char nis [10], nama [30];
int nilai1, nilai2;
printf ("INPUT DATA & NILAI SISWA \n");
printf ("NIS : "); scanf ("%s", &nis); 
fflush(stdin);
printf("NAMA : "); gets(nama);
printf("Input nilai mapel 1: ");
	scanf("%i", &nilai1);
	if (nilai1 >= 85 && nilai1 <= 100) {
	 printf("\nLULUS");
	 printf("\nGRADE A");
    }
    if (nilai1 >= 75 && nilai1 <85) {
	 printf("\nLULUS");
	 printf("\nGRADE B");
	}
	if (nilai1 >= 60 && nilai1 <75) {
	 printf("\nLULUS");
     printf("\nGRADE C");
	}
	if (nilai1 >= 45 && nilai1 <60) {
	printf("\nGAGAL");
	printf("\nGRADE D");
	}
	if (nilai1 <0 && nilai1 <45) {
	 printf("\nGAGAL");
	 printf("\nGRADE E");
    }  
    if (nilai1 <0 || nilai1 >100) {
	 printf("\nInput nilai 1 antara 0-100");
	}
	printf("\nInput nilai mapel 2: ");
	scanf("%i", &nilai2);
	if (nilai2 >= 85 && nilai2 <= 100) {
	 printf("\nLULUS");
	 printf("\nGRADE A");
    }
    if (nilai2 >= 75 && nilai2 <85) {
	 printf("\nLULUS");
	 printf("\nGRADE B");
	}
	if (nilai2 >= 60 && nilai2 <75) {
	 printf("\nLULUS");
     printf("\nGRADE C");
	}
	if (nilai2 >= 45 && nilai2 <60) {
	printf("\nGAGAL");
	printf("\nGRADE D");
	}
	if (nilai2 <0 && nilai2 <45) {
	 printf("\nGAGAL");
	 printf("\nGRADE E");
    }  
    if (nilai2 <0 || nilai2 >100) {
	 printf("\nInput nilai 2 antara 0-100");
	}
	return 0;
}