#include "function.h"

void esercizio_1(){
    
    double b = (d1 + 1) * std::pow(10, 20);
    double c = b * (-1);
    double a;
    
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
        std::cout << "opzione scelta: " << opzione << std::endl;
        std::cin >> opzione;
    }

    int precision = 1;
    switch (opzione){

        case 1: std::cout << "Inserisci con che precisione si vogliono visualizzare i numeri,\nse viene inserita una precisione non supportata verrà scelta la\nprecisione di default (default: 5, min: 3, max: 15)" << std::endl;
                std::cout << "Inserisci un'opzione:";
                std::cin >> precision;
                if (precision < 3 || precision > 15)
                    precision = 5;
                std::cout << std::fixed;
                break;

        case 2: std::cout << std::scientific;
                break;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    for (unsigned int i=0; i<=6; i++){
        a = (d0 + 1) * (double)std::pow(10, i);
        
        std::cout << "****** Giro con -> i = " << i << std::endl;
        std::cout << "Valore di a = " << a << std::endl;
        std::cout << "Valore di b = " << b << std::endl;
        std::cout << "valore di c = " << c << std::endl;
        std::cout << std::endl;
        std::cout << std::setprecision(precision) << "(a + b) + c  = " << "(" << a << " + " << b << ")" <<  " + " << c << " = " << (a + b) + c <<std::endl;
        std::cout << std::setprecision(precision) << "a + (b + c)  = " << a << " + " << "(" << b << " + " << c << ") = " << a + (b + c) <<std::endl;
        std::cout << std::endl;
    }
    
}