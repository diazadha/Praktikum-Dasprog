#include <stdio.h>

float penjumlahan (float variabela,float variabelb,float variabelc,float variabeld,float variabele)
{
	return (variabela+variabelb+variabelc+variabeld+variabele);
}

void main (void)

{	float	a, b, c, d, e, hasil;

	printf ("Masukkan nilai a : ");
	scanf ("%f", &a);
	printf ("Masukkan nilai b : ");
	scanf ("%f", &b);
	printf ("Masukkan nilai c : ");
	scanf ("%f", &c);
	printf ("Masukkan nilai d : ");
	scanf ("%f", &d);
	printf ("Masukkan nilai e : ");
	scanf ("%f", &e);
	
	hasil = penjumlahan (a, b, c, d, e);
	
	printf ("Hasil Jumlah : %f\n", hasil);
	
	system ("PAUSE");
}
