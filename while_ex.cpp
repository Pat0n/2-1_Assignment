#include <iostream>
using namespace std;

int main() {
	int n, num;
	int max = 0, min = 100, sum = 0, count = 0;
	string subj, max_subj, min_subj;

	cout << "�Է��� ������ � �Դϱ�? : ";
	cin >> n;

	while (n--) {
		cout << "������ �̸��� �Է��ϼ��� : ";
		cin >> subj;
		cout << subj << "�� ������ �Է��ϼ��� : ";
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
	cout << "�ְ����� : " << max_subj << " " << max << "��" << endl;
	cout << "�������� : " << min_subj << " " << min << "��" << endl;
	cout.precision(3);
	cout << "������� : " << sum / double(count) << "��";

	return 0;
}