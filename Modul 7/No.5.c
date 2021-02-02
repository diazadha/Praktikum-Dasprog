#include <stdio.h>

void luas (float *hasil,float panjang,float lebar)
{
	*hasil = panjang * lebar;
}

void main (void)
{	float hasil, panjang, lebar;

	printf ("Masukkan angka untuk panjang = ");
	scanf ("%f", &panjang);
	printf ("Masukkan angka untuk lebar = ");
	scanf ("%f", &lebar);
	luas (&hasil, panjang, lebar);
	printf ("Luas persegi panjang = %f\n", hasil);
	
	system ("PAUSE");
}

