#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int arr_index(int row, int* col, int len) {
	int i, max;
	int c_row = 0, c_col = 0;
	int* val = new int[(__int64)len + 1]{ NULL, };
	for (i = 1; i <= len; i++) {
		val[i] = len % i;
	}

	max = val[0];

	for (i = 0; i <= len; i++) {
		if (max < val[i]) {
			max = val[i];
			c_row++;
		}
		else if (len == 2)
			c_col = 2;
	}
	for (i = 1; i < len; i++) {
		if (i * c_row >= len) {
			c_col = i;
			break;
		}
	}

	row = c_row;
	*col = c_col;
	delete[] val;

	return row;
}

int main() {
	int i, j, len, col;
	int row = 0, str_c = 0;
	string str;
	char** str_arr;

	cout << "영어문장을 입력해주세요 : ";
	getline(cin, str);
	cout << endl;
	len = str.length();

	row = arr_index(row, &col, len);
	str_arr = new char* [row];

	for (i = 0; i < row; i++) {
		str_arr[i] = new char[col];
		memset(str_arr[i], 0, sizeof(char) * col);
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			str_arr[i][j] = str[str_c];
			if (str_arr[i][j] == str[len])
				break;
			str_c++;
		}
	}

	for (i = 0; i < row; i++) {
		cout << "  ";
		for (j = 0; j < col; j++)
			cout << str_arr[i][j] << " ";
		cout << endl;
	}

	cout << endl << "문자의 개수는 " << len << "개 입니다." << endl << endl;
	cout << "배열의 크기는 가로:" << col << "칸 세로:" << row << "칸 입니다." << endl;

	for (i = 0; i < row; i++)
		delete[] str_arr[i];
	delete[] str_arr;

	return 0;
}