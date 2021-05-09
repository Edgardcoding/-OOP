#include <iostream>
#include <conio.h>
#define BUNGA 0.01

using namespace std;

int main()
{

const char nama[]="\n\tNama : Supit Edgard Garry";
      char nim[]="\n\tNIM : 105011810036";
      char kelas[]="\n\tOOP : paralel A";
      
    int kode,kode2,setor,saldo;
    char lagi;
    string pass;
    int tarik[2]={500000,1000000};
    
    
cout<<"\n\t\tBIODATA"<<endl;
cout<<"\t+++++++++++++++++++++++++"<<endl;
cout<<nama<<endl;
cout<<nim<<endl;
cout<<kelas<<endl;
cout<<"\n\t+++++++++++++++++++++++++";
cout<<endl;


do{
	
	
	cout<< "\n\t\t\t\tLOGIN";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<< "\n\tMasukan Kata Sandi : ";
	cin>>pass;
	system("cls");
	
	while(pass== " 123456 ");
	{
		
		if(lagi=='T'||lagi=='t')
		goto keluar;
		
		
cout<<"\n\t                ATM BANK "<<endl;
cout<<"\n\t========================================"<<endl;
cout<<""<<endl;
cout<<"\t                  MENU"<<endl;
cout<<" "<<endl;
cout<<"\n\t1. Cek Saldo           3. Setoran Tunai"<<endl;
cout<<endl;
cout<<"\n\t2. Penarikan Tunai     4. Exit"<<endl;
cout<<"\n\t========================================"<<endl;
cout<<endl;
cout<<"\n\tMASUKAN PILIHAN ANDA : ";
cin>>kode;
system("cls");

switch(kode)

    {
    	
    	case 1:
    		cout<<endl;
    		cout<<"\n\t ______________________________"<<endl;
    		cout<<"\n\t|   Informasi Saldo :          |"<<endl;
    		cout<<"\n\t|______________________________|"<<endl;
    		cout<<"\n\t  Sisa Saldo: Rp. "<<saldo<<endl;
    		cout<<"\n\tAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI.? Ya/Tidak ; ";
    		cin>>lagi;
    		system("cls");
    		break;

         case 2:
            cout<<"\n\t\t         ATM BANK "<<endl;
            cout<<"\n\t_________________________________________"<<endl;
            cout<<"\n\t             PENARIKAN TUNAI"<<endl;
            cout<<" "<<endl;
            cout<<"\n\t1. Rp.500.000            2. Rp. 1.000.000"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\n\t_________________________________________"<<endl;
            cout<<endl;
            cout<<"\n\tMASUKAN PILIHAN ANDA : ";
            cin>>kode2;
            system("cls");

switch (kode2)
        {
        	
        case 1:
        	cout<<"\n\t\tPenarikan Berhasil";
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"\n\tAnda melakukan penarikan tunai senilai : Rp.500.000,-"<<endl;
        	saldo=saldo-tarik[0];
        	cout<<""<<endl;
        	cout<<"\n\tSisa Saldo   : Rp. "<<saldo<<",-";
        	cout<<""<<endl;
        	cout<<""<<endl;
        	cout<<"\n\tAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI.? Ya/Tidak ; ";
        	cin>>lagi;
        	system("cls");
        	break;
        		
        case 2:
        	cout<<"\n\t\tPenarikan Berhasil";
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"\n\tAnda melakukan penarikan tunai senilai : Rp.1.000.000,-"<<endl;
        	saldo=saldo-tarik[1];
        	cout<<""<<endl;
        	cout<<"\n\tSisa Saldo     : Rp. "<<saldo<<",-";
        	cout<<""<<endl;
        	cout<<"\n\tAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI.? Ya/Tidak ; ";
        	cin>>lagi;
        	system("cls");
        	break;
        			
        default:
        	cout<<"\n\tKODE YANG ANDA MASUKKAN TIDAK TERSEDIA";
        	system("cls");
        	}
        	break;
        	
        case 3 :
        	cout<<"\n\tSetoran Tunai"<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<endl;
        	cout<<"\n\tMasukan Jumlah yang anda ingin setoran : "; 
			cin>>setor;
        	saldo=setor*BUNGA+setor+saldo;
        	cout<<endl;
        	cout<<"\n\tJumlah Saldo Anda Sekarang :"<<saldo<<endl;
        	cout<<"\n\tAPAKAH INGIN MELAKUKAN TRANSAKSI LAGI.? Ya/Tidak ; ";
        	cin>>lagi;
        	system("cls");
        	break;
        		
        case 4 :
        	goto keluar;
        	break;
        			
        default:
        	cout<<"\n\tKODE YANG ANDA MASUKKAN TIDAK TERSEDIA";
        	system("cls");
        				
		}
		
		
}


cout<<endl;
system("cls");




	} while(lagi=='Y'||lagi=='y');
	  keluar:
	  cout<<"\n\tTERIMA KASIH TELAH MELAKUKAN TRANSAKSI";
	  cout<<endl;
	  
	  
	  
	  
	  
	  getche();

}
