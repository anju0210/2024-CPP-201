﻿#include <iostream>
#include <string>
using namespace std;

// 클래스는 default가 private
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 반환형이 없다
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}

	// 생성자 오버로딩
	Student() {
		hakbun_ = 21;
		name_ = "JWP";
	}

private :
	int hakbun_;
	string name_;

};

void main(void) {
	// 매개변수가 없는 생성자를 호출
	// Student juyoung = Student();
	Student juyoung = Student(2115, "윤주영");
	Student jwp = Student();

}