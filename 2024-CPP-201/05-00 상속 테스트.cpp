#include <iostream>
#include <string>
using namespace std;

class Tree {
public:
	Tree(string fruit, string name, int fruit_num)
		: fruit_(fruit), name_(name), fruit_num_(fruit_num)
	{
		cout << "ÀÌ¸§: " << fruit_ << endl;
		cout << "¿­¸Å: " << name_ << endl;
		cout << "¿­¸Å °³¼ö: " << fruit_num << endl;
	}
	void Èçµé¸®±â(int n) {
		for (int i = 0; i < n; i++)
			cout << "ÈçµéÈçµé" << endl;
	}
private:
	string fruit_;
	string name_;
	int fruit_num_;
};
class LemonTree : public Tree{
public:
	LemonTree(int fruit_num, string sour)
		: Tree("·¹¸ó", "·¹¸óÆ®¸®", fruit_num), sour_(sour)
	{
		cout << "¼Å? -> " << sour << endl;
	}
	void Èçµé¸®±â(int n) {
		for (int i = 0; i < n; i++)
			cout << "·¹¸ó "<< i+1<<"°³ ¶³¾îÁü" << endl;
	}
private:
	string sour_;
};
int main() {
	Tree tr = Tree("¹ã³ª¹«", "¹ã", 10);
	tr.Èçµé¸®±â(3);

	LemonTree ltr = LemonTree(3, "¾ÆÀÌ¼Å");
	ltr.Èçµé¸®±â(2);
}