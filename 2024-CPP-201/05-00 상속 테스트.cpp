#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(int n, string name)
	{
		cout << this->n << this->name << endl;
	}
private:
	int n = 3;
	string name = "±ט";
};
int main() {
	Student stu = Student(11, "ÀÌ");
}