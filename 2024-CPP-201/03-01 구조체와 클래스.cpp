#include <iostream>
#include <string>
using namespace std;

// 클래스는 default가 private
class Student {
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 반환형이 없다
public:
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}

private :
	int hakbun_;
	string name_;

};

void main(void) {
	// 매개변수가 없는 생성자를 호출
	// Student juyoung = Student();
	Student juyoung = Student(2115, "윤주영");

}