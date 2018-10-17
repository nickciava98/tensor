/*
 *	Title: Tensor Management Engine Sample
 * 	File: main.c
 * 	Author: Niccolò Ciavarella
 * 	Date: 16/10/2018
 * 	Version: 1.0
 * 	Contact: n.ciavarella@outlook.it
 * 	Licence: GNU LGPL
*/

#include <stdio.h>
#include <stdlib.h>
#include "tensor.h"

//6-dimension tensor sample

int main(int argc, char *argv[])
{
	//Define new tensors preallocated with MAX of size
	ten t1[RMAX][CMAX][PMAX], t2[RMAX][CMAX][PMAX];
	
	//Define effective size of tensors
	int i = 0, j = 0, k = 0;
	
	if(argc != 4)
	{
		return -1;
	}
	
	else
	{
		//Input size of tensor via cli
		sscanf(argv[1], "%d", &i);
		sscanf(argv[2], "%d", &j);
		sscanf(argv[3], "%d", &k);
		
		//Loading tensor T1 with random int values
		printf("\n\nLoading tensor T1. . .\n");
		tensorLoad(t1, i, j, k);
		
		//Loading tensor T2 with random int values
		printf("\n\nLoading tensor T2. . .\n");
		tensorLoad(t2, i, j, k);
		
		//Printing values of tensor T1 on cli
		printf("\n\nTensor T1:\n");
		tensorPrint(t1, i, j, k);
		
		printf("\n\n");
		
		//Printing values of tensor T2 on cli
		printf("Tensor T2:\n");
		tensorPrint(t2, i, j, k);

		//Copying tensor T2 into tensor T1
		printf("\n\nCopying tensor T2 into T1. . .\n");
		tensorCopy(t1, t2, i, j, k);

		printf("\n\n");

		//Printing new tensor T1 equal to T2
		printf("New Tensor T1 = T2:\n");
		tensorPrint(t1, i, j, k);
	}

	return 0;
}



