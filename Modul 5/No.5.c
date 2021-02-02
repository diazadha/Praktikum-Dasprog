#include <stdio.h>

/************************************
Program segitigasikusiku
Deskripsi : Membuat segitiga siku siku dengan angka
IS : User siap memasukkan angka
FS : Segitiga siku siku angka terbentuk

Dibuat oleh
Nama : Diaz Adha Asri Prakoso
Tanggal :  14 Desember 2018
**************************************/

void main (void)

{	int  a, b, n;
	
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	
	a=0;
	while (a<=n)
	{
		b=1;
		while (b<=a)
		{
			printf ("%d", b);
			b++;
		}
		printf ("\n");
		a++;
	}
	return 0;
	system ("PAUSE");

	
	
}
