#include <iostream>
#include <cstdlib>

#include "Quest7.h"

using namespace std;

//construtor
ConvertorHexadecimal:: ConvertorHexadecimal (int numDec){
    this->_decimal = numDec;
}

//destrutor
ConvertorHexadecimal:: ~ConvertorHexadecimal (){
    cout << "Programa destruido com sucesso!!!" << endl;
}

//recebe o numero decimal
int ConvertorHexadecimal::setNumDecimal(int numDec){
    _decimal = numDec;
    return _decimal;
}

void ConvertorHexadecimal::convertHex() {
    int temp = _decimal;
    char digito = 0;
    _hexadecimal = ""; // Inicializa como uma string vazia

    while (temp > 0) {
        digito = temp & 0xF; // Pega o último dígito hexadecimal (4 bits)
        if (digito < 10) {
            // Se for menor que 10, converte para o dígito correspondente em ASCII
            _hexadecimal = static_cast<char>('0' + digito) + _hexadecimal;
        } else {
            // Se for maior ou igual a 10, converte para a letra correspondente (A a F)
            _hexadecimal = static_cast<char>('A' + digito - 10) + _hexadecimal;
        }
        temp >>= 4; // Desloca quatro bits para a direita no número decimal
    }
}

//resultado da conversão para hexadecimal
void ConvertorHexadecimal::getHex (){
    cout << "O número em hexadecimal é: ->" << _hexadecimal << " (decimal: ->" << _decimal << ")" << endl;
}


int main() {
    int num;

    cout << "Insira um numero decimal: " << endl;
    cin >> num;

    ConvertorHexadecimal calcular(num);

    calcular.convertHex();

    calcular.getHex();

    return EXIT_SUCCESS;
}