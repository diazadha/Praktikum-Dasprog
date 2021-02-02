#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menggabungkan isi dari elemen array A dan B
IS : User siap menginput elemen array A dari 1 sampai 4 dan array B dari 1 sampai 4 
FS : Tampil di layar hasil gabungan array A dan B

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/


void main (void)

{	int X[4], Z[4], d, a;

	printf ("Untuk array pertama A, masukkan:\n");
	d=1;
	for (a=0; a<4; a++)
	{
		printf ("elemen array ke %d : ", d);
		scanf ("%d", &X[a]);
		d++;
	}
	
	printf ("Untuk array kedua B, masukkan:\n");
	d=1;
	for (a=0; a<4; a++)
	{
		printf ("elemen array ke %d : ", d);
		scanf ("%d", &Z[a]);
		d++;	
	}
	
	printf ("Gabungan dari isi kedua array tersebut adalah ");

	for (a=0; a<4; a++)
	{
		printf ("%d", X[a]);
	}
	for (a=0; a<4; a++)
	{
		printf ("%d", Z[a]);
	}
	printf ("\n");
	system ("PAUSE");
}
