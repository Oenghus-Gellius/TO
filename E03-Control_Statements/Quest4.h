/*
4. Os códigos ASCII2
de 0 a 31 representam os caracteres de controle e os códigos de 32 a 127 os
caracteres imprimíveis. Desenvolva um programa chamado Ascii para gerar uma saída apenas dos
caracteres com código de 128 a 255, chamados de ASCII Estendido. Use a interface da classe
abaixo para implementá-lo.
*/

#pragma once

#include <string>

using namespace std;


class Hexadecimal {
    private:
        string numero;
    public:
        Hexadecimal() = default;
        Hexadecimal(string base16);

        // Define o valor do número hexadecimal (base 16).
        void setNumero (string numero);

        // Obtém o número em hexadecimal (base 16).
        string hexadecimal();
        
        // Obtém o número em decimal (base 10). O número decimal é calculado usando a fórmula acima.
        unsigned int decimal();
};