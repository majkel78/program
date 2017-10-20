// kalkulator wersja 004

#include<stdio.h>

void mnoz(int a,int b){printf("Wynik mnozenia: %d\n",a*b);}
void dodaj(int a,int b){printf("Wynik dodawania: %d\n",a+b);}
void odejmij(int a,int b){printf("Wynik odejmowania: %d\n",a-b);}
void dziel(int a,int b){printf("Wynik dzielenia: %d i reszty %d\n",a/b,a%b);}

void clear(){while(getchar()!='\n');}
void cls(){printf("\033[H\033[J");}

int licz(int a,int b, char wybor)
{
	if(wybor == '*') 	mnoz(a,b);
	else if(wybor == '+')	dodaj(a,b);
	else if(wybor == '-')	odejmij(a,b);
	else if(wybor == '/')	dziel(a,b);
	else {printf("Podales nieodpowiedni znak!\n");return 0;}
	return 1;
}

int main(void)
{
	int a, b;				/* j.w. z inicjalizacja */
	char wybor;
	int czy_dalej=1;

	while(czy_dalej==1)
	{

		printf("Podaj a: ");scanf("%d",&a);clear();
		printf("Podaj b: ");scanf("%d",&b);clear();
		printf("Podaj +,-,*,/ :");scanf("%c",&wybor);clear();

		licz(a,b,wybor);
		printf("Czy dalej chcesz liczyc (1 - TAK, 0 - NIE): ");scanf("%d",&czy_dalej);clear();
	}

	return 0;
}

