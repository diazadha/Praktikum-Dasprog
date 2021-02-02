#include <stdio.h>

float ratarata (float d, float e, float f)
{
	return ((d + e + f)/3);
}

void main (void)

{	float a, b, c, hasil;

	printf ("Masukkan nilai a : ");
	scanf ("%f", &a);
	printf ("Masukkan nilai b : ");
	scanf ("%f", &b);
	printf ("Masukkan nilai c : ");
	scanf ("%f", &c);
	
	hasil = ratarata (a, b, c);
	
	printf ("Hasil Rata - rata : %f\n", hasil);
	system ("PAUSE");
}
