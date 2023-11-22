#include <stdio.h>
#include <string.h>

float tugas, quiz, uts, uas, final;
char nama[50], nim[20], mutu[3];

void calcNilai() {
    final = (0.1 * tugas) + (0.2 * quiz) + (0.3 * uts) + (0.4 * uas);

    if (final > 90) {
        strcpy(mutu, "A");
    } else if (final >= 81 && final <= 90) {
        strcpy(mutu, "AB");
    } else if (final >= 71 && final <= 80) {
        strcpy(mutu, "B");
    } else if (final >= 61 && final <= 70) {
        strcpy(mutu, "BC");
    }else if (final >= 51 && final <= 60) {
        strcpy(mutu, "C");
    }else if (final >= 45 && final <= 50) {
        strcpy(mutu, "D");
    } else if (final <= 45) {
        strcpy(mutu, "E");
    }
}

void displayNilaiAkhir() {
    printf("\nHASIL KALKULASI\n");
    printf("Nama Mahasiswa\t: %s\n", nama);
    printf("NIM\t\t: %s\n", nim);
    printf("Nilai Akhir\t: %.2f\n", final);
    printf("Mutu\t\t: %s\n", mutu);

    if (strcmp(mutu, "E") != 0 && strcmp(mutu, "D") != 0) {
        printf("Lulus\n");
    } else {
        printf("Tidak Lulus\n");
    }
}

int main() {
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

    return 0;
}

