#include <stdio.h>

/************************
Program Tabung
Deskrpisi : Menghitung volume dan luas penampang dari sebuah tabung
IS : User siap menginput jari - jari tabung
FS : Di layar tertulis hasil volume dan luas permukaan tabung

Dibuat oleh : Diaz Adha Asri Prakoso
Tanggal : 17 Oktober 2018
************************/

void main (void)

//KAMUS****************
{	float r, t, volume, luaspermukaan;

//ALGORITMA***************
	printf ("Tuliskan jari - jari tabung = ");
	scanf ("%f", &r);
	printf ("Tulikan tinggi tabung = ");
	scanf ("%f", &t);
	
//Rumus Volume Tabung
	volume = (3.14 * r * r * t);
	
//Rumus Luas Permukaan Tabung 
	luaspermukaan = 2 * 3.14 * r * (r + t);
	
	printf ("Hasil volume tabung = %f\n", volume);
	printf ("Hasil luas permukaan = %f\n", luaspermukaan); 
	
	system ("PAUSE");
}

