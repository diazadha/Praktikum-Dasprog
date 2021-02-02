#include <stdio.h>

/****************************
Program Rata-rata
Deskripsi : Menghitung rata - rata dari banyak input yag diinginkan oleh user
IS : User siap menginput jumlah bilangan yang ingin diinput
FS : Tampil di layar hasil rata - rata

Dibuat Oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 7 Desember 2018
***************************/
void main (void)

{	int angka, i, a;
	float b, ratarata, hasil;

	printf ("Masukan jumlah bilangan = ");
	scanf ("%d", &angka);
	
	i = 1;
	a = 1;
	while (i<=angka)
	{
		printf ("Masukkan angka ke %d = ", a);
		scanf ("%f", &b);
		hasil = hasil + b;
		a = a + 1;
		i = i + 1;
	}
	ratarata = hasil / angka;
	printf ("\n");
	printf ("Rata - rata = %f", ratarata);
	printf ("\n");	
	system ("PAUSE");
}
