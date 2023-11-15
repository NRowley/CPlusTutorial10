#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal();
	Animal(string Name, int Age, int Limbs);

	string name;
	int age;
	int limbs;

	void report();
};

class Dog :public Animal {
public:
	Dog();
	Dog(string Name, int Age, int Limbs);

	void Speak();
};

int main() {

	Animal animal;
	animal.report();

	Animal animal_2("Dog", 6, 4);
	//animal_2.report();

	Dog dog("Halen", 6, 4);
	dog.Speak();
	system("pause");
}

Animal::Animal() {
	cout << "Animal is born \n";
	name = "DEAFUALT";
	age = 0;
	limbs = 4;
}

Animal::Animal(string Name, int Age, int Limbs): name(Name), age(Age), limbs(Limbs) {
	cout << Name << " is born \n";
	report();
}

void Animal::report() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Limbs: " << limbs << endl;
	cout << endl;
}

Dog::Dog() {
	cout << "Dog is born" << endl;
}

Dog::Dog(string Name, int Age, int Limbs){
	Animal(Name, Age, Limbs);
}

void Dog::Speak() {
	cout << "Boof!" << endl;
}