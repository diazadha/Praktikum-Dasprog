#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menampilkan isi elemen array A dan B
IS : User siap menginput elemen array ke 1 sampai ke 4
FS : Tampil di layar isi elemen array A dan B

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int a[4], j, d;
	
	d = 1;
	for (j=0; j<4; j++)
	{
		printf ("Masukkan elemen array ke- %d : ", d);
		scanf ("%d", &a[j]);
		d++;
	}
	printf ("isi elemen array A adalah : ");
	
	for (j=0; j<4; j++)
	{
		printf ("%d ", a[j]);
	}
	printf ("\n");
	
	printf ("isi elemen array B adalah : %d %d %d %d", a[j-4], a[j-3], a[j-2], a[j-1]);
	printf ("\n");
	system ("PAUSE");
}
