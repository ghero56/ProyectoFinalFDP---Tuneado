#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

// Librerias
#include<stdio.h>
#include<stdlib.h>

// Estructuras
typedef struct _monkey monomio;
struct _monkey{
	int coef,exp; // partes del monomio
	monomio *next; // apuntador al siguiente en lista
	monomio *prev; // apuntador al siguiente en lista
};

typedef struct _big_ape{
	int tam; // tamaño total del polinomio
	monomio *fst; // apuntador al primer monomio del polinomio
} polinomio;

// Funciones


#endif
