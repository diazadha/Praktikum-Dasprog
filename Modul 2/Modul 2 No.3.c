#include <stdio.h>

/************************
Program Persegi Panjang
Deskrpisi : Menghitung luas dan keliling persegi panjang  
IS : User siap menginput panjang sebuah persegi panjang
FS : Di layar tertulis luas dan keklilng persegi panjang

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS*****************
{	int p, l, luas, keliling;

//ALGORITMA*************
	printf ("Tuliskan panjang persegi panjang = ");
	scanf ("%d", &p);
	printf ("Tuliskan lebar persegi panjang = ");
	scanf ("%d", &l);
	
	luas = p * l;
	keliling = 2 * (p + l);
	
	printf ("Luas daerah = %d\n", luas);
	printf ("Keliling = %d\n", keliling);
	
	system ("PAUSE");
	

}
