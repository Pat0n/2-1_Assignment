#include <iostream>
using namespace std;

int main() {
	int i, num;
	int c = 0;
	int num_arr[10]{ NULL, };

	cout << "���ϰ��� �ϴ� ����� �Է����ּ��� : ";
	cin >> num;

	for (i = 0; i < 10; i++) {
		cout << "���� �Է����ּ��� : ";
		cin >> num_arr[i];

		if (num_arr[i] % num)
			num_arr[i] = 0;
		else
			c++;
	}

	cout << endl << num << "�� ����� ���� �� " << c << "�� �Դϴ�. [ ";
	for (i = 0; i < 10; i++) {
		if (num_arr[i])
			cout << num_arr[i] << " ";
	}
	cout << "]" << endl;

	return 0;
}