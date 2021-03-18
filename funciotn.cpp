#include "function.h"


/*
* Stampa a video (stdout) i valori dell'esercizio 1
* ed esegue i vari calcoli richiesti dall' esercitazione 
*/
void esercizio_1(){
    
    double b = (d1 + 1) * std::pow(10, 20);
    double c = b * (-1);
    double a;
    
    //Scelta del tipo di visualizzazione numerica (virgola fissa, notazione scientifica)
    int opzione;    
    std::cout << "Esercizio 1: " << std::endl;
    std::cout << "Come vuoi visualizzare i numeri dell'esercizio 1?"  << std::endl;
    std::cout << "1) Virgola (successivamente verrà richiesto con che precisione)" << std::endl;
    std::cout << "2) Notazione Scientifica"  << std::endl;
    std::cout << "Inserisci l'opzione (1 o 2): ";
    std::cin >> opzione;
    while(opzione != 1 && opzione != 2){
        std::cout << "Errore: scelta non disponibile" << std::endl;
        std::cout << "Reinserisci un'opzione" << std::endl;
        std::cin >> opzione;
    }

    int precision = 1;
    switch (opzione){

        case 1: std::cout << "Inserisci con che precisione si vogliono visualizzare i numeri,\nse viene inserita una precisione non supportata verrà scelta la\nprecisione di default (default: 5, min: 3, max: 25)" << std::endl;
                std::cout << "Inserisci un'opzione:";
                std::cin >> precision;
                if (precision < 3 || precision > 25)
                    precision = 5;
                std::cout << std::fixed;
                break;

        case 2: std::cout << std::scientific;
                break;
    }

    std::cout << std::endl;
    std::cout << std::endl;


    //Tutto il codice eseguito prima di questo ciclo for è "superfluo" serve solamente per scegliere come visualizzare i numeri
    for (unsigned int i=0; i<=6; i++){
        a = (d0 + 1) * (double)std::pow(10, i);     //calcolo a in base al ciclo 
        
        std::cout << "****** Giro con -> i = " << i << std::endl;       //stapa dei vari valori 
        std::cout << "Valore di a = " << a << std::endl;
        std::cout << "Valore di b = " << b << std::endl;
        std::cout << "valore di c = " << c << std::endl;
        std::cout << std::endl;
        std::cout << std::setprecision(precision) << "(a + b) + c  = " << "(" << a << " + " << b << ")" <<  " + " << c << " = " << (a + b) + c <<std::endl;
        std::cout << std::setprecision(precision) << "a + (b + c)  = " << a << " + " << "(" << b << " + " << c << ") = " << a + (b + c) <<std::endl;
        std::cout << std::endl;
    }
    
}


/*
* Stampa a video (stdout) i valori dell'esercizio 2
* ed esegue i vari calcoli richiesti dall' esercitazione
*/
void esercizio_2(){

    std::cout << "\n\nEsercizio 2: " << std::endl;

    int ValueOfN[] = {3, 10, 50, 100, 150};
    unsigned int N_count = 5;   

    std::cout << "\nAlgoritmo 1: " << std::endl;
    for (unsigned int i=0; i<N_count; i++){
        std::cout << "1)  N = " << ValueOfN[i] << " - x = exp(0.5) = " << exp((double)0.5) << " | Taylor = " << Taylor(ValueOfN[i], (double)0.5) << std::endl;
        std::cout << "2)  N = " << ValueOfN[i] << " - x = exp(30) = " << exp((double)30) << "   | Taylor = " << Taylor(ValueOfN[i], (double)30) << std::endl;
        std::cout << "1)  Errore Assoluto = " << Taylor(ValueOfN[i], (double) 0.5) - exp((double) 0.5) << " | Errore Relativo = " << (Taylor(ValueOfN[i], (double)0.5) - exp((double) 0.5)) / exp((double) 0.5) << std::endl;
        std::cout << "2)  Errore Assoluto = " << Taylor(ValueOfN[i], (double) 30) - exp((double) 30) << " | Errore Relativo = " << (Taylor(ValueOfN[i], (double)30) - exp((double) 30)) / exp((double) 30) << std::endl;
        std::cout << std::endl;
    }
    std::cout << "\n******\n" << std::endl;
    for (unsigned int i=0; i<N_count; i++){
        std::cout << "1)  N = " << ValueOfN[i] << " - x = exp(-0.5) = " << exp(-0.5) << " | Taylor = " << Taylor(ValueOfN[i], (double)-0.5) << std::endl;
        std::cout << "2)  N = " << ValueOfN[i] << " - x = exp(-30) = " << exp(-30) << "   | Taylor = " << Taylor(ValueOfN[i], (double)-30) << std::endl;
        std::cout << "1)  Errore Assoluto = " << Taylor(ValueOfN[i], (double) -0.5) - exp((double) -0.5) << " | Errore Relativo = " << (Taylor(ValueOfN[i], (double) -0.5) - exp((double) 0.5)) / exp((double) -0.5) << std::endl;
        std::cout << "2)  Errore Assoluto = " << Taylor(ValueOfN[i], (double) -30) - exp((double) -30) << " | Errore Relativo = " << (Taylor(ValueOfN[i], (double) -30) - exp((double) 30)) / exp((double) -30) << std::endl;
        std::cout << std::endl;
    }
    std::cout << "\n******\n" << std::endl;
    std::cout << "\n\nAlgoritmo 2: " << std::endl;
    for (unsigned int i=0; i<N_count; i++){
        std::cout << "1)  N = " << ValueOfN[i] << " - x = 0.5 | Taylor(N, -x) = " << Taylor(ValueOfN[i], (double)-0.5) << " | 1/(Taylor(N, x)) = " << 1 / Taylor(ValueOfN[i], (double)0.5) << std::endl;
        std::cout << "2)  N = " << ValueOfN[i] << " - x = 30 | Taylor(N, -x) = " << Taylor(ValueOfN[i], (double)-30) << " | 1/(Taylor(N, x)) = " << 1 / Taylor(ValueOfN[i], (double)30) << std::endl;
        std::cout << "1)  Errore Assoluto = " << 1/Taylor(ValueOfN[i], (double) 0.5) - exp((double) -0.5) << " | Errore Relativo = " << (1/Taylor(ValueOfN[i], (double) 0.5) - exp((double) 0.5)) / exp((double) -0.5) << std::endl;
        std::cout << "2)  Errore Assoluto = " << 1/Taylor(ValueOfN[i], (double) 30) - exp((double) -30) << " | Errore Relativo = " << (1/Taylor(ValueOfN[i], (double) 30) - exp((double) 30)) / exp((double) -30) << std::endl;
        std::cout << std::endl;
    }
}

/*
* Funzione che ti restituisce la il "polinomio di Taylor"
*/
double Taylor(int N, double x){

    double returnValue = 0;
    for(int i=0; i<=N; i++)
        returnValue += (std::pow(x, i) / factorial(i));
    return returnValue;
}

/*
* Funzione che ritorna il fattoriale di un numero
*/
double factorial(int x){
    return (x == 0) ? 1 : x * factorial(x - 1);
}

/*
* Funzione che restituisce il numero esp, cioè la precisione di macchiana per un float
*/
float espFloat(){
    int d = 1000000; //Valore scelto con un po' di prove, con questo valore si riesce ad ottenere la precisione di macchina
                     //Se avessi messo il numero piu grande rappresentabile con un intero (32 bit) ci metterebbe troppo ad eseguire i cicli
    float returnValue = std::pow(2, -d) + 1;

    while(returnValue <= 1){
        d--;
        returnValue = std::pow(2, -d) + 1;
    }

    return returnValue - 1;
}

/*
* Funzione che restituisce il numero esp, cioè la precisione di macchiana per un double
*/
double espDouble(){
    int d = 1000000; //Valore scelto con un po' di prove, con questo valore si riesce ad ottenere la precisione di macchina
                     //Se avessi messo il numero piu grande rappresentabile con un intero (32 bit) ci metterebbe troppo ad eseguire i cicli
    double returnValue = std::pow(2, -d) + 1;

    while(returnValue <= 1){
        d--;
        returnValue = std::pow(2, -d) + 1;
    }

    return returnValue - 1;
}