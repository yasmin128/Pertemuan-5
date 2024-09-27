#include <iostream>
using namespace std;

int Pokok(int JamKerja){
    return 7500 * JamKerja;
}

int Lembur(int JamKerja){
    int JamLembur = JamKerja - 8;
    if (JamKerja > 8){
        return (JamKerja - 8) * (7500 * 1.5);
    }
    return 0;
}

int Makan(int JamKerja){
    if (JamKerja >= 9){
        return 10000;
    }
    return 0;
}

int Transport(int JamKerja){
    if (JamKerja >= 10){
        return 13000;
    }
    return 0;
}

int main (){
    string NIP, Nama, Ulang;
    int JamKerja, GajiPokok, UangLembur, UangMakan, UangTransport, TotalGaji;

    do {
        cout << " Masukan NIP Anda: ";
        cin >> NIP;
        cout << " Masukan Nama Anda: ";
        cin >> Nama;
        cout << " Masukan Jam Kerja Anda: ";
        cin >> JamKerja;

        GajiPokok = Pokok(JamKerja);
        UangLembur = Lembur(JamKerja);
        UangMakan = Makan(JamKerja);
        UangTransport = Transport(JamKerja);
        TotalGaji = GajiPokok + UangLembur + UangMakan + UangTransport;

        cout << "\n --- Gaji Karyawan PT. XYZ ---\n";
        cout << "NIP: " << NIP << endl;
        cout << "Nama: " << Nama << endl;
        cout << "Gaji Pokok: Rp. " << GajiPokok << endl;
        cout << "Bonus Lembur: Rp. " << UangLembur << endl;
        cout << "Bonus Makan: Rp. " << UangMakan << endl;
        cout << "Bonus Transport: Rp. " << UangTransport << endl;
        cout << "Total Gaji Karyawan: Rp. " << TotalGaji << endl;

        cout << "Ulangi Pengecekkan (y/n)";
        cin >> Ulang;

    } while (Ulang == "y");
    return 0;
}
