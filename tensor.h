/*
 *	Title: Tensor Management Engine Header
 * 	File: tensor.h
 * 	Author: Niccolò Ciavarella
 * 	Date: 16/10/2018
 * 	Version: 1.0
 * 	Contact: n.ciavarella@outlook.it
 * 	Licence: GNU LGPL
*/

#include <stdio.h>
#include <stdlib.h>

#define RMAX 5
#define CMAX RMAX
#define PMAX CMAX

//6-dimension tensor manager

typedef struct
{
	int a[RMAX][CMAX][PMAX];
} ten;

void tensorLoad(ten t[RMAX][CMAX][PMAX], int i, int j, int k)
{
	int i1, i2, i3, j1, j2, j3;

	for(i1 = 0; i1 < i; i1++)
	{
		for(i2 = 0; i2 < j; i2++)
		{
			for(i3 = 0; i3 < k; i3++)
			{
				for(j1 = 0; j1 < i; j1++)
				{
					for(j2 = 0; j2 < j; j2++)
					{
						for(j3 = 0; j3 < k; j3++)
						{
							t[i1][i2][i3].a[j1][j2][j3] = rand() % RMAX;
						}
					}
				}
			}
		}
	}
}

void tensorCopy(ten t1[RMAX][CMAX][PMAX], ten t2[RMAX][CMAX][PMAX], int i, int j, int k)
{
	int i1, i2, i3, j1, j2, j3;

	for(i1 = 0; i1 < i; i1++)
	{
		for(i2 = 0; i2 < j; i2++)
		{
			for(i3 = 0; i3 < k; i3++)
			{
				for(j1 = 0; j1 < i; j1++)
				{
					for(j2 = 0; j2 < j; j2++)
					{
						for(j3 = 0; j3 < k; j3++)
						{
							t1[i1][i2][i3].a[j1][j2][j3] = t2[i1][i2][i3].a[j1][j2][j3];
						}
					}
				}
			}
		}
	}
}

void tensorPrint(ten t[RMAX][CMAX][PMAX], int i, int j, int k)
{
	int i1, i2, i3, j1, j2, j3;

	for(i1 = 0; i1 < i; i1++)
	{
		for(i2 = 0; i2 < j; i2++)
		{
			for(i3 = 0; i3 < k; i3++)
			{
				for(j1 = 0; j1 < i; j1++)
				{
					for(j2 = 0; j2 < j; j2++)
					{
						for(j3 = 0; j3 < k; j3++)
						{
							printf("t1[%d][%d][%d].a[%d][%d][%d] = %d\n", i1, i2, i3, j1, j2, j3, t[i1][i2][i3].a[j1][j2][j3]);
						}
					}
				}
			}
		}
	}
}
