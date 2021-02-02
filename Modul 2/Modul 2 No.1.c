#include <stdio.h>

/************************
Program Bilangan Real
Deskrpisi : Menjumlahkan dan mengurangkan 2 bilangan real
IS : User siap menginput bilangan real pertama
FS : Di layar tertulis hasil penjumlahan dan pengurangan dari kedua bilangan real tersebut

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS***************

{	float x, y, jumlah, kurang;

//ALGORITMA******************

	printf ("Tuliskan biangan real pertama = ");
	scanf ("%f", &x);
	printf ("Tuliskan bilanga real kedua = ");
	scanf ("%f", &y);
	
	jumlah = x + y;
	kurang = x - y;
	
	printf ("Hasil penjumlahan = %f\n", jumlah);
	printf ("Hasil pengurangan = %f\n", kurang);
	
	system ("PAUSE");
	
}
	
	
	
