#include <stdio.h>

/*******************
Program Biodata
Deskripsi : Mendapatkan output Tahun, Nama, Umur, Bulan,dan tanggal
IS : User siap menginput 
FS : Tertulis di layar Tahun, Nama, Umur, Bulan, Tanggal 

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
*********************/

void main (void)
//KAMUS**********************
{	int t, u, b, g;
	char Nama [100], z[100];

//ALGORITMA***************************
	printf ("Tahun= ");
	scanf ("%d", &t);
	printf ("Nama User= ");
	scanf ("%s", &Nama);
	printf ("Umur= ");
	scanf ("%d", &u);
	printf ("Bulan (Angka)= ");
	scanf ("%d", &b);
	printf ("Bulan (Karakter)= ");
	scanf ("%s", &z);
	printf ("Tanggal= ");
	scanf ("%d", &g);
	
	printf ("%d - %s = %d - %d - %d \n", t, Nama, u, b, g);
	printf ("%d - %s = %d - %s - %d \n", t, Nama, u, z, g);	
	system ("PAUSE");
	
}

