/*
 * ex3.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int row=0,column=0;
	float arr1[50][50];
	int i,j;
	printf("Enter number of rows columns: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d%d",&row,&column);
	printf("Enter the array elements\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%f",&arr1[i][j]);
		}
	}

	for(i=0;i<column;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("%f\t",arr1[j][i]);
			}
			printf("\n");
		}
	return 0;
}
