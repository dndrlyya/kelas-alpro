#include <stdio.h>
int main (){
    float TB, BB, BMI;
    int pilihan;

    printf ("1. Laki-laki \n2. Perempuan\n");
    printf ("Pilih Jenis kelamin: ");
    scanf ("%d", &pilihan);

    switch (pilihan){

    case 1:

    printf ("Masukkan tinggi badan: ");
    scanf ("%f", &TB);
    printf ("Masukkan berat badan: ");
    scanf ("%f", &BB);

    TB = TB/100;

    BMI = BB/(TB*TB);

    printf("BMI = %.2f\n", BMI);

    if (BMI >= 18.5 && BMI <= 25){
        printf ("Berat badan ideal\n");
        } 
    else if (BMI < 18.5 && BMI >=16){
        printf ("Berat badan di bawah normal\n");
        }
    else if (BMI > 25 && BMI <= 40){
        printf ("Berat badan di atas normal\n");
        }
    else if (BMI > 40 || BMI < 16){
        printf ("Periksa ulang input anda\n");
        }
    break;

    case 2:

    printf ("Masukkan tinggi badan: ");
    scanf ("%f", &TB);
    printf ("Masukkan berat badan: ");
    scanf ("%f", &BB);

    TB = TB/100;

    BMI = BB/(TB*TB);

    printf("BMI = %.2f\n", BMI);

    if (BMI >= 18.5 && BMI <= 25){
        printf ("Berat badan ideal\n");} 
    else if (BMI < 18.5 && BMI >=16){
        printf ("Berat badan di bawah normal\n");
        }
    else if (BMI > 25 && BMI <= 40){
        printf ("Berat badan di atas normal\n");
        }
    else if (BMI > 40 || BMI < 16){
        printf ("Periksa ulang input anda\n");
        }
    break;
    return 0;
}
