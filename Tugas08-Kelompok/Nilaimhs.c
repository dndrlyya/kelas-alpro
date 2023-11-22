#include <stdio.h>

float tugas, quiz, uts, uas, final;
int mutu;
char nama[50], nim[12];

void calcNilai() {
    final = (0.1 * tugas) + (0.2 * quiz) + (0.3 * uts) + (0.4 * uas);

    if (final > 90) {
        mutu = 'A';
    } else if (final >= 81 && final <= 90) {
        mutu = 'AB';
    } else if (final >= 71 && final <= 80) {
        mutu = 'B';
    } else if (final >= 61 && final <= 70) {
        mutu = 'BC';
    }else if (final >= 51 && final <= 60) {
        mutu = 'C';
    }else if (final >= 45 && final <= 50) {
        mutu = 'D';
    } else if (final <= 45) {
        mutu = 'B';
    }
}

void displayNilaiAkhir() {
    printf("\nHASIL KALKULASI\n");
    printf("Nama Mahasiswa\t: %s\n", nama);
    printf("NIM\t\t: %s\n", nim);
    printf("Nilai Akhir\t: %.2f\n", final);
    printf("Mutu\t\t: %c\n", mutu);

    if (mutu != 'E' && mutu != 'D') {
        printf("Lulus\n");
    } else {
        printf("Tidak Lulus\n");
    }
}

void main() {
    printf("Nama Mahasiswa\t: ");
    scanf("%s", nama);
    printf("NIM\t\t: ");
    scanf("%s", nim);
    printf("Nilai Tugas\t: ");
    scanf("%f", &tugas);
    printf("Nilai Quiz\t: ");
    scanf("%f", &quiz);
    printf("Nilai UTS\t: ");
    scanf("%f", &uts);
    printf("Nilai UAS\t: ");
    scanf("%f", &uas);

    calcNilai();
    displayNilaiAkhir();

}
