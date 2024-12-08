#pragma once
#include <string>

using namespace std;

class Reptiles {
private:
	string Title;
	float Length;
	float Weight;
	int Age;
	string Diet;
	string Area;
public:

	Reptiles();

	Reptiles(string title, float length, float weight, int age, string diet, string area);

	void set_title(string title);
	void set_length(float length);
	void set_weight(float weight);
	void set_age(int age);
	void set_diet(string diet);
	void set_area(string area);

	string get_title() const;
	float get_length() const;
	float get_weight() const;
	int get_age() const;
	string get_diet() const;
	string get_area() const;

	virtual string to_string() const;

	void sleep() const;
};

class Snakes :public Reptiles
{
private:
	bool Venom;
	bool Night_life;
public:

	Snakes();

	Snakes(string title, float length, float weight, int age, string diet, string area, bool venom, bool night_life);

	void set_venom(bool venom);
	void set_night_life(bool night_life);

	bool get_venom() const;
	bool get_night_life() const;

	string to_string() const override;
};

class Turtles :public Reptiles
{
private:
	string Shell;
public:
	Turtles();

	Turtles(string title, float length, float weight, int age, string diet, string area, string shell);

	void set_shell(string shell);

	string get_shell() const;

	string to_string() const override;
};