#include <iostream>
using namespace std;

int main() {
	int num1, num2, num3, val;
	
	cout << "3���� ���� �Է��ϼ��� : ";
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
	cout << "2��°�� ū ���� " << val << " �Դϴ�.";

	return 0;
}