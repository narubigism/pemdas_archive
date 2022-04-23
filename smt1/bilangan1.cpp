#include <stdio.h>

int main(){
    int nilai1, nilai2, maks;
    printf ("INPUT NILAI1: "); scanf ("%i", &nilai1);
    printf ("INPUT NILAI2: "); scanf ("%i", &nilai2);
   
    if (nilai1 > nilai2){
    maks = nilai1;
}
else{
    maks = nilai2;
}
printf("\nbilangan terbesar adalah: %i", maks);
return 0;

}
