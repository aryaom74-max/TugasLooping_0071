#include <iostream>
using namespace std;

// Prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknik Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}