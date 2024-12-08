// Высоцкая И.Д.
#include <iostream> // библиотека С++, отвечающая за чтение и запись(для функций cin - функция чтения, cout - функция вывода)
#include <clocale> // библиотека С++, отвечающая за локализацию, нужна для подключения русского языка
#include "Reptiles.h" // подключение заголовочного файла модуля

using namespace std; // используем пространство имен std для того, чтобы не писать перед функциями cin, cout "std"

/// Шаблон функции вывода на экран
template<typename clas>
void print_string(const clas& Being)
{
    cout << Being.to_string() << "\n\n"; // вывод на экран
}

int main()
{
    setlocale(LC_ALL, "rus"); // задание локализации для русского языка
    Reptiles rep;
    print_string<Reptiles>(rep);
    Snakes Snake;
    print_string<Snakes>(Snake);
    Turtles Turtle;
    print_string<Turtles>(Turtle);

    Reptiles* reptile = new Snakes; // создание объекта Snakes как Reptiles
    cout << reptile->to_string() << "\n\n"; // вызов переопределённого метода
    reptile->sleep(); cout << "\n\n"; // вызов метода из базового класса
    dynamic_cast<Snakes*>(reptile)->sleep(); cout << "\n\n"; // вызов метода из производного класса
    cout << dynamic_cast<Snakes*>(reptile)->get_venom(); // вызов метода, которого нет в базовом классе
}