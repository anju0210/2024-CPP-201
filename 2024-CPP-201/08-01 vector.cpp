#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void) {
	vector<string> cy;
	
	// ��� �߰�
	cy.push_back("ä��");
	cy.push_back("����");
	cy.push_back("�켮");
	cy.push_back("����");
	cy.push_back("����");

	// ��� ����
	cout << cy[0] << "�� �۽�Ʈ : " << cy.at(1) << endl;
	cout << cy[0] << "�� ������ : " << cy.at(2) << endl;

	// ��� ����
	cy[1] = "����";

	// ��� ����(size)
	cout << "�ڡڡ� " << cy[0] << "�� ���ڵ� �ڡڡ�" << endl;
	for (int i = 1; i < cy.size(); i++)
		cout << cy[i] << endl;

	// ������ ��� ����
	cy.pop_back();
	cout << "�ڡڡ� " << cy[0] << "�� ���ڵ� �ڡڡ�" << endl;
	for (int i = 1; i < cy.size(); i++)
		cout << cy[i] << endl;

}