#include <iostream>
#include <string>
using namespace std;

// global variable
char kembali;
int menu, pilihKategori;

<<<<<<< HEAD
//struct here
struct barang {
=======
// struct here
struct kategori
{
    string namaKategori;
    int idKategori;
    barang structBarang[100000];
};

// barang struct
struct barang
{
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
    string nama;
    int jumlah;
    int id;
};

<<<<<<< HEAD
struct kategori {
    string namaKategori;
    int idKategori;
    barang structBarang[10000];
};


//array here
=======
// array here
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
kategori arrayKategori[1000];

int jumlahKeseluruhanBarang = 0;
int jumlahBarang = 0;
int jumlahKategori = 0;

// function here

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

int main()
{

    do
    {

        menuGudang();

<<<<<<< HEAD
    switch(menu) {
        
        case 1  : tambahBarang();    break;
        case 2  : tambahKategori();  break;
        case 3  : cariBarang();      break;
        case 4  : //updateBarang();    break;
        case 5  : tampilBarang();    break;
        case 6  : //hapusBarang();     break;
        case 7  : //riwayat();         break;       
=======
        switch (menu)
        {
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415

        case 1:
            tambahBarang();
            break;
        case 2:
            tambahKategori();
            break;
        case 3:
            cariBarang();
            break;
        case 4:
            updateBarang();
            break;
        case 5:
            tampilBarang();
            break;
        case 6:
            hapusBarang();
            break;
        case 7:
            riwayat();
            break;

        default:
            system("cls");
            cout << "==================\n";
            cout << "| Menu tidak ada |\n";
            cout << "==================\n";
            break;
        }

        cout << "\nApakah anda ingin kembali ke menu? (y/t) ";
        cin >> kembali;

    } while (kembali == 'y' || kembali == 'Y');
}

void menuGudang()
{

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
    cout << "Pilih menu : ";
    cin >> menu;
}

<<<<<<< HEAD
void menuKategori() {
    cout << "          KATEGORI          \n";
    cout << "============================\n";
    for (int i = 0; i < jumlahKategori; i++) {
        cout << i + 1 << ". " << arrayKategori[i].namaKategori << endl;
=======
void menuKategori()
{
    kategori kt;
    cout << "          KATEGORI          \n";
    cout << "============================\n";
    for (int i = 0; i < jumlahKategori; i++)
    {
        cout << "\nNo." << i + 1 << " " << kt.namaKategori;
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
    }
    cout << "----------------------------\n";
}

void tambahBarang()
{
    menuKategori();
    cout << "\nPilih kategori : ";
    cin >> pilihKategori;
    for (int i = 0; i < jumlahKategori; i++)
    {
        if (pilihKategori == i + 1)
        {
            cout << "Tambah Barang Kategori " << arrayKategori[i].namaKategori << endl;
            cout << "===========================================\n";
            cout << "Nama Barang : ";
            getline(cin, arrayKategori[i].structBarang[jumlahBarang].nama);
            cout << "Jumlah      : ";
            cin >> arrayKategori[i].structBarang[jumlahBarang].jumlah;

            break;
        }
        else
        {
            system("cls");
            cout << "==================\n";
            cout << "| Menu tidak ada |\n";
            cout << "==================\n";
        }
    }
}

<<<<<<< HEAD
void tambahKategori() {
    system("cls");
=======
void tambahKategori()
{

>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
    cout << "=================================\n";
    cout << "|        TAMBAH KATEGORI        |\n"; // Reinnent belum mandi
    cout << "=================================\n";
    cout << "Nama : ";
    cin >> arrayKategori[jumlahKategori].namaKategori;
    jumlahKategori += 1;
    arrayKategori[jumlahKategori - 1].idKategori = jumlahKategori;
    cout << "\n=================================\n";
    cout << "\nKategori berhasil ditambahkan!\n";
}

<<<<<<< HEAD
void tampilBarang() {  
    if (jumlahKategori == 0) {
        kosong();
=======
void tampilBarang()
{
    if (jumlahKategori == 0)
    {
        cout << "Tidak ada barang.\n";
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
    }
    cout << "     MENU TAMPILKAN DATA     \n";
    cout << "============================\n";
<<<<<<< HEAD
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

=======
    cout << "1. Id\n";
    cout << "2. Nama\n";
    cout << "3. Usia\n";
    cout << "----------------------------\n";
    cout << "0. Kembali\n";
    cout << "----------------------------\n";
    cout << "Pilih menu : ";
    cin >> menu;

    if (menu == 1)
    {
        cout << "\nData Barang\n";
    }

    ;
    ;
>>>>>>> d78db2d182b8856743cfe470d7d3152c328b4415
}
void cariBarang()
{
}

void kosong()
{
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