﻿#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	// ex) name: "윤주영"
	Student(int hakbun,  char* name)
	{
		this->hakbun_ = hakbun;
		name_ = new char[18];	// 동적할당
		strcpy(name_, name);	// 동적할당된 위치에 "윤주영"(name)을 복사한다
	}

	Student(){ }


	// 소멸자 : 객체가 사라질 때(메모리 공간이 해제될 때) 호출되는 함수
	~Student() {
		delete []name_;
	}

	void print() {
		cout << hakbun_ << " " << name_ << endl;
	}

private:
	int hakbun_;
	char* name_;

};

void main(void) {

	Student* stu = new Student(2115, (char*)"윤주영");
	stu->print();

	delete stu;
}