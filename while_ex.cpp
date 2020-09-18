#include <iostream>
using namespace std;

int main() {
	int n, num;
	int max = 0, min = 100, sum = 0, count = 0;
	string subj, max_subj, min_subj;

	cout << "입력할 과목은 몇개 입니까? : ";
	cin >> n;

	while (n--) {
		cout << "과목의 이름을 입력하세요 : ";
		cin >> subj;
		cout << subj << "의 점수를 입력하세요 : ";
		cin >> num;

		while (max < num) {
			max = num;
			max_subj = subj;
		}
		while (min > num) {
			min = num;
			min_subj = subj;
		}
		sum += num;
		count++;
	}
	cout << "최고점수 : " << max_subj << " " << max << "점" << endl;
	cout << "최저점수 : " << min_subj << " " << min << "점" << endl;
	cout.precision(3);
	cout << "평균점수 : " << sum / double(count) << "점";

	return 0;
}