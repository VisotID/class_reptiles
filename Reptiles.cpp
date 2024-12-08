#include <iostream>
#include <string> // библиотека С++ для работы со строками
#include <cassert> // библиотека С++ для обнаружения логических ошибок в программе(для функции assert)
#include "Reptiles.h" // подключение заголовочного файла модуля

Reptiles::Reptiles()
{
	Title = "Пресмыкающееся";
	Length = 1;
	Weight = 1;
	Age = 1;
	Diet = "Мелкие животные";
	Area = "Тропики";
}

Reptiles::Reptiles(string title, float length, float weight, int age, string diet, string area)
{
	set_title(title);
	set_length(length);
	set_weight(weight);
	set_age(age);
	set_diet(diet);
	set_area(area);
}

void Reptiles::set_title(string title)
{
	Title = title;
}

void Reptiles::set_length(float length)
{
	Length = length;
}

void Reptiles::set_weight(float weight)
{
	Weight = weight;
}

void Reptiles::set_age(int age)
{
	Age = age;
}

void Reptiles::set_diet(string diet)
{
	Diet = diet;
}

void Reptiles::set_area(string area)
{
	Area = area;
}

string Reptiles::get_title() const
{
	return Title;
}

float Reptiles::get_length() const
{
	return Length;
}

float Reptiles::get_weight() const
{
	return Weight;
}

int Reptiles::get_age() const
{
	return Age;
}

string Reptiles::get_diet() const
{
	return Diet;
}

string Reptiles::get_area() const
{
	return Area;
}

std::string Reptiles::to_string() const
{
	std::string s = "Вид: " + Title + "  Длина: " + std::to_string(Length) + "  Вес: " + std::to_string(Weight) + "  Возраст: " + std::to_string(Age) + "  Рацион питания: " + Diet + "  Ареал обитания: " + Area; // перевод в строку числителя/перевод в строку знаменателя
	return s; // возвращаем строчку
}

void Reptiles::sleep() const
{
	cout << "Спит.";
}

Snakes::Snakes()
{
	set_title("Змея");
	set_length(1);
	set_weight(1);
	set_age(1);
	set_diet("Мелкие животные");
	set_area("Тропики");
	Venom = 1;
	Night_life = 1;
}

Snakes::Snakes(string title, float length, float weight, int age, string diet, string area, bool venom, bool night_life)
{
	set_title(title);
	set_length(length);
	set_weight(weight);
	set_age(age);
	set_diet(diet);
	set_area(area);
	set_venom(venom);
	set_night_life(night_life);
}

void Snakes::set_venom(bool venom)
{
	Venom = venom;
}

void Snakes::set_night_life(bool night_life)
{
	Night_life = night_life;
}

bool Snakes::get_venom() const
{
	return Venom;
}

bool Snakes::get_night_life() const
{
	return Night_life;
}

std::string Snakes::to_string() const
{
	std::string s = "Вид: " + get_title() + "  Длина: " + std::to_string(get_length()) + "  Вес: " + std::to_string(get_weight()) + "  Возраст: " + std::to_string(get_age()) + "  Рацион питания: " + get_diet() + "  Ареал обитания: " + get_area() + " Яд:" + std::to_string(get_venom()) + " Ночной образ жизни:" + std::to_string(get_night_life()); // перевод в строку
	return s; // возвращаем строчку
}

Turtles::Turtles()
{
	set_title("Черепаха");
	set_length(1);
	set_weight(1);
	set_age(1);
	set_diet("Растения, насекомые");
	set_area("Тропики");
	Shell = "Коричневого цвета,гладкий";
}

Turtles::Turtles(string title, float length, float weight, int age, string diet, string area, string shell)
{
	set_title(title);
	set_length(length);
	set_weight(weight);
	set_age(age);
	set_diet(diet);
	set_area(area);
	set_shell(shell);
}

void Turtles::set_shell(string shell)
{
	Shell = shell;
}

string Turtles::get_shell() const
{
	return Shell;
}

std::string Turtles::to_string() const
{
	std::string s = "Вид: " + get_title() + "  Длина: " + std::to_string(get_length()) + "  Вес: " + std::to_string(get_weight()) + "  Возраст: " + std::to_string(get_age()) + "  Рацион питания: " + get_diet() + "  Ареал обитания: " + get_area() + " Панцирь: " + Shell; // перевод в строку
	return s; // возвращаем строчку
}