#include <iostream>
#include <string>
#include <cstdlib>
#include <clocale>

#include "Quest2.h"

using namespace std;

    //construtor defaut
    Pixel::Pixel ()=default;

    //construtor sobrecarregado
    Pixel::Pixel  (int x, int y)
    {
        setX(x);
        setY(y);
    }

    //Destrutor
    Pixel::~Pixel(){
        cout << "Teste destruido!!!!" << endl;
    }

    //metodo para alterar a coordenada de x
    void Pixel::setX(int x){
        this->_x = x;
    }

    //metodo para alterar a coordenada de x
    void Pixel::setY(int y){
        this->_y = y;
    }

    //metodo que vai receber a coordenada  X
    int Pixel::getX(){
        return _x;
    }

    //metodo que vai receber a coordenada  Y
    int Pixel::getY(){
        return _y;
    }

    //metodo que retornara uma string com a representação das coordenadas X e Y;
    string Pixel::toStringCoorXandY(){
        return "Ponto(x,y)(" + to_string(_x) + "," + to_string(_y) + ")";
    }

    int testCoordenadas(){
        setlocale(LC_ALL, "pt-BR");
        int x;
        int y;

        cout << "Insira o valor da coordenada x.: " << endl;
        cin >> x;
        cout << "Insira o valor da coordenada y.: " << endl;
        cin >> y;

        Pixel coordenadas (x, y);

        cout << coordenadas.toStringCoorXandY() << endl;

        return EXIT_SUCCESS;
    }//testa a classe Pixel

    int main(){
        
        return testCoordenadas();
    }