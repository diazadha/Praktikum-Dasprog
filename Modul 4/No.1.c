#include <stdio.h>

/*****************************************
Program Bilangangenappositif
Deskripsi : Mencetak bilangan genap positif
IS : User siap menginputkan jumlah bilangan genap positif yang diingkan
FS : Tampil di layar bilangan gennap positif

Dibuat Oleh : 
Nama : Diaz Adha Asri Prakoso
Tanggal : 6 Desember 2018
******************************************/


void main (void)

{	int a, b, c;
	
	printf ("Masukkan jumlah bilangan genap positif = ");
	scanf ("%d", &a);
	
	b = 1;
	c = 0;
	while (b<=a)
	{
		c = c;
		printf ("%d ", c);
		c = c + 2;
		b = b + 1;
	}
	printf ("\n");
	system ("PAUSE");
	
}
