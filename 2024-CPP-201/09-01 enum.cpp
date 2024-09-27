#include<iostream>

using namespace std;

enum FoodStyle {
    KOREAN,  // 0
    JAPANESE, // 1
    CHINESE   // 2
};

int main(void) {
    int style = FoodStyle::KOREAN;  // enum 값을 사용하여 초기화

    switch (style) {
    case FoodStyle::KOREAN:
        cout << "한식" << endl;
        break;
    case FoodStyle::JAPANESE:
        cout << "일식" << endl;
        break;
    case FoodStyle::CHINESE:
        cout << "중식" << endl;
        break;
    }

    return 0;
}
