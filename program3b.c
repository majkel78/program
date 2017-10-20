// kalkulator wersja 002

#include<stdio.h>

void mnoz(int a,int b){printf("Wynik mnozenia: %d\n",a*b);}
void dodaj(int a,int b){printf("Wynik dodawania: %d\n",a+b);}
void odejmij(int a,int b){printf("Wynik odejmowania: %d\n",a-b);}
void dziel(int a,int b){printf("Wynik dzielenia: %d\n",a/b);}

int main(void)
{
	int a=2, b=5;				/* j.w. z inicjalizacja */

	char wybor;

	printf("Podaj +,-,*,/ jesli chcesz dodac/odjac/pomnozyc/podzielic liczby %d i %d: ",a,b);
	scanf("%c",&wybor);
	if(wybor == '*') 	mnoz(a,b);
	else if(wybor == '+')	dodaj(a,b);
	else if(wybor == '-')	odejmij(a,b);
	else if(wybor == '/')	dziel(a,b);
	else printf("Podales nieodpowiedni znak!\n");

	return 0;
}

