/*
5. Desenvolva um programa que leia um número arábico inteiro, positivo, maior ou igual a 1 e menor
ou igual a 3.999; e converta esse número para sua representação em romano. Por exemplo, se o
usuário digitar o número 546 o programa deverá exibir o seguinte número romano DXLVI. O
programa deve ser finalizado quando usuário digitar zero. Considere a seguinte tabela para
elaborar o programa:
Algarismo Romano Número Arábico
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
As regras para escrever um número romano são as seguintes:
i. Os números romanos I, X, C, M podem ser repetidos até três vezes, no máximo, assim:
I = 1 II = 2 III = 3
X = 10 XX = 20 XXX = 30
C = 100 CC = 200 CCC = 300
M = 1000 MM = 2000 MMM = 3000
5 / 10
ii. Os números 4, 40 e 400 são obtidos através da junção dos números romanos I, X, C com os
números V, L, D, respectivamente:
IV = 4 XL = 40 CD = 400
iii. Os números 9, 90 e 900 são obtidos através da junção dos números romanos I, X, C com os
números X, C, M, respectivamente:
IX = 9 XC = 90 CM = 900
Atenção: Use a interface da classe abaixo para desenvolver esse programa chamado
ConverterNumeroArabicoParaRomano com as seguintes funções:
1. ler o número arábico inteiro e positivo;
2. criar o objeto NumeroRomano;
3. invocar os métodos da classe desse objeto;
4. exibir o resultado do número arábico convertido para romano.
*/

// Interface da classe NumeroRomano.
#pragma once

#include <string>

using namespace std;

/*
Representa um objeto imutável com o valor de um número inteiro positivo usando os algarismos arábicos
e romanos.
*/
class NumeroRomano {

private:
    string numeroRomano;
    unsigned int numeroArabico;

public:
    // Inicia os atributos do objeto NumeroRomano com os valores do número arábico e romano.
    NumeroRomano(unsigned int numeroArabico);

    // Retorna o valor do número romano.
    string getNumeroRomano();

    // Retorna o valor do número arábico.
    unsigned int getNumeroArabico();
    
    /* Retorna uma string usando o formato NúmeroArábico -> NúmeroRomano
    Exemplos:
    27 -> XXVII
    150 -> CL
    */
    string toString();
    
    // Converte o número arábico para romano.
    string converterArabicoParaRomano(unsigned int numeroArabico);

    // Converte o número romano para arábico.
    unsigned int converterRomanoParaArabico(string numeroRomano);
};