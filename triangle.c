
/* triangle.c */

#include <stdio.h>

int area_triangle(int base, int height)
{
	int area;
	
	area = (base * height) /2;
	
	return area;
}

int main()
{
	int b, h, result;
	
	printf("Base : \n");
	fflush(stdout);
	scanf("%d", &b);
	
	printf("Height : \n");
	fflush(stdout);
	scanf("%d", &h);
	
	result = area_triangle(b, h);
	printf("The area is %d\n", result);

	return 0;		
	
}

