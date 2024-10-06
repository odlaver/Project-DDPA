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

//reval menambahkan kembalian uang
int uangKembalian(int totalHarga, int uang) {
	int kembalian = 0;
	int kurang = 0;
	do {
		if (uang < totalHarga) {
		    kurang = totalHarga - uang;
			cout << "Uang Anda Kurang " << kurang << " Kocak." << endl;
			cout << "Masukkan Uang Tambahan: Rp. ";
			int tambahan;
			cin >> tambahan;
			uang += tambahan;
			kembalian = uang - totalHarga;
			cout << "Kembalian Uang Anda: Rp. " << kembalian << endl;
		} else if (uang == totalHarga) {
			cout << "Uang Anda Pas." << endl;
			kembalian = 0;
		} else {
			kembalian = uang - totalHarga;
			cout << "Uang Anda: Rp. " << uang << endl;
			cout << "Kembalian Uang Anda: Rp. " << kembalian << endl;
		}
	} while (uang < totalHarga);
	return kembalian;
}

int main() {
	int pilihan[100], jumlah[100];
	int jumlahPesanan = 0;
	int uang, totalHarga, sisaKembalian;
	char lagi;

	cout << "Masukkan Uang Anda: Rp. ";
	cin >> uang;
	sisaKembalian = uang;

	do {
		do {
			tampilkanMenu();
			cout << "Masukkan Kode Jajanan yang Ingin Dibeli: ";
			cin >> pilihan[jumlahPesanan];
			cout << "Masukkan Jumlah: ";
			cin >> jumlah[jumlahPesanan];

			jumlahPesanan++;

			cout << "Apakah ingin menambah pesanan? (y/n): ";
			cin >> lagi;

		} while (lagi == 'y' || lagi == 'Y');

		totalHarga = totalPesanan(pilihan, jumlah, jumlahPesanan);
		sisaKembalian = uangKembalian(totalHarga, sisaKembalian);

		if (sisaKembalian > 0) {
			cout << "Apakah Anda Ingin Menambah Jajanan dengan Sisa Uang Rp. " << sisaKembalian << "? (y/n): ";
			cin >> lagi;
		} else {
			lagi = 'n' || 'N';
		}

		if (lagi == 'y' || 'Y') {
			jumlahPesanan = 0;
		}

	} while ((lagi == 'y' ||  lagi == 'Y') && sisaKembalian > 0);

	cout << "Terima Kasih telah Belanja di Warung Tiga Belas!" << endl;

	return 0;
}
