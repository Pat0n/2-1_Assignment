#include <iostream>
using namespace std;

int main() {
	int max, i, j;
	
	cout << "0 이상 9 이하의 값을 입력하세요 : ";
	cin >> max;

	if (max < 0 || max > 9) {
		cout << "입력 가능한 값이 아닙니다.";
		return 0;
	}

	for (i = 0; i < max + 1; i++) {
		for (j = max - i; j > 0; j--)
			cout << " ";
		if (i % 2) {
			for (j = i; j > 0; j--)
				cout << i - j + 1 << " ";
		}
		else {
			for (j = 0; j < i; j++)
				cout << i - j << " ";
		}
		cout << endl;
	}

	return 0;
}