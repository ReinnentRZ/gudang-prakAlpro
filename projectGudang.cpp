#include <iostream>
using namespace std;

//global variable
char kembali;
int menu, pilihKategori;

//struct here
struct kategori {
    string namaKategori;
    int idKategori;

};

struct barang {
    string nama;
    int jumlah;
    int id;
};

//array here
barang stockBarang[100000];
kategori arrayKategori[1000];

int jumlahKeseluruhanBarang = 0;
int jumlahBarang = 0;
int jumlahKategori = 0;   

//function here

void menuGudang();
void tambahBarang();
void tambahKategori();
void cariBarang();
void updateBarang();
void tampilBarang();
void hapusBarang();
void riwayat();
void menuKategori();

int main() {

    do{

    menuGudang();

    switch(menu) {
        
        case 1  : tambahBarang();    break;
        case 2  : tambahKategori();  break;
        case 3  : cariBarang();      break;
        case 4  : updateBarang();    break;
        case 5  : tampilBarang();    break;
        case 6  : hapusBarang();     break;
        case 7  : riwayat();         break;       

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
    cout << "| 4. Perbarui Data Barang  |\n";
    cout << "| 5. Tampilkan Data Barang |\n";
    cout << "| 6. Hapus Data Barang     |\n";
    cout << "| 7. Riwayat Aktifitas     |\n";
    cout << "============================\n";    
    cout << "| 0. Keluar                |\n";
    cout << "============================\n";  
    cout << "Pilih menu : "; cin >> menu;      
    
}

void menuKategori() {
    
    kategori kt;

    for (int i = 0; i < jumlahKategori; i++) {
        cout << "\nNo." << i + 1 << " " << kt.namaKategori;

    }
    
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
            getline(cin, stockBarang[jumlahBarang].nama);
            cout << "Jumlah      : ";
            cin >> stockBarang[jumlahBarang].jumlah;

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
    
    cout << "=================================\n";
    cout << "|        TAMBAH KATEGORI        |\n"; // Reinnent belum mandi
    cout << "=================================\n";
    cout << "Nama : ";
    getline(cin, arrayKategori[jumlahKategori].namaKategori);
    jumlahKategori += 1;
    idKategori.[jumlahKategori-1] = jumlahKategori;
    cout << "\n=================================\n";
    cout << "\nKategori berhasil ditambahkan!\n";

}

void listBarang() {
    
    if (jumlahBarang == 0) {

        cout << "Gudang Kosong";
        
    } else {

        cout << "\nPilih Kategori Terlebih Dahulu\n";
        menuKategori();
        cout << "\nMasukkan Kategori : ";
        cin >> pilihKategori;
        for (int i = 0; ) {}
        }
}

void listBarang() {
    
    if (jumlahBarang == 0) {

        cout << "Gudang Kosong";
        
    } else {

        cout << "\nPilih Kategori Terlebih Dahulu\n";
        menuKategori();

    }


}

void tampilBarang() {  
    if (jumlahBarang == 0) {
        cout << "Tidak ada barang.\n";
        return;
        //menampilkan menu sorting 
    }
    int pilihan,urutan;
    cout << "1. tampilkan semua data\n";
    cout << "tampilkan berdasarkan:"
    cout << "2. id\n";
    cout << "3. nama\n";
    cout << "4. jumlah\n";
    cin >> pilihan;
    cout << "urutan:\n";
    cout << "1. AESC ";
    cout << "2. DESC";
    cin >> urutan;

    if (pilihan==1){
        cout << "\nData Barang\n";

    }

;
;
    
}
void cariBarang(){
    
}

nnnnn