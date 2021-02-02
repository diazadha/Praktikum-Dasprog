#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menampilkan 4 jumlah isi elemen array
IS : User siap menginput elemen array ke 1 sampai ke 4
FS : Tampil di layar isi elemen array

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int a[4], no, j, d, w;
	
	d = 1;
	for (j=0; j<4; j++)
	{
		printf ("Masukkan elemen array ke- %d : ", d);
		scanf ("%d", &a[j]);
		d++;
	}
	printf ("isi elemen array adalah : ");
	for (j=0; j<4; j++)
	{
		printf ("%d ", a[j]);
	}
	printf ("\n");
	system ("PAUSE");
}
