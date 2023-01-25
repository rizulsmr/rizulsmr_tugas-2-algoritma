#include <iostream>
using namespace std;

int sequentialsearch(string barang[], int jumlah_elemen, string key) {
	bool status=false;
	for(int i =0; i<jumlah_elemen; i++) {
		if(key==barang[i]) {
			status=true;
			return i;
			break;
		}
	}
	if(status == false)
		return -1;
}

int main () {
	
	int pilihan_menu;
	char ulang;
	string daftar_barang[] = {"ThaiTea", "GreenTea", "CoklatCreamy", "SusuRegal", "LemonMaduSoda"};
	int daftar_harga[] = {10000, 11000, 13000, 18000, 15000};
	int jumlah_elemen = sizeof(daftar_barang)/sizeof(daftar_barang[0]);
	string key;
	int jumlah=100, bayar, total=0;
	int nomor[]= {1,2,3,4,5};
	int harga[5]= {10000,11000,13000,18000,15000};
	int input_user [jumlah];
	int input_jumlah [jumlah];

	
	do {
		cout << "<><><><><><><><><><><><><><><><><>" << endl;
		cout << "<>        Qembung Drink         <>" << endl;
		cout << "<><><><><><><><><><><><><><><><><>" << endl;
		cout << "<>~~~~~~~~~ Menu Utama ~~~~~~~~~<>" << endl;
		cout << "<>     1. Pricelist Minuman     <>" << endl;
		cout << "<>     2. Cari Harga barang     <>" << endl;
		cout << "<>        3. Mulai Order        <>" << endl;
		cout << "<>          4. Checkout         <>" << endl;
		cout << "<>       5. Cetak Receipt       <>" << endl;
		cout << "<><><><><><><><><><><><><><><><><>" << endl;

		cout << "Masukan Pilihan Menu : ";
		cin >> pilihan_menu;
		cout << "##################################" << endl;
		cout << endl;
		
		switch (pilihan_menu) {
			case 1 : {
				cout << "==================================" << endl;
				cout << "||     Daftar Harga Minuman     ||" << endl;
				cout << "==================================" << endl;
				cout << "~ ThaiTea ---------> : Rp. 10000 ~" << endl;
				cout << "~ GreenTea --------> : Rp. 11000 ~" << endl;
				cout << "~ CoklatCreamy ----> : Rp. 13000 ~" << endl;
				cout << "~ SusuRegal -------> : Rp. 18000 ~" << endl;
				cout << "~ LemonMaduSoda ---> : Rp. 15000 ~" << endl;
				cout << "==================================" << endl;
				
				cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
				cin >> ulang;
				cout << "##################################" << endl;
				cout << endl;
				break;
			}
			case 2 : {
				cout << "Masukan Jenis Minuman Yang Anda Cari : ";
				cin >> key;
	
				int indeksbarang = sequentialsearch(daftar_barang, jumlah_elemen, key);
				if(indeksbarang==-1) {
					cout << "Jenis Minuman Tidak Ditemukan" << endl;
				}
				else {
					cout << "Harga Jenis Minuman Yang Di Cari Adalah : " << daftar_harga[indeksbarang] << endl;
				}
				cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
				cin >> ulang;
				cout << "##################################" << endl;
				cout << endl;
				break;
			}
			case 3 : {
				cout << "==== Minuman Di Toko Qembung ====" << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << endl;
				cout << "---------------------------------" << endl;
				cout << "| Daftar Minuman | Harga | Kode |" << endl;
				cout << "---------------------------------" << endl;
				cout << "|     ThaiTea    | 10000 |  01  |" << endl;
				cout << "|    GreenTea    | 11000 |  02  |" << endl;
				cout << "|   CoklatCramy  | 13000 |  03  |" << endl;
				cout << "|    SusuRegal   | 18000 |  04  |" << endl;
				cout << "|  LemonMaduSoda | 15000 |  05  |" << endl;
				cout << "---------------------------------" << endl;
				cout << endl;
	
				cout << "Berapa Jenis Minuman Yang Ingin Kamu Beli ?? : ";
				cin >> jumlah;
	
				if(jumlah<1) {
					cout << "Jenis Minuman Tidak Boleh Kurang Dari 1" << endl;
					cout << endl;
				}
	
				for (int i=0; i<jumlah; i++) {
					cout << "Masukan Kode Minuman ke-" << i+1 << " : ";
					cin >> input_user [i];
					cout << "Masukan Jumlah Minuman Ke-" << i+1 << " : ";
					cin >> input_jumlah [i];
					int subtotal = input_jumlah [i] * harga [input_user[i]-1];
					total = total + subtotal;
		
				}
				cout << "Total Jenis Minuman Yang Anda Beli Adalah : " << jumlah << " Jenis" << endl;
				cout << "Total Harga Yang Harus Anda Bayar Adalah : Rp. " << total << ",-" << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << endl;
				cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
				cin >> ulang;
				cout << "##################################" << endl;
				cout << endl;
				break;
			}
			case 4 : {
				if (total==0){
					cout << "Silahkan Mulai Order Terlebih Dahulu" << endl;
					cout << endl;
					cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
					cin >> ulang;
					cout << "##################################" << endl;
					cout << endl;
					break;
				}
				cout << "Total Yang Harus Dibayar : Rp. " << total << ",-" << endl;
				cout << "Masukan Jumlah Pembayaran Anda : Rp. ";
				cin >> bayar;
				cout << endl;
	
	
				if (bayar>=total){
					cout << "Kembalian Anda = Rp. " << bayar-total << ",-" << endl;
					cout << "Terima Kasih Telah Datang dan Belanja" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		
				}
				else{
					cout << "Maaf.. Uang Anda Tidak Cukup... :(" << endl;
					cout << "Uang Anda Kurang : Rp. " << total-bayar << ",-" << endl;
					cout << "Silahkan Ulangin Pembayaran" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				}
	
				cout << endl;
				cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
				cin >> ulang;
				cout << "##################################" << endl;
				cout << endl;
				break;
			}
			case 5 : {
				if (total==0){
					cout << "Silahkan Melakukan Pembayaran Terlebih Dahulu" << endl;
					cout << endl;
					cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
					cin >> ulang;
					cout << "##################################" << endl;
					cout << endl;
					break;
				}
				cout << "|============================================================|" << endl;
				cout << "||                         INVOICE                          ||" << endl;
				cout << "|============================================================|" << endl;
				cout << "| NO | Jenis Minuman |    Harga    | Banyaknya |    Total    |" << endl;
				cout << "|------------------------------------------------------------|" << endl;
				for ( int i=0; i<jumlah; i++) {
					cout << "| -" << i+1 << " |       " << input_user[i] << "       | Rp. " << harga [input_user[i]-1] << ",- |  " << input_jumlah[i] << " Gelas  | RP. " << input_jumlah [i] * harga [input_user[i]-1] << ",- |" << endl;
				} 
	
				cout << "|------------------------------------------------------------|" << endl;
				cout << "|                  TOTAL BAYAR                 | Rp. " << total << ",- |" << endl;
				cout << "|               JUMLAH PEMBAYARAN              | Rp." << bayar << ",- |" << endl;
				cout << "|                   KEMBALIAN                  | Rp.  " << bayar-total << ",- |" << endl;
				cout << "|============================================================|" << endl;
				cout << endl;
				cout << "Terima Kasih Telah Datang Dan Belanja... :)" << endl;
				cout << "Qembung Drink... Saatnya Naik Level" << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << endl;
				cout << "Kembali Ke Menu Utama ?? ( Y/T ) : ";
				cin >> ulang;
				cout << "##################################" << endl;
				cout << endl;
				break;
			}
				
		}
	} while (ulang!= 'T');
	
	cout << "Terima Kasih Telah Berkunjung... :)";
	
	cout << endl;
	return 0;
}
