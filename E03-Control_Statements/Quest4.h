/*
4. Os códigos ASCII2
de 0 a 31 representam os caracteres de controle e os códigos de 32 a 127 os
caracteres imprimíveis. Desenvolva um programa chamado Ascii para gerar uma saída apenas dos
caracteres com código de 128 a 255, chamados de ASCII Estendido. Use a interface da classe
abaixo para implementá-lo.
*/

// Interface da classe Ascii.
#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <clocale>

using namespace std;

class Ascii {
    
public:
    Ascii() = default;

    /* Exibe no console os caracteres estendidos do código ASCII segundo o código e o nome fornecidos.
    Retorna true se o código da página (codePage) é válido e false se não for.
    */
    bool ascii(string codePageName, unsigned codePage);
};
