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
	~Animal() {
		cout << "Animal 소멸자" << endl;
	}

	// 실체가 없으므로 순수가상함수로 처리(자식 클래스에서 구현해야 함)
	virtual void bark() = 0;
	virtual void sleep() = 0;
	virtual void eat() = 0;

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
	virtual ~Human() {
		cout << "Human 소멸자" << endl;
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
	// 추상클래스(순수가상함수가 있는)는 객체를 생성할 수 없다.
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