#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Membuat segitiga sama kaki dengan isi dari elemen array
IS : User siap menginput elemen array ke 1 sampai ke 10
FS : Tampil di layar segitiga sama kaki dengan isis dari elemen array

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int q[10], e, c, b, a, d,f, g, h ,i;
	
	e=0;
	for (c=1; c<2; c++)
	{
		printf ("Masukkan elemen array ke 1 dan %d : ", c);
		scanf ("%d", &q[e]);
		e++;
	}
	for (b=1; b<=2; b++)
	{
		printf ("Masukkan elemen array ke 2 dan %d : ", b);
		scanf ("%d", &q[e]);
		e++;
	}
	for (a=1; a<=3; a++)
	{
		printf ("Masukkan elemen array ke 3 dan %d : ", a);
		scanf ("%d", &q[e]);
		e++;
	}
	for (d=1; d<=4; d++)
	{
		printf ("Masukkan elemen array ke 4 dan %d : ", d);
		scanf ("%d", &q[e]);
		e++;
	}
	printf ("\n");
	
	h=1;
	i=0;
	for (f=1; f<=4; f++)
	{
		for (g=1; g<=h; g++)
		{
			printf ("%d ", q[i]);
			i++;
		}
		h++;
		printf ("\n");
	}
	
	system ("PAUSE");
}
	


