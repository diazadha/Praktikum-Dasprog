#include <stdio.h>

/*******************
Program Waktu
Deskripsi : Mengkonversi dan menjumlah dari menit, detik ke jam
IS : User sipa menginput
FS : Tampil dilayar jumlah jam 

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
*********************/

main (void)
//KAMUS************************
{	float j, m, d, jam;

//ALGORITMA**********************
	printf ("Jam= ");
	scanf ("%f", &j);
	printf ("Menit= ");
	scanf ("%f", &m);
	printf ("Detik= ");
	scanf ("%f", &d);
	jam = 0;
	jam = (j/1) + (m/60) + (d/3600);
	  
	
	printf ("%f Jam %f Menit %f Detik = %f Jam\n", j, m, d, jam);
	system ("PAUSE");
	
}
