#include <iostream>
#include <string> // ���������� �++ ��� ������ �� ��������
#include <cassert> // ���������� �++ ��� ����������� ���������� ������ � ���������(��� ������� assert)
#include "Reptiles.h" // ����������� ������������� ����� ������

Reptiles::Reptiles()
{
	Title = "��������������";
	Length = 1;
	Weight = 1;
	Age = 1;
	Diet = "������ ��������";
	Area = "�������";
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
	std::string s = "���: " + Title + "  �����: " + std::to_string(Length) + "  ���: " + std::to_string(Weight) + "  �������: " + std::to_string(Age) + "  ������ �������: " + Diet + "  ����� ��������: " + Area; // ������� � ������ ���������/������� � ������ �����������
	return s; // ���������� �������
}

void Reptiles::sleep() const
{
	cout << "����.";
}

Snakes::Snakes()
{
	set_title("����");
	set_length(1);
	set_weight(1);
	set_age(1);
	set_diet("������ ��������");
	set_area("�������");
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
	std::string s = "���: " + get_title() + "  �����: " + std::to_string(get_length()) + "  ���: " + std::to_string(get_weight()) + "  �������: " + std::to_string(get_age()) + "  ������ �������: " + get_diet() + "  ����� ��������: " + get_area() + " ��:" + std::to_string(get_venom()) + " ������ ����� �����:" + std::to_string(get_night_life()); // ������� � ������
	return s; // ���������� �������
}

Turtles::Turtles()
{
	set_title("��������");
	set_length(1);
	set_weight(1);
	set_age(1);
	set_diet("��������, ���������");
	set_area("�������");
	Shell = "����������� �����,�������";
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
	std::string s = "���: " + get_title() + "  �����: " + std::to_string(get_length()) + "  ���: " + std::to_string(get_weight()) + "  �������: " + std::to_string(get_age()) + "  ������ �������: " + get_diet() + "  ����� ��������: " + get_area() + " �������: " + Shell; // ������� � ������
	return s; // ���������� �������
}