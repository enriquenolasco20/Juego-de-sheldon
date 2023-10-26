#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <random>
#include <chrono>
#include <string>
#include <sstream>
#include "juego.h"
    /* 1.-piedra
     * 2.-papel
     * 3.-tijera
     * 4.-lagarto
     * 5.-spock */
using namespace std;
int main(int argc, char *argv[])
{
    int valorelemento{1},contadorusuario{0},contadormaquina{0};
    juego maquina{1};   //se crean dos objetos iguales, unos era la maquina y otro el usuario.
    juego usuario{2};

    QCoreApplication a(argc, argv);
    qInfo()<<"Hola este es el programa para jugar Piedra,Papel,Tijera,Lagarto,Spock\n\n";
    qInfo()<<"Reglas\nLas tijeras cortan el papel, "
               "el papel envuelve la piedra, la piedra aplasta "
               "al lagarto, el lagarto envenena a Spock, Spock aplasta las tijeras, "
               "las tijeras decapitan al lagarto, el lagarto devora el papel, "
               "el papel desaprueba a Spock, Spock desintegra la piedra y, como "
               "siempre, la piedra aplasta las tijeras.";

    qInfo()<<"\n\t\tVaz a jugar contra la computadora, gana el mejor de 7\n\n";

    maquina.motor(); //en esta parte de la instruccion, le asignamos un numero aleatorio
                        //al objeto maquina.
    cout<<"Que escoges?\n1)Piedra\n2)Papel\n3)Tijera\n4)Lagarto\n5)Spock     :         ";
    cin>>valorelemento;
    usuario.setElemento(valorelemento);

    qInfo()<<"\n\nLa maquina selecciono la opcion:"<<maquina.getElemento();
    contadormaquina=usuario.comparar(maquina,contadorusuario,contadormaquina);

    qInfo()<<"\nLa maquina: "<<contadormaquina<<"\nTu: "<<contadorusuario;


    return a.exec();
}
