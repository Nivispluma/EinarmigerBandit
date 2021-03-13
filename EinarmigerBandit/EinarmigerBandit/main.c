#include "mainHeader.h"

struct einzahlung asdf;

void inoutput()
{
	einzahlungKonto(geldgeber());
}

struct einzahlung geldgeber()
{
	struct einzahlung Temp;

	printf_s("\nZehner: ");
	scanf_s("%d", &Temp.zehnerle);

	printf_s("\nZwanzgerle: ");
	scanf_s("%d", &Temp.zwanzgerle);

	printf_s("\nFünfzgerle: ");
	scanf_s("%d", &Temp.funfzgerle);

	printf_s("\nEin Euro: ");
	scanf_s("%d", &Temp.einer);

	printf_s("\n1 Euro: ");
	scanf_s("%d", &Temp.zweier);

	printf_s("\n2 Euro: ");
	scanf_s("%d", &Temp.funfer);

	printf_s("\n10 Euro: ");
	scanf_s("%d", &Temp.zehner);

	printf_s("\n20 Euro: ");
	scanf_s("%d", &Temp.zwanzger);

	printf_s("\n50 Euro: ");
	scanf_s("%d", &Temp.funfzer);

	printf_s("\n100 Euro: ");
	scanf_s("%d", &Temp.hunder);

	return Temp;
}

void main ()
{
	int i;
	i = 1;
	do
	{
		
		printf_s("Wollen sie nochmal spielen? (y = 1/n = alles andere)");
		scanf_s("%d", i);
	} while (i == 1);

	return;
}