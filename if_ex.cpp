#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, val;
	
	cout << "3개의 값을 입력하세요 : ";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
		if (num1 > num3) {
			if (num2 > num3)
				val = num2;
			else
				val = num3;
		}
		else
			val = num1;
	}
	else {
		if (num2 > num3) {
			if (num1 > num3)
				val = num1;
			else
				val = num3;
		}
		else
			val = num2;
	}
	cout << "2번째로 큰 값은 " << val << " 입니다.";

	return 0;
}