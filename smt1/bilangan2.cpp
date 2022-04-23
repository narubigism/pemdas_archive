#include <stdio.h>

int main(){
    int nilai1;
    printf("Program Menentukan Bilangan");
    printf ("\nINPUT NILAI: "); scanf ("%i", &nilai1);
   
    if (nilai1%2 == 0){
     printf("Nilai tersebut adalah genap");
}
else{
    printf("nilai tersebut adalah ganjil ");
}

return 0;

}
