 #include <iostream>
 #include <string>

//imann menambahkan daftar harga dan menu
 using namespace std;
 int jumlahJajanan ;

 void tampilkanMenu(){
    string menu[] = {"Beng Beng, Coklatos, Better, Nabati, Basreng, Chitato, Taro, Golda, Fruit Tea, Aqua"};
    int harga[] = {2500, 1000, 2000, 2000, 500, 2000, 2000, 3000, 5000, 5000};
    int jumlahJajanan = sizeof(menu) / sizeof(menu[0]);

    cout << "Daftar menu : " << endl;
    for(int i = 0; i < jumlahJajanan; i++){
        cout << i+1 << ". " << menu[i] << " - Rp" << harga[i] << endl;
    }
 }
 int main(){
    int pilihan;
    tampilkanMenu();
    cout << "Masukkan pilihan Kalian : ";
    cin >> pilihan;

    return 0;
 }
