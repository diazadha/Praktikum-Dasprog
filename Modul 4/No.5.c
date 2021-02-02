#include <stdio.h>

/***************************
Program kira - kira
Deskripsi : Membuat algoritma supaya hasilnya sama dengan output yang ada di soal
IS : -
FS : Tampil di layar seperti yang ada di soal

Dibuat oleh:
Nama : Diaz Adha Asri Prakoso
Tanggal : 7 Desember 2018
****************************/

void main (void)

{	int j, b;	
	
	
	j = 0;
	b = 0;
	while (b<28)
	{
		b = b + j;
		printf ("%d ", b);
		j++;
		
	}
	printf ("\n");
	system ("PAUSE");
}
