#include <iostream>
#include <string>
using namespace std;

// 클래스는 default가 private
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 반환형이 없다
	Student(int hakbun, string name)
		: hakbun_(hakbun), name_(name)
	{
		cout << "학번이 등록되었습니다." << endl;
	}

	// 생성자 오버로딩
	Student() 
		: hakbun_(2121), name_("JWP")
	{
	}

	//객체의 멤버를 출력하는 함수
	void print() {
		cout << hakbun_ << " " << name_ << endl;
	}

private :
	int hakbun_;
	string name_;

};

void main(void) {
	// 매개변수가 없는 생성자를 호출
	// Student juyoung = Student();

	//동적할당 : heap 영역에 할당. 실행시간(run time)에 메모리 크기 결정
	Student* juyoung = new Student(2115, "윤주영");
	//정적할당 : stack 영영에 할당. 컴파일 시간에 메모리 크기 결정
	Student jwp = Student();
	(*juyoung).print();
	jwp.print();

	// 동적할달된 메모리 해제(필수)
	// 정적할당된 메모리는 중괄호가 끝나면 사라지지만 동적할당된 메모리는 남아있기 때문
	delete juyoung;

}