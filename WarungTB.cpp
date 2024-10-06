/*-----------------------------------
Selamat Datang di Warung Tiga Belas (TB).
-------------------------------------*/
#include <iostream>
using namespace std;

//reval menambahkan data Warung
const int jumlahJajanan = 10;
string jajanan[jumlahJajanan] = {"BengBeng", "Coklatos", "Better  ", "Nabati  ", "Basreng  ", "Chitato ", "Taroo   ", "Golda   ", "FruitTea", "Aqua    "};
int hargaJajanan[jumlahJajanan] = {2500, 1000, 2000, 2000, 500, 2000, 2000, 3000, 5000, 5000};

//menu jajan dan harga
void tampilkanMenu() {
	cout << "\n=========== MENU  JAJANAN ===========\n";
	for(int i = 0; i < jumlahJajanan; i++) {
		cout << i + 1 << ". " << jajanan[i] << "\t - \t" << "Rp. " << hargaJajanan[i] << endl;
	}
	cout << "=====================================" << endl;
}

//reval menambahkan total pesanan dan struk belanja
int totalPesanan(int pilihan[], int jumlah[], int jumlahPesanan) {
	int totalHarga = 0;

	cout << "\n=========== STRUK BELANJA ===========\n";
	cout << "Barang \t\tJumlah \t\tHarga\n";
	cout << "=====================================\n";

	for(int i = 0; i < jumlahPesanan; i++) {
		int indexJajanan = pilihan[i] - 1;
		int harga = hargaJajanan[indexJajanan] * jumlah[i];
		totalHarga += harga;
		cout << jajanan[indexJajanan] << "\t" << jumlah[i] << "\t    Rp. " << harga << endl;
	}

	cout << "=====================================\n";
	cout << "Total Harga: \tRp. " << totalHarga << endl;
	cout << "=====================================\n";
	return totalHarga;
}

int main(){
	int pilihan[50], jumlah[50];
	int jumlahPesanan = 0;
	char lagi;
	do {
		tampilkanMenu();
		cout<< "Masukkan Kode Jajanan Yang Ingin DIbeli : ";
		cin>> pilihan[jumlahPesanan];
		cout<< "Masukkan Jumlah : ";
		cin>> jumlah[jumlahPesanan];

		jumlahPesanan++;

		cout << "Apakah ingin menambah pesanan? (y/n) : ";
		cin>>lagi;
	} while (lagi== 'y' || lagi == 'Y');

	totalPesanan(pilihan, jumlah, jumlahPesanan);
    return 0;
}
