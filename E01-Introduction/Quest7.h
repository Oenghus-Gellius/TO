/*
Escreva um programa que leia um número inteiro positivo de no máximo quatro dígitos do sistema
hexadecimal (base 16) e converta-o para o sistema binário (base 2) usando somente os operadores
bit a bit do C++.
*/

#pragma once  // Evitar que arquivos de cabeçalho sejam incluídos mais de uma vez.

#include <cstdlib>
#include <string>

using namespace std;

class ConvertorHexadecimal{
    private:
    string _hexadecimal = "";
    int _decimal = 0;

    public:
    //construtor
    ConvertorHexadecimal (int numDec);

    //destrutor
    ~ConvertorHexadecimal ();

    //recebe o numero decimal
    int setNumDecimal (int numDec);

    //converte para hexadecimal
    void convertHex ();

    //resultado da conversão para hexadecimal
    void getHex ();
};