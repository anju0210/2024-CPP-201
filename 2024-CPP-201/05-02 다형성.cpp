#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age)
		: name(name), age(age) {
		cout << "이름 " << name << endl; 
		cout << "나이 " << age << endl;
	}
	void bark() {
		cout << "짖는다" << endl;
	}

	void sleep() {
		cout << "잘 잔다" << endl;
	}

	void eat() {
		cout << "잘 먹는다" << endl;
	}

private:
	string name;
	unsigned int age;
};

class Human : public Animal {
public:

private:
	bool right;
};

void main(void) {
	Animal* ani = new Animal("정민", 18);
	ani->bark();
	ani->sleep();
	ani->eat();

	delete ani;
}