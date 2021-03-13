#pragma once

#include <Windows.h>
#include <stdio.h>
#include <time.h>
#include "Geld.h"
#include "Spiel.h"


struct einzahlung
{
	int zehnerle, zwanzgerle, funfzgerle, einer, zweier, funfer, zehner;
	int zwanzger, funfzer, hunder;
};

void inoutput();
struct einzahlung geldgeber();

extern struct einzahlung asdf;


void main();

