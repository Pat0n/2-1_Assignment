#include <iostream>
using namespace std;

int main() {
	int i, num;
	int c = 0;
	int num_arr[10]{ NULL, };

	cout << "구하고자 하는 배수를 입력해주세요 : ";
	cin >> num;

	for (i = 0; i < 10; i++) {
		cout << "값을 입력해주세요 : ";
		cin >> num_arr[i];

		if (num_arr[i] % num)
			num_arr[i] = 0;
		else
			c++;
	}

	cout << endl << num << "의 배수인 값은 총 " << c << "개 입니다. [ ";
	for (i = 0; i < 10; i++) {
		if (num_arr[i])
			cout << num_arr[i] << " ";
	}
	cout << "]" << endl;

	return 0;
}