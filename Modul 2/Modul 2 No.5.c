#include <stdio.h>

/************************
Program Segitiga
Deskrpisi : Menghitung luas dan keliling sebuah segitiga sama kaki
IS : User siap menginput alas segitiga
FS : Di layar tertulis hasil luas dan kelilling segitiga

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS************
{	float a, t, k, luas, keliling;

//ALGORITMA*******************
	printf ("Tuliskan alas segitiga = ");
	scanf ("%f", &a);
	printf ("Tuliskan tinggi segitiga = ");
	scanf ("%f", &t);
	printf ("Tuliskan panjang kaki segitiga = ");
	scanf ("%f", &k);
//Rumus Luas Segitiga	
	luas = (a * t) / 2;
//Rumus Keliling Segitiga	
	keliling = (2 * a) + k; 
	
	printf ("Hasil luas segitiga = %f\n", luas);
	printf ("Hasil keliling segitiga = %f\n", keliling);
	system ("PAUSE");
	 
}
