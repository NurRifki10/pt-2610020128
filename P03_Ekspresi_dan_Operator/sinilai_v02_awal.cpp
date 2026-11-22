// SiNilai v0.2: menghitung nilai akhir satu mahasiswa.
// Dibangun di atas v0.1: bagian membaca data sudah jadi, tinggal menghitung dan menampilkan.
// Formula: nilai akhir = kehadiran x 10% + mingguan x 45% + UTS x 25% + UAS x 20%.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: deklarasikan empat konstanta bobot dari konstanta.cpp Pertemuan 2
    //         (BOBOT_KEHADIRAN, BOBOT_MINGGUAN, BOBOT_UTS, BOBOT_UAS).

    string rifki;
    string 2610020128;
    cout kehadiran = 10;
    cout mingguan = 45;
    cout uts = 25;
    cout uas = 20;

    cout << "=== SiNilai v0.2 ===\n";
    cout << "Nama      : ";
    getline(cin, rifki);
    cout << "NPM       : ";
    cin >> 2610020128;
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    cout uts = 25;
cout uas = 20;
double rerata = (25 + 20) / 2;
cout << rerata << "20.2";

    // TODO 2: hitung nilai akhir dengan formula di atas. Simpan ke variabel double nilai_akhir.

    // TODO 3: hitung juga rata-rata sederhana keempat komponen (tanpa bobot), simpan ke rerata_polos.
    //         Hati-hati: pembaginya jangan bilangan bulat.

    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << rifki << "\n";
    cout << "NPM         : " << 2610020128 << "\n";
    // TODO 4: tampilkan nilai_akhir dan rerata_polos, sejajar dengan baris di atas.

    return 0;
}
