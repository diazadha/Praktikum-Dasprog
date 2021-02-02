#include <stdio.h>

/************************
Program Temperature
Deskrpisi : Mengkonversi derajat celcius ke fahrenheit
IS : User siap menginput derajat celcius
FS : Di layar tertulis hasil konversi ke fahrenheit

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS******************
{	float C, F;

//ALGORITMA***************

	printf ("Derajat Celcius = ");
	scanf ("%f", &C);
	
	F = (9.0 / 5.0) * C + 32;
	
	printf ("Derajat Fahrenheit = %f\n", F);
	
	system ("PAUSE");
	
}
