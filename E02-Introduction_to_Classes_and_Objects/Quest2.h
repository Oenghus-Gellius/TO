/*
2. Defina uma classe chamada Pixel para armazenar os valores positivos das 
coordenadas x e y de umpixel (ponto) da tela do monitor de vídeo. 
Use o tipo de dado unsigned int para representar as coordenadas do pixel, 
use o encapsulamento (ocultamento de informações) e inclua na classe:
a) dois construtores: o default e um sobrecarregado que recebe as coordenadas x e y do ponto;
b) um método que obtém a coordenada x (getX) e outro que obtém a coordenada y (getY);
c) um método para modificar o valor da coordenada x (setX) e outro para alterar o valor da
coordenada y (setY).
d) um método chamado toString para retornar a representação string das coordenadas x e y do
ponto usando o formato P(x,y).
*/

#pragma once  // Evitar que arquivos de cabeçalho sejam incluídos mais de uma vez.

#include <string>

using namespace std;

class Pixel{

    private:
        //coordenadas latitudinais
        unsigned int _x = 0;
        //coordenadas longitudinais
        unsigned int _y = 0;

    public:

        //construtor defaut
        Pixel ();

        //construtor sobrecarregado
        Pixel  (int x, int y);

        //Destrutor
        ~Pixel();

       //metodo para alterar a coordenada de x
        void setX(int x);

        //metodo para alterar a coordenada de x
        void setY(int y);

        //metodo que vai receber a coordenada  X
        int getX();

        //metodo que vai receber a coordenada  Y
        int getY();

         //metodo que retornara uma string com a representação das 
         //coordenadas X e Y;
        string toStringCoorXandY();

};//fim classe

