#include <iostream>
#include <string>
using namespace std;

class Tree {
public:
	Tree(string fruit, string name, int fruit_num)
		: fruit_(fruit), name_(name), fruit_num_(fruit_num)
	{
		cout << "�̸�: " << fruit_ << endl;
		cout << "����: " << name_ << endl;
		cout << "���� ����: " << fruit_num << endl;
	}
	void ��鸮��(int n) {
		for (int i = 0; i < n; i++)
			cout << "������" << endl;
	}
private:
	string fruit_;
	string name_;
	int fruit_num_;
};
class LemonTree : public Tree{
public:
	LemonTree(int fruit_num, string sour)
		: Tree("����", "����Ʈ��", fruit_num), sour_(sour)
	{
		cout << "��? -> " << sour << endl;
	}
	void ��鸮��(int n) {
		for (int i = 0; i < n; i++)
			cout << "���� "<< i+1<<"�� ������" << endl;
	}
private:
	string sour_;
};
int main() {
	Tree tr = Tree("�㳪��", "��", 10);
	tr.��鸮��(3);

	LemonTree ltr = LemonTree(3, "���̼�");
	ltr.��鸮��(2);
}