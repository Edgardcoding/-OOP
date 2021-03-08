#include <iostream>
 
using namespace std;
 
int main()
{
 cout << "##  Program kelas Karyawan  ##" << endl;
 cout << "========================================" << endl;
 cout << endl;
 
 string data_anggota;
 char objek;
 int karyawan_1;
 int karyawan_2;
 int karyawan_3;
 int pengguna;
 int tiga_karyawan;
 
 cout << "karyawan 1 :,";
 cout << "karyawan 2 :,";
 cout << "karyawan 3 :,";
 
 cout << "\npengguna :";
 cin >> pengguna;
 
 cout << "jumlah data untuk tiga karyawan: ";
 cin >> tiga_karyawan;
 
 switch (pengguna) {
 	case 1:
 		cout << "\nAdam";
 		break;
 	case 2:
 	    cout << "\nBro";
 	    break;
 	case 3:
 	    cout << "\nMas";
 	    break;
 }
 
 return 0;
}
