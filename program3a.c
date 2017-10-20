// kalkulator wersja 001

#include<stdio.h>


int main(void)
{
	int a=2, b=5;				/* j.w. z inicjalizacja */

	char wybor;

	printf("Podaj +,-,*,/ jesli chcesz dodac/odjac/pomnozyc/podzielic liczby %d i %d: ",a,b);
	scanf("%c",&wybor);
	if(wybor == '*') 	printf("Wynik mnozenia: %d\n",a*b);
	else if(wybor == '+')	printf("Wynik dodawania: %d\n",a+b);
	else if(wybor == '-')	printf("Wynik odejmowania: %d\n",a-b);
	else if(wybor == '/')	printf("Wynik dzielenia: %d\n",a/b);
	else printf("Podales nieodpowiedni znak!\n");

	return 0;
}

