/*
 * ex2.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int n=0;
	printf("Enter the number of elements: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements:");
	fflush(stdout);		fflush(stdin);
	int i;
	float arr[100];
	float sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	float average=sum/n;
	printf("average= %f",average);
	return 0;
}
