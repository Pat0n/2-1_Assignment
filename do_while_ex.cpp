#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int rand_val, val;
	int count = 0;
	bool is_val;

	srand(time(NULL));
	rand_val = rand() % 100 + 1;

	do {
		cout << "1 ~ 100 ������ ���� �Է����ּ��� : ";
		cin >> val;
		if (val == rand_val) {
			cout << "�����Դϴ�!" << endl;
			is_val = false;
		}
		else {
			if (val < rand_val)
				cout << "������ " << val << "���� Ů�ϴ�." << endl;
			else
				cout << "������ " << val << "���� �۽��ϴ�." << endl;
			is_val = true;
			count++;
		}
	} while (is_val);
	cout << "�� " << count + 1 << "������ ������ϴ�.";

	return 0;
}