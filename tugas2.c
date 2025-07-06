#include <stdio.h>

int main() {
    int nilai[5];               // Array untuk menyimpan 5 nilai ujian
    int *ptr = nilai;           // Pointer yang menunjuk ke array nilai
    int i;
    int maks, min;
    float total = 0, rata_rata;

    // Input nilai ujian
    printf("Masukkan 5 nilai ujian:\n");
    for(i = 0; i < 5; i++) {
        printf("Nilai ke-%d: ", i + 1);
        scanf("%d", ptr + i);  // Input langsung ke alamat memory menggunakan pointer
    }

    // Inisialisasi nilai awal untuk perbandingan
    maks = min = *(ptr);  // Ambil nilai pertama sebagai awal

    // Proses mencari nilai tertinggi, terendah, dan menghitung total
    for(i = 0; i < 5; i++) {
        int nilaiSekarang = *(ptr + i);  // Akses elemen array via pointer

        if(nilaiSekarang > maks)
            maks = nilaiSekarang;

        if(nilaiSekarang < min)
            min = nilaiSekarang;

        total += nilaiSekarang;
    }

    rata_rata = total / 5;

    // Output hasil
    printf("\n===== Hasil Analisis Nilai Ujian =====\n");
    printf("Nilai tertinggi : %d\n", maks);
    printf("Nilai terendah  : %d\n", min);
    printf("Rata-rata nilai : %.2f\n", rata_rata);

    return 0;
}
