#include<stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}

int dodaj(int a,int b){return a+b;}

int main(void)
{
	int a=3, b=5;				/* j.w. z inicjalizacja */

	char wybor;

	printf("Podaj * jesli chcesz mnozyc: ");
	scanf("%c",&wybor);
	if(wybor == '*')
	{
		printf("Wynik mnozenia: %d\n",mnoz(a,b));
	}
	else
	{
		printf("Wynik dodawania: %d\n",dodaj(a,b));
	}

	return 0;
}
