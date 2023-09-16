/*
Escreva um programa que leia um número inteiro positivo de no máximo cinco dígitos do sistema
decimal (base 10) e converta para o sistema binário (base 2) usando somente os operadores bit a
bit do C++.
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class ConvertorBinario{
private:
    int _numDecimal = 0;
    int _numBinario = 0;

public:
    //construtor sobreacarregado
    ConvertorBinario(int numDec);

    void convertBinario ();

    void setResultado ();
    
    //destrutor
    ~ConvertorBinario();
};//class convert para Binario

ConvertorBinario::ConvertorBinario(int numDec)
{
    if (numDec < 0 || numDec >99999)
    {
        cout << "Mumero invalido" << endl;
    }
    else
    {
        this->_numDecimal = numDec;
        convertBinario();
    }
}

void ConvertorBinario::convertBinario (){
    int temp = _numDecimal;
    int base = 1;
    int digito = 0;

    while (temp > 0)
    {
        digito = temp%2;
        _numBinario = _numBinario + digito * base;
        temp = temp/2;
        base = base * 10;
    }
    _numBinario = _numBinario;
}

void ConvertorBinario::setResultado (){
    cout << "O numero " << _numDecimal << " na base binaria é" << _numBinario << endl;
}

ConvertorBinario::~ConvertorBinario(){
    cout << "programa destruido com sucesso!!!";
}

int main(){
    int numDec;
    cout << "\nDigite um numero interio positivo (no maximo cinco digito).:" << endl;
    cin >> numDec;

    //construindo o objeto
    ConvertorBinario convertor (numDec);

    convertor.setResultado();

    return 0;
}