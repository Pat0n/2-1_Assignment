#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	int i, j;
	int c = 0;
	string input;
	char alphabet[2][4][7] = {
		{
			{'A','B','C','D','E','F','G'},
			{'H','I','J','K','L','M','N'},
			{'O','P','Q','R','S','T','U'},
			{'V','W','X','Y','Z','\0',  }
		},
		{
			{'a','b','c','d','e','f','g'},
			{'h','i','j','k','l','m','n'},
			{'o','p','q','r','s','t','u'},
			{'v','w','x','y','z','\0',  }
		}
	};

	cout << "영어문장을 입력해주세요 : ";
	getline(cin, input);
	sort(input.begin(), input.end());
	cout << endl;

	while (c < 4) {
		for (i = 0; i < 7; i++) {
			for (j = 0; j < input.length(); j++) {
				if (alphabet[0][c][i] == input[j] && i < 7) {
					cout << "[" << alphabet[0][c][i] << "]\t";
					i++;
				}
			}
			if (i < 7)
				cout << alphabet[0][c][i] << "\t";
		}
		cout << "\t";
		for (i = 0; i < 7; i++) {
			for (j = 0; j < input.length(); j++) {
				if (alphabet[1][c][i] == input[j] && i < 7) {
					cout << "[" << alphabet[1][c][i] << "]\t";
					i++;
				}
			}
			if (i < 7)
				cout << alphabet[1][c][i] << "\t";
		}
		c++;
		cout << endl << endl << endl;
	}

	return 0;
}