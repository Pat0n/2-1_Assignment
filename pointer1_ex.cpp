#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int i, j, n, pos;
	int c = 0;
	int sum_arr[26]{ NULL, };
	int** num_arr;
	char* a_arr, * s_arr;
	string str, tmp;
	
	cout << "입력할 영단어의 개수를 입력하세요 : ";
	cin >> n;
	s_arr = new char[n]{ NULL, };

	num_arr = new int* [n];
	for (i = 0; i < n; i++) {
		num_arr[i] = new int[26];
		memset(num_arr[i], 0, sizeof(int) * 26);
	}

	for (i = 0; i < n; i++) {
		cout << "영단어를 입력하세요 : ";
		cin >> tmp;
		str += tmp + '\0';
		for (j = 0; j < tmp.length(); j++) {
			if (tmp[j] >= 65 && tmp[j] <= 90) {
				pos = tmp[j] - 65;
				num_arr[i][pos]++;
			}
			else if (tmp[j] >= 97 && tmp[j] <= 122) {
				pos = tmp[j] - 97;
				num_arr[i][pos]++;
			}
		}
	}

	a_arr = new char[str.length() + 1]{ NULL, };
	for (i = 0; i < str.length(); i++)
		a_arr[i] = str[i];

	cout << endl;
	for (i = 0; i < n; i++) {
		cout << "[ ";
		for (j = c; j < str.length(); j++) {
			if (a_arr[j] != '\0') {
				cout << a_arr[j];
				c++;
			}
			else {
				cout << " ]" << endl;
				c++;
				break;
			}
		}
		for (j = 0; j < 26; j++) {
			sum_arr[j] += num_arr[i][j];
			if (num_arr[i][j])
				cout << (char)(j + 65) << ":" << num_arr[i][j] << "개 ";
		}
		cout << endl << endl;
	}
	
	cout << "[ 총 알파벳 개수 ]" << endl;
	for (i = 65; i < 91; i++) {
		cout << (char)i << ":" << sum_arr[i - 65] << "개 ";
		if ((i - 64) % 7 == 0)
			cout << endl;
	}
	cout << endl;

	for (i = 0; i < n; i++)
		delete[] num_arr[i];
	delete[] a_arr, s_arr, num_arr;

	return 0;
}