#include<iostream>

using namespace std;

enum FoodStyle {
    KOREAN,  // 0
    JAPANESE, // 1
    CHINESE   // 2
};

int main(void) {
    FoodStyle style = FoodStyle::KOREAN;  // enum ���� ����Ͽ� �ʱ�ȭ

    switch (style) {
    case FoodStyle::KOREAN:
        cout << "�ѽ�" << endl;
        break;
    case FoodStyle::JAPANESE:
        cout << "�Ͻ�" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "�߽�" << endl;
        break;
    }

    return 0;
}
