#include <stdio.h>  // Library standar untuk input/output

int main() {
    char nama[50];      // Variabel untuk menyimpan nama pengguna
    int a, b, c;        // Variabel untuk menyimpan 3 bilangan bulat dari user
    int pilihan;        // Variabel untuk menyimpan pilihan operasi
    int hasil;          // Untuk hasil operasi bilangan bulat
    float hasilF;       // Untuk hasil operasi desimal (float)

    // Meminta nama pengguna
    printf("Hai! Siapa namamu? ");
    scanf("%s", nama);  // Menyimpan nama ke variabel 'nama'

    // Menyapa pengguna dan meminta input 3 bilangan bulat
    printf("\nHalo %s! Yuk kita main hitung-hitungan dulu!\n", nama);
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga: ");
    scanf("%d", &c);

    // Menampilkan menu pilihan operasi
    printf("\nOke %s, pilih operasi yang ingin kamu lakukan:\n", nama);
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Rata-rata\n");
    printf("Masukkan pilihan (1-5): ");
    scanf("%d", &pilihan);  // Membaca pilihan dari user

    // Menggunakan switch untuk menangani berbagai pilihan operasi
    switch(pilihan) {
        case 1:
            hasil = a + b + c;  // Menjumlahkan ketiga bilangan
            printf("\nHasil penjumlahan: %d + %d + %d = %d\n", a, b, c, hasil);
            break;

        case 2:
            hasil = a - b - c;  // Mengurangkan bilangan kedua dan ketiga dari yang pertama
            printf("\nHasil pengurangan: %d - %d - %d = %d\n", a, b, c, hasil);
            break;

        case 3:
            hasil = a * b * c;  // Mengalikan ketiga bilangan
            printf("\nHasil perkalian: %d * %d * %d = %d\n", a, b, c, hasil);
            break;

        case 4:
            // Mengecek apakah pembagi (b dan c) bukan nol
            if (b != 0 && c != 0) {
                hasilF = (float)a / b / c;  // Mengubah ke float agar pembagian tidak membulat
                printf("\nHasil pembagian: %d / %d / %d = %.2f\n", a, b, c, hasilF);
            } else {
                // Menampilkan pesan error jika b atau c = 0
                printf("\nUps! Tidak bisa membagi dengan nol ya %s!\n", nama);
            }
            break;

        case 5:
            hasilF = (a + b + c) / 3.0;  // Menghitung rata-rata, 3.0 agar hasil desimal
            printf("\nRata-rata dari %d, %d, dan %d adalah: %.2f\n", a, b, c, hasilF);
            break;

        default:
            // Jika user memasukkan angka selain 1–5
            printf("\nPilihan tidak valid, coba lagi ya %s :)\n", nama);
    }

    // Menutup program dengan ucapan terima kasih
    printf("\nTerima kasih sudah mencoba, %s! Sampai jumpa!\n", nama);

    return 0;  // Akhiri program
}
