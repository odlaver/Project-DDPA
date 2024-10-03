/*=======================================
Selamat Datang di Warung Tiga Belas (TB).
=========================================*/
#include <iostream>
using namespace std;

//reval menambahkan data Warung
const int jumlahJajanan = 10;
  string jajanan[jumlahJajanan] = {"Beng Beng", "Coklatos", "Better", "Nabati", "Basreng", "Chitato", "Taroo", "Golda", "Fruit Tea", "Aqua"};
  int hargaJajanan[jumlahJajanan] = {2500, 1000, 2000, 2000, 500, 2000, 2000, 3000, 5000, 5000};

 void tampilkanMenu(){
    cout << "\n========= MENU JAJANAN =========\n";
    for(int i = 0; i < jumlahJajanan; i++){
        cout << i+1 << ". " << jajanan[i] << "\t - \t" << "Rp. " << hargaJajanan[i] << endl;
    }
    cout << "================================" << endl;
 }

//reval menambahkan total pesanan dan struk belanja
void totalPesanan(int pilihan[], int jumlah[], int jumlahPesanan){
    int totalHarga = 0;
    
    cout << "\n========= STRUK BELANJA =========\n";
    cout << "Barang\t\tJumlah\tHarga\n";
    cout << "===============================\n";
    
    for(int i = 0; i < jumlahPesanan; i++){
        int indexJajanan = pilihan[i] - 1;
        int harga = hargaJajanan[indexJajanan] * jumlah[i];
        totalHarga += harga;
        cout << jajanan[indexJajanan] << "\t" << jumlah[i] << "\tRp. " << harga << endl;
    }
    
    cout << "===========================\n";
    cout << "Total Harga: Rp. " << totalHarga << endl;
    cout << "===========================\n";
}

 int main(){
    int pilihan;
    tampilkanMenu();
    cout << "Masukkan pilihan Kalian : ";
    cin >> pilihan;

    return 0;
 }
