#include <stdio.h>

/******************************
Program segitigasikusikuterbalik
Deskripsi : Menampilkan segitiga siku siku terbalik dengan pola bintang
IS : User siap menginput pola bintang yang paling ata
FS : Tampil di layar bentuk segitiga siku siku terbalik

Dibuat oleh:
Nama : Diaz Adha Asri Praakoso
Tanggal : 7 Desember 2018
******************************/

void main (void)

{	int  a, b, n;
	
	printf ("Masukkan nilai n = ");
	scanf ("%d", &n);
	
	a=1;
	while (a<=n)
	{
		b=a;
		a = a + 1;
		while (b<=n)
		{
			printf ("*");
			b=b+1;
		}
	printf ("\n");
	}
	return 0;
	system ("PAUSE");
}
