#include <stdio.h>

float luas (float a)
{
	return (a * a);
}

void main (void)

{	float b, hasil;
	
	printf ("Masukkan angka untuk sisi = ");
	scanf ("%f", &b);
	
	hasil = luas (b);
	printf ("Luas persegi = %f\n", hasil);
	system ("PAUSE");
}
