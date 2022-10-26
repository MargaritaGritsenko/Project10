#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include <math.h>
float area_triangle(float a, float b, float c)
{
	float p, S;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}
void draw_triangle(int c)
{
	for (int q = 1; q <= c; ++q)
	{
		for (int w = 1; w <= q; ++w)
		{
			return printf("*");
		}
		return  printf("*\n");
	}
}
void name(int x)
{
	if (x == 3) printf("triangle\n");
	else
		if (x == 4) printf("rectangle\n");
		else
			if (x == 1) printf("round\n");
	
}

main()
{
	setlocale(LC_ALL, "RU");
	float a, b, c;
	printf("¬ведите стороны треугольника\n");
	scanf("%f %f %f", &a, &b, &c);
	float s = area_triangle(a, b, c);
	printf("ѕлощадь треугольника равна %f\n", s);
	name(3);
	//char x;
	//printf("¬ведите символ\n");
	//scanf("%c", &x);
	draw_triangle(c);
}