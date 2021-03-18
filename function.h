#include <iostream>
#include <iomanip>
#include <math.h>

/* Numero di matricola 4854159 */
#define d0 9
#define d1 5

/*
* Stampa a video (stdout) i valori dell'esercizio 1
* ed esegue i vari calcoli richiesti dall' esercitazione
*/
void esercizio_1();

/*
* Stampa a video (stdout) i valori dell'esercizio 2
* ed esegue i vari calcoli richiesti dall' esercitazione
*/
void esercizio_2();

/*
* Funzione che ti restituisce la il "polinomio di Taylor"
*/
double Taylor(int N, double x);

/*
* Funzione che ritorna il fattoriale di un numero
*/
double factorial(int x);

/*
* Funzione che restituisce il numero esp, cioè la precisione di macchiana per un float
*/
float espFloat();

/*
* Funzione che restituisce il numero esp, cioè la precisione di macchiana per un double
*/
double espDouble();