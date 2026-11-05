#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    char mauLagi;

    do {
        cout << "\n==================================================\n";
        cout << "     GAME DETEKTOR BOHONG (LIE DETECTOR) C++     \n";
        cout << "==================================================\n\n";

        string namaTeman;
        cout << "Siapa nama teman yang mau kita periksa? ";
        getline(cin, namaTeman);

        vector<string> daftarTanya = {
            "1. Apakah " + namaTeman + " buang muka atau gak mau lihat mata kita pas ngomong?",
            "2. Apakah " + namaTeman + " lama banget mikir sebelum jawab (kayak lagi nyusun cerita)?",
            "3. Apakah ceritanya terlalu banyak bumbu dan berlebihan?",
            "4. Apakah suara " + namaTeman + " jadi kedengaran aneh atau gemetar?",
            "5. Kalau ditanya lagi, apakah ceritanya berubah-ubah?"
        };

        int totalPoin = 0;
        int pilihanAnak;

        cout << "\nYuk, pilih tingkatannya dari angka 1 sampai 4 ya:\n";
        cout << "1 = Nggak pernah / Jujur banget\n";
        cout << "2 = Kadang-kadang kelihatan\n";
        cout << "3 = Sering banget\n";
        cout << "4 = Wah, parah / Bohong banget!\n";
        cout << "--------------------------------------------------\n";

        for (size_t i = 0; i < daftarTanya.size(); i++) {
            cout << daftarTanya[i] << endl;
            cout << "Masukkan pilihan angka (1-4): ";
            cin >> pilihanAnak;

            while (pilihanAnak < 1 || pilihanAnak > 4) {
                cout << "Eh, salah! Tolong masukkan angka 1 sampai 4 ya: ";
                cin >> pilihanAnak;
            }

            totalPoin += pilihanAnak;
            cout << "--------------------------------------------------\n";
        }

        cin.ignore();

        cout << "\n==================================================\n";
        cout << "                HASIL PENILAIAN                   \n";
        cout << "==================================================\n";
        cout << "Nama Teman : " << namaTeman << endl;
        cout << "Total Poin : " << totalPoin << " dari 20\n\n";

        cout << "Keputusan: ";
        if (totalPoin >= 5 && totalPoin <= 10) {
            cout << "JUJUR BANGET! 🎉\n";
            cout << "Artinya: " << namaTeman << " anak baik, omongannya bener dan bisa dipercaya!\n";
        } else if (totalPoin >= 11 && totalPoin <= 15) {
            cout << "MENCURIGAKAN...\n";
            cout << "Artinya: " << namaTeman << " kayaknya lagi nutupin sesuatu nih, atau lagi gugup aja.\n";
        } else {
            cout << "KETAHUAN BOHONG!\n";
            cout << "Artinya: " << namaTeman << " fix lagi bohong! Gerak-geriknya kelihatan banget.\n";
        }
        cout << "==================================================\n\n";

        cout << "Mau periksa teman yang lain lagi? (Ketik 'y' untuk ya, 't' untuk tidak): ";
        cin >> mauLagi;
        cin.ignore();

    } while (mauLagi == 'y' || mauLagi == 'Y');

    cout << "\nYey! Terima kasih sudah main game detektor bohong. Dadah! 👋\n";

    return 0;
}