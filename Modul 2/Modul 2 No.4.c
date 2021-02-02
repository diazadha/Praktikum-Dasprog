#include <stdio.h>

/************************
Program Balok
Deskrpisi : Menghitung volume dan luas penampang dari suatu balok
IS : User siap menginput panjang sebuah balok 
FS : Di layar tertulis hasil volume dan luas penampnag suatu balok

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS*****************
{	int p, l, t, volume, luaspenampang;

//ALGORITMA*************
	printf ("Tuliskan panjang balok = ");
	scanf ("%d", &p);
	printf ("Tuliskan lebar balok = ");
	scanf ("%d", &l);
	printf ("Tuliskan tinggi balok = ");
	scanf ("%d", &t);
	
	volume = p * l * t;
	luaspenampang = 2 * ( (p*l) + (p*t) + (l*t));
	
	printf ("Volume Balok = %d\n", volume);
	printf ("Luas Penampang Balok = %d\n", luaspenampang);
	
	system ("PAUSE");
}
