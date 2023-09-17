#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
#include <cstring>

#include "Quest5.h"


using namespace std;

// Inicia os atributos do objeto NumeroRomano com os valores do número arábico e romano.
NumeroRomano::NumeroRomano (unsigned int numeroArabico){
    this->numeroArabico = numeroArabico;
    this->numeroRomano = converterArabicoParaRomano(numeroArabico);
}

// Retorna o valor do número romano.
string NumeroRomano::getNumeroRomano(){
    return this->numeroRomano;
}

// Retorna o valor do número arábico.
unsigned int NumeroRomano::getNumeroArabico(){
    return numeroArabico;
}

/* Retorna uma string usando o formato NúmeroArábico -> NúmeroRomano
Exemplos:
27 -> XXVII
150 -> CL
*/
string NumeroRomano::toString(){
    return to_string(this->numeroArabico) + "-> " + this->numeroRomano;
}
   
// Converte o número arábico para romano.
string NumeroRomano::converterArabicoParaRomano(unsigned int numeroArabico) {
    const unsigned arabicos[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string resultado = "";

    for (int i = 0; i < 13; i++) {
        while (numeroArabico >= arabicos[i]) {
            resultado += romanos[i];
            numeroArabico -= arabicos[i];
        }
    }

    return resultado;
}


// Implementação da função que converte número romano para arábico
unsigned int NumeroRomano::converterRomanoParaArabico(string numeroRomano) {
    int resultado = 0;
    int valorAnterior = 0;

    const map<char, int> algarismos = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    for (int i = numeroRomano.length() - 1; i >= 0; i--) {
        char caractereCorrente = numeroRomano[i];

        if (algarismos.find(caractereCorrente) != algarismos.end()) {
            int valorCorrente = algarismos.at(caractereCorrente);

            if (valorCorrente < valorAnterior) {
                resultado -= valorCorrente;
            } else {
                resultado += valorCorrente;
            }

            valorAnterior = valorCorrente;
        } else {
            cout << "Número romano inválido" << endl;
            return 0; // Número romano inválido, retornamos 0
        }
    }

    return resultado;
}

// Função de teste
char testeConvert(){
    int numArab;
    std::string numRom;


    NumeroRomano conversao(numArab);

    while (numRom != "0" || numArab != 0) {
        std::cout << "Digite o numero Romano: ";
        std::cin >> numRom;
        cout << "Digite o numero Arabico: ";
        cin >> numArab;

        cout << "O valor de " << numRom << " é " << conversao.converterRomanoParaArabico(numRom) << endl;
        cout << "O valor de " << numArab << " é " << conversao.converterArabicoParaRomano(numArab) << endl;
    }

    return EXIT_SUCCESS;
}

int main(){
    return testeConvert();
}