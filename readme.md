# Podstawy programowania

Struktura programu w języku C:

```c
int main()			// funkcja główna
{
	puts('Hello');	// program
	return 0;		// zakończenie funkcji i zwrócenie wartości (tutaj 0)
}
```

Funkcje w języku C:

```c
puts('Pierwszy program');		// wyświetlenie tekstu z przejściem do nowej linii
putchar('A');					// wyświetlenie pojedyńczego znaku (tutaj litery 'A')
putchar(66);					// wyświetlenie znaku o kodzie ASCII 66
printf("Zmienna = %d",a);		// wyświetlenie sformatowanego tekstu wraz z wartością zmiennej "a"
scanf("%d",&a);					// pobranie z konsoli wartości i wpisanie jej do zmiennej "a"

```

Deklarowanie własnych funkcji:

```c
int mnoz(int a, int b)		// zadeklarowanie funkcji która zwraca iloczyn podanych argumentów
{
	return a*b;
}

printf("Wynik mnozenia = %d\n",mnoz(4,5));	// przykład pobrania danych z wywoływanej funkcji mnoz()
```

Instrukcje warunkowe:

```c
int licz(int a,int b, char wybor)
{
	if(wybor == '*') 	mnoz(a,b);
	else if(wybor == '+')	dodaj(a,b);
	else if(wybor == '-')	odejmij(a,b);
	else if(wybor == '/')	dziel(a,b);
	else {printf("Podales nieodpowiedni znak!\n");return 0;}
	return 1;
}
```

Typy zmiennych:

```c
int a;			// zmienna typu "integer" - liczba całkowita
float a;		// zmienna zmiennoprzecinkowa pojedyńczej precyzji
double a;		// zmienna zmiennoprzecinkowa podwójnej precyzji
char a;			// zmienna zawierająca znak tekstowy;
char *a="Tekst"	// zmienna zawierająca wskaźnik na ciąg znaków z jednoczesnym przypisaniem do niniejszego ciągu
```

Znaki specjalne:

```c
printf("\n");	// przykład użycia znaku specjalnego (tutaj znak nowej linii)
//      \n - znak nowej linii
//      \r - znak powrotu "karetki" (przejście kursora do początku linii
//      \t - tabulator
//      \\ - "backslash"
```
