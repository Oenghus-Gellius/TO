#include <iostream>
#include <string>
#include <cstdlib>
#include <clocale>
#include <cmath>

#include "Quest3.h"

Hexadecimal::Hexadecimal(string base16){
    setNumero(base16);
}

// Define o valor do número hexadecimal (base 16).
void Hexadecimal::setNumero (string numero){
    this->numero = numero;
}

// Obtém o número em hexadecimal (base 16).
string Hexadecimal::hexadecimal(){
    return numero;
}

// Obtém o número em decimal (base 10). O número decimal é calculado usando a fórmula acima.
unsigned int Hexadecimal::decimal(){
    unsigned int decimalValue = 0;
    int n = numero.size();
    
    for (int i = 0; i < n; i++) {
        char digit = numero[i];
        int digitValue;
        
        if (isdigit(digit)) {
            digitValue = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            digitValue = 10 + (digit - 'A');
        } else if (digit >= 'a' && digit <= 'f') {
            digitValue = 10 + (digit - 'a');
        } else {
            // Tratamento de erro para dígitos inválidos.
            throw invalid_argument("Dígito hexadecimal inválido: " + string(1, digit));
        }
        
        decimalValue = decimalValue + digitValue * static_cast<unsigned int>(pow(16, n - i - 1));
    }
    return decimalValue;
}


int testeConvert(){
    setlocale(LC_ALL, "pt-BR");
    string num16;

    Hexadecimal convertN1 (num16);
    cout << "Digite um numero Hexadecimal.:";
    cin >> num16;

     convertN1.setNumero (num16);

     cout << "O " << convertN1.hexadecimal() << "é representado na base 10 por " << convertN1.decimal() << endl;

    return EXIT_SUCCESS;
}

int main(){

    return testeConvert();
}