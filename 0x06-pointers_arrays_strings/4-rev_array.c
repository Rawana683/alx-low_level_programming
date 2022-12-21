#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - entry point
 * @a : number
 * @n : number 
 * Description: 'reverse array'
 * Return: 0. (Success)
 */

void reverse_array(int *a, int n)
{
	int l;
	int r;
	int i;

	l = 0;
	r = n - 1;
	while(l < r)
	{
		i = a[l];
		a[l] = a[r];
		a[r] = i;
		l++;
		r--;
	}
}
