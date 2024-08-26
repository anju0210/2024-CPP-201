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
	virtual void bark() {
		cout << "짖는다" << endl;
	}

	virtual void sleep() {
		cout << "잘 잔다" << endl;
	}

	virtual void eat() {
		cout << "잘 먹는다" << endl;
	}

private:
	string name;
	unsigned int age;
};

class Human : public Animal {
public:
	Human(string name, unsigned int age, bool right)
		: Animal(name, age), right(right)
	{
		cout << "인권존재여부" << right << endl;
	}

	// TODO : 정적 바인딩을 동적바인딩으로 고치기
	
	void bark() override {
		cout << "톡톡" << endl;
	}

	void sleep() override {
		cout << "쿨쿨" << endl;
	}

	void eat() override {
		cout << "냠냠" << endl;
	}
private:
	bool right;
};

void main(void) {
	Animal* ani = new Animal("정민", 18);
	ani->bark();
	ani->sleep();
	ani->eat();

	// ani의 자료형은 Animal*
	ani = new Human("지혜", 18, true);
	// 정적 바인딩으로 인해 Animal의 멤버함수가 호출된다
	ani->bark();
	ani->sleep();
	ani->eat();

	delete ani;
}