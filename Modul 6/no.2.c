#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menampilkan jumlah elemen array sesuai keinginan user
IS : User siap menginput isi elemen array 
FS : Tampil di layar isi elemen array

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int A[100], a, b, c, d; 
	
	printf ("Masukan elemen array yang dikehendaki = ");
	scanf ("%d", &b);
	
	c = 1;
	for (a=0; a<b; a++)
	{
		printf ("Masukkan elemen array ke- %d = ", c);
		scanf ("%d", &A[a]);
		c++;
	}
	printf ("isi elemen array adalah : ");
	
	for (a=0; a<b; a++)
	{
		printf ("%d ", A[a]);
	}
	printf ("\n");
	system ("PAUSE");
	
}
