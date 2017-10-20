#include <stdio.h>  /* biblioteka stand. input-output */

/* y = f(x)     */
/*     f() => 0 */

int main()	/* funkcja glowna programu */
/* int -> typ zwracanej wartosci (int-wartosc calkowita */
{
	puts("Pierwszy program");	/* puts - funkcja z biblioteki standardowej */
					/* wyswietlajaca ciag znakow - automatcyznie przechpodzi do nowej linii*/

	putchar('a');
	putchar('\n');		// przejscie do nowej linii
	putchar(66);		// wyswietlenie znaku o kodzie 660
	putchar('\t');		// tabulator
	putchar('x');
	putchar('\r');		// powrot karetki
	putchar('\\');
	putchar('\n');

	return 0;
}

