#include <stdio.h>

/****************************
Program Bilanganganjilpositif
Deskripsi : Mencetak bilangan ganjil dari besar ke kecil
IS : User siap menginput bilangan ganjil pertama
FS : Tampil di layar urutan bilangan ganjil yang diinput user ke kecil

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 7 Desember 2018
******************************/
void main (void)

{	int a, c;
	
	printf ("Masukan bilangan ganjil = ");
	scanf ("%d", &a);
	
	c = 1;
	while (c<=a)
	{
		printf ("%d ", a);
		a = a - 2;
		c = c + 0;
	}
	printf ("\n");
	system ("PAUSE");
	
}
