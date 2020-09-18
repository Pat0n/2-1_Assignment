#include <iostream>
using namespace std;

void print_arr(string sub, int num_arr[3][4]) {
	cout << "     " << sub << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 4; j++)
			cout << num_arr[i][j] << '\t';
		cout << endl << endl;
	}
}

int main() {
	int i, j, tmp;
	int num_arr[3][4];
	int sort_arr[9];

	for (i = 0; i < 3; i++) {
		cout << i + 1 << "번째 줄에 곱할 값을 입력하세요 : ";
		cin >> num_arr[i][0];
		cout << i + 1 << "번째 줄에 입력할 값을 3개 입력하세요 : ";
		for (j = 1; j < 4; j++)
			cin >> num_arr[i][j];
	}
	cout << endl;
	print_arr("<원본값>", num_arr);

	for (i = 0; i < 3; i++) {
		for (j = 1; j < 4; j++) {
			num_arr[i][j] *= num_arr[i][0];
			sort_arr[4 * i + j - (i + 1)] = num_arr[i][j];
		}
	}
	print_arr("<계산값>", num_arr);

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8 - i; j++) {
			if (sort_arr[j] > sort_arr[j + 1]) {
				tmp = sort_arr[j];
				sort_arr[j] = sort_arr[j + 1];
				sort_arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 1; j < 4; j++)
			num_arr[i][j] = sort_arr[4 * i + j - (i + 1)];
	}
	print_arr("<정렬값>", num_arr);

	return 0;
}