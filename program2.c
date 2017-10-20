#include<stdio.h>

int mnoz(int a, int b)
{
	return a*b;
}

int dodaj(int a,int b){return a+b;}

int main(void)
{
	int wynik;				/* zadeklarowanie zmiennej i jej typu */
	int a=3, b=5;				/* j.w. z inicjalizacja */
	wynik=mnoz(a,b);			/* przypisenie zmiennej rezultatu funkcji mnoz() */
	printf("Wynik mnozenia: %i\n",wynik);	/* wyjscie na konsole */


	/* if() => blok warunkowy */
	/*	if(wyrazenie){jesli prawdziwe}	*/
	/*	else{jesli nieprawdziwe}	*/

	char wybor='*';
	if(wybor == '*')
	{
		printf("Wynik mnozenia: %d\n",mnoz(a,b));
	}
	else
	{
		printf("Wynik dodawania: %d\n",dodaj(a,b));
	}
	// po klamrze nie trzeba stawiac srednika, jego postawienie jest opcjonalne

	return 0;
}
