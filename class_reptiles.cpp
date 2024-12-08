#include <iostream>
#include <clocale> // библиотека С++, отвечающая за локализацию, нужна для подключения русского языка
#include "Reptiles.h" // подключение заголовочного файла модуля

using namespace std; // используем пространство имен std для того, чтобы не писать перед функциями cin, cout "std"

template<typename clas>
void print_string(const clas& Being)
{
    cout << Being.to_string() << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "rus");
    Reptiles rep;
    print_string<Reptiles>(rep);
    Snakes Snake;
    print_string<Snakes>(Snake);
    Turtles Turtle;
    print_string<Turtles>(Turtle);
    Reptiles* r = new Reptiles;
    Snakes* s = new Snakes;
    Reptiles* r2 = s;
    cout << r2->to_string() << "\n\n" << r->to_string();
}