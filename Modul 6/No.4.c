#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menampilkan isi elemen array A dan B (dalam urutan terbalik dari arrray A)
IS : User siap menginput elemen array ke 1 sampai ke 4
FS : Tampil di layar isi elemen array A dan B (dalam urutan terbalik dari array A)

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int b[4], d, w;
	
	w=1;
	for (d=0; d<4; d++)
	{
		printf ("Masukkan elemen array ke- %d = ", w);
		scanf ("%d", &b[d]);
		w++;
	}
	printf ("Isi elemen array A adalah: ");
	
	for (d=0; d<4; d++)
	{
		printf ("%d ", b[d]);
	}
	printf ("\n");
	printf ("Isi elemen array B adalah: %d %d %d %d ", b[d-1], b[d-2], b[d-3], b[d-4]);
	system ("PAUSE");
	
}
