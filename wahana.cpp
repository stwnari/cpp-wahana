// Nama : Ari Setiawan
// NIM  : 41520010130

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void wahana()
{
	string nama, pilihan, code, time, EP, D5, WP, FA;
	int harga, tiket, total, uang, total_biaya, uang_kembalian;
	
	EP = "EDUPARK";
	D5 = "5D GENERATION";
	WP = "WATER PARK";
	FA = "FUN ADVENTURE";
	
	cout << " Berikut Kode Wahana : " << endl;
	cout << " ----------------------------------------------------------------" << endl;
	cout << " ||  Kode Wahana  ||     Wahana     ||            Hari         ||" << endl;
	cout << " --------------------------------------------------------------||" << endl;
	cout << " ||      EP       ||    Edupark     || Weekday, Weekend, Libur ||" << endl;
	cout << " ||      5D       || 5D Generation  || Weekday, Weekend, Libur ||" << endl;
	cout << " ||      WP       ||  Water Park    || Weekday, Weekend, Libur ||" << endl;
	cout << " ||      FA       || Fun Adventure  || Weekday, Weekend, Libur ||" << endl;
	cout << " ----------------------------------------------------------------" << endl;
	cout << endl;
	kode:
	cout << " Silahkan Masukkan Kode Wahana : ";
	cin  >> code;
	
	if ( code == "EP")
	{
		cout << " Anda memilih Wahana " << EP << endl;
		cout << " Pilihan Waktu Kunjungan : ";
		cin  >> time;
		
		if ( time == "WEEKDAY" || time == "Weekday" || time == "weekday"){
			harga = 90000;
			cout << " 1 Tiket Wahana EDUPARK Weekday = Rp. 90.000 " << endl;
		} else if ( time == "WEEKEND" || time == "Weekend" || time == "weekend"){
			harga = 120000;
			cout << " 1 Tiket Wahana EDUPARK Weekend = Rp. 120.000" << endl;
		} else if ( time == "LIBUR" || time == "Libur" || time == "libur"){
			harga = 150000;
			cout << " 1 Tiket Wahana EDUPARK libur = Rp. 150.000" << endl;
		} else {
			cout << " Maaf hari yang Anda inputkan tidak tersedia !!!"<<endl;
			goto kode;
		}
		
	} 
	else if ( code == "5D")
	{
		cout << " Anda memilih wahana " << D5 << endl;
		cout << " Pilihan Waktu Kunjungan : ";
		cin  >> time;
		
		if ( time == "WEEKDAY" || time == "Weekday" || time == "weekday"){
			harga = 100000;
			cout << " 1 Tiket Wahana EDUPARK Weekday = Rp. 100.000 " << endl;
		} else if ( time == "WEEKEND" || time == "Weekend" || time == "weekend"){
			harga = 150000;
			cout << " 1 Tiket Wahana EDUPARK Weekend = Rp. 150.000" << endl;
		} else if ( time == "LIBUR" || time == "Libur" || time == "libur"){
			harga = 170000;
			cout << " 1 Tiket Wahana EDUPARK libur = Rp. 170.000" << endl;
		} else {
			cout << " Maaf hari yang Anda inputkan tidak tersedia !!!"<<endl;
			goto kode;
		}
	}
	else if ( code == "WP")
	{
		cout << " Anda memilih wahana " << WP << endl;
		cout << " Pilihan Waktu Kunjungan : ";
		cin  >> time;
		
		if ( time == "WEEKDAY" || time == "Weekday" || time == "weekday"){
			harga = 70000;
			cout << " 1 Tiket Wahana EDUPARK Weekday = Rp. 70.000 " << endl;
		} else if ( time == "WEEKEND" || time == "Weekend" || time == "weekend"){
			harga = 90000;
			cout << " 1 Tiket Wahana EDUPARK Weekend = Rp. 90.000" << endl;
		} else if ( time == "LIBUR" || time == "Libur" || time == "libur"){
			harga = 100000;
			cout << " 1 Tiket Wahana EDUPARK libur = Rp. 100.000" << endl;
		} else {
			cout << " Maaf hari yang Anda inputkan tidak tersedia !!!"<<endl;
			goto kode;
		}
	}
	else if ( code == "FA")
	{
		cout << " Anda memilih wahana " << FA << endl;
		cout << " Pilihan Waktu Kunjungan : ";
		cin  >> time;
		
		if ( time == "WEEKDAY" || time == "Weekday" || time == "weekday"){
			harga = 130000;
			cout << " 1 Tiket Wahana EDUPARK Weekday = Rp. 130.000 " << endl;
		} else if ( time == "WEEKEND" || time == "Weekend" || time == "weekend"){
			harga = 180000;
			cout << " 1 Tiket Wahana EDUPARK Weekend = Rp. 180.000" << endl;
		} else if ( time == "LIBUR" || time == "Libur" || time == "libur"){
			harga = 200000;
			cout << " 1 Tiket Wahana EDUPARK libur = Rp. 200.000" << endl;
		} else {
			cout << " Maaf hari yang Anda inputkan tidak tersedia !!!"<<endl;
			goto kode;
		}
	}
	else
	{
		cout << " Maaf, Kode wahana yang Anda inputkan SALAH !!!" << endl;
		goto kode;
	}
	cout <<endl;
	cout << " Masukkan jumlah Tiket : ";
	cin  >> tiket;
	
	total_biaya = harga * tiket;
	system("cls");
	konfirm:
	cout << " ========================================== "<< endl;
	cout << "    Harap Konfirmasi Nama Pemesan !!! " << endl;
	cout << " ========================================== "<< endl;
	cout << " Masukkan Nama : ";
	cin  >> nama;
	cout << " Terima Kasih atas Konfirmasinya " << nama << endl;
	cout << endl;
	cuan:
	cout << " Masukkan Uang Anda : ";
	cin  >> uang;
	uang_kembalian = uang - total_biaya;
	
	if ( uang_kembalian < 0){
		cout << " Maaf, Uang Anda kurang ! " << endl;
		goto cuan;
	}
	cout << " Ketik OK untuk Cetak Struk, Dan Close untuk konfirmasi : ";
	cin  >> pilihan;
	
	if ( pilihan == "OK"){
		system("cls");
		cout << "-------------- STRUK --------------" << endl;
		cout << endl;
		cout << " Nama Pemesan    : " << nama << endl;
		cout << " Jumlah Tiket    : " << tiket << endl;
		cout << " Total Harga     : " << tiket << " x " << harga << endl;
		cout << "                 : " << total_biaya << endl;
		cout << " Uang Anda       : " << uang << endl;
		cout << " Uang Kembalian  : " << uang_kembalian << endl;
		cout << " ---------- Terima Kasih ----------" <<endl;
	} else {
		goto konfirm;
	}
}

main()
{
	string nama;
	
	cout << " ================================================" << endl;
	cout << "               Selamat Datang                    " << endl;
	cout << "      Di Wahana Bermain - Family Time            " << endl;
	cout << " ================================================" << endl;
	cout << endl;
	cout << " Masukkan Nama : ";
	cin  >> nama;
	system("cls");
	cout << " ================================================" << endl;
	cout << " Selamat Datang " << nama << endl;
	cout << " ================================================" << endl;
	cout << endl;
	wahana();
	
	getch ();
	
}
