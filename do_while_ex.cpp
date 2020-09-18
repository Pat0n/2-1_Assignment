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
		cout << "1 ~ 100 사이의 값을 입력해주세요 : ";
		cin >> val;
		if (val == rand_val) {
			cout << "정답입니다!" << endl;
			is_val = false;
		}
		else {
			if (val < rand_val)
				cout << "정답은 " << val << "보다 큽니다." << endl;
			else
				cout << "정답은 " << val << "보다 작습니다." << endl;
			is_val = true;
			count++;
		}
	} while (is_val);
	cout << "총 " << count + 1 << "번만에 맞췄습니다.";

	return 0;
}