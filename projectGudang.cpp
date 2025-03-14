#include <iostream>
#include <string>
using namespace std;

//global variable
char kembali;
int menu, pilihKategori;

//struct here
struct barang {
    string nama;
    int jumlah;
    int id;
};

struct kategori {
    string namaKategori;
    int idKategori;
    barang structBarang[10000];
};


//array here
kategori arrayKategori[1000];

int jumlahKeseluruhanBarang = 0;
int jumlahBarang = 0;
int jumlahKategori = 0;

//function here

void menuGudang();
void tambahBarang();
void tambahKategori();
void cariBarang();
//void updateBarang();
void tampilBarang();
//void hapusBarang();
//void riwayat();
void menuKategori();
void kosong();
void menuAscDsc();

int main() {

    do{

    menuGudang();

    switch(menu) {
        
        case 1  : tambahBarang();    break;
        case 2  : tambahKategori();  break;
        case 3  : cariBarang();      break;
        case 4  : //updateBarang();    break;
        case 5  : tampilBarang();    break;
        case 6  : //hapusBarang();     break;
        case 7  : //riwayat();         break;       

        default : system("cls");
            cout << "==================\n";
            cout << "| Menu tidak ada |\n";
            cout << "==================\n";
        break;    
        }

        cout << "\nApakah anda ingin kembali ke menu? (y/t) "; cin >> kembali;  

        }while (kembali == 'y' || kembali == 'Y');

}

void menuGudang() {
    
    system("cls");
    cout << "============================\n";
    cout << "|           MENU           |\n";
    cout << "============================\n";
    cout << "| 1. Tambah Barang         |\n";
    cout << "| 2. Tambah Kategori       |\n";    
    cout << "| 3. Cari Barang           |\n";
    cout << "| 4. Perbarui Data Barang* |\n";
    cout << "| 5. Tampilkan Data Barang |\n";
    cout << "| 6. Hapus Data Barang     |\n";
    cout << "| 7. Riwayat Aktifitas*    |\n";
    cout << "============================\n";    
    cout << "| 0. Keluar                |\n";
    cout << "============================\n";  
    cout << "* = coming soon\n";
    cout << "Pilih menu : "; cin >> menu;      
    
}

void menuKategori() {
    cout << "          KATEGORI          \n";
    cout << "============================\n";
    for (int i = 0; i < jumlahKategori; i++) {
        cout << i + 1 << ". " << arrayKategori[i].namaKategori << endl;
    }
    cout << "----------------------------\n"; 
}

void tambahBarang() {
    menuKategori();  
    cout << "\nPilih kategori : ";
    cin >> pilihKategori;
    for(int i=0; i<jumlahKategori; i++) {
        if(pilihKategori == i+1){
            cout << "Tambah Barang Kategori " << arrayKategori[i].namaKategori << endl;
            cout << "===========================================\n";
            cout << "Nama Barang : ";
            getline(cin, arrayKategori[i].structBarang[jumlahBarang].nama);
            cout << "Jumlah      : ";
            cin >> arrayKategori[i].structBarang[jumlahBarang].jumlah;

            break;
        }
        else{
            system("cls");
            cout << "==================\n";
            cout << "| Menu tidak ada |\n";
            cout << "==================\n";
        }
    }
}

void tambahKategori() {
    system("cls");
    cout << "=================================\n";
    cout << "|        TAMBAH KATEGORI        |\n"; // Reinnent belum mandi
    cout << "=================================\n";
    cout << "Nama : ";
    cin >> arrayKategori[jumlahKategori].namaKategori;
    jumlahKategori += 1;
    arrayKategori[jumlahKategori-1].idKategori = jumlahKategori;
    cout << "\n=================================\n";
    cout << "\nKategori berhasil ditambahkan!\n";

}

void tampilBarang() {  
    if (jumlahKategori == 0) {
        kosong();
    }
    cout << "     MENU TAMPILKAN DATA     \n";
    cout << "============================\n";
    cout << "1. Tampilkan semua\n";
    cout << "2. Tampilkan per kategori\n";
    cout << "----------------------------\n"; 
    cout << "Pilih menu : "; cin >> menu;

    switch(menu){
        case 1 :
        system("cls");
        tampilkanSemuaBarang();
        break;

        case 2 :
        menuKategori();        
        break;

        default : system("cls");
        cout << "==================\n";
        cout << "| Menu tidak ada |\n";
        cout << "==================\n";
        break;
    }

}
void cariBarang(){
    
}

void kosong(){
    cout << "-----------------------------\n";
    cout << "        Gudang kosong.       \n";
    cout << "-----------------------------\n";
}

void tampilkanSemuaBarang(){
    menuAscDsc();
    cout << "Pilih menu : "; cin >> menu;
    switch(menu){
        case 1 : //asc(); break;
        case 2 : //desc(); break;

        default : system("cls");
        cout << "==================\n";
        cout << "| Menu tidak ada |\n";
        cout << "==================\n";
        break;
    }
}

void menuAscDesc(){
    cout << "       URUTKAN DARI :       \n";
    cout << "============================\n";
    cout << "1. ID Terkecil\n";
    cout << "2. ID Terbesar\n";
    cout << "----------------------------\n"; 
}

//pengurutan menggunakan bubble
void asc(){

}