#include <stdio.h>

/**********************************************
Program IP
Deskripsi : Mengetahui maksimal SKS yang dapat diambil
IS : User siap menginput IP
FS : Di layar tertulis sks yang dapat diambil

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Oktober 2018
**********************************************/

void main (void)

//KAMUS
{	float IP;
//ALGORITMA
	printf ("Masukkan IP= ");
	scanf ("%f", &IP);
	
	if(IP<3.0)
	{
		if (IP<2.0)
		{
			printf ("Maksimal 15 sks\n");
		}
		else //IP >= 2.0
		{
			if (IP>=2.0&&IP<2.5)
			{
				printf ("Maksimal 18 sks\n");
			}
			else //IP < 2.0 OR IP >= 2.5
			{
				if (IP>=2.5&&IP<3.0)
	 			{
				 	printf ("Maksimal 21 sks\n");
				}
			}
		}
	}
	else //IP >= 3.0
	{
		printf ("Maksimal 24 sks\n");
	}
 	
	system ("PAUSE");
}
