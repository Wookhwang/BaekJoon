#include <iostream>

using namespace std;

int main() {

	int n;
	int num[101];
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (int j = 0; j < n; j++) {
		bool isPrime = true;
		
		// 2���� N-1�� ���� ������ �������� ���� ������ �ݺ��� ����
		for (int k = 2; k < num[j]; k++) {
			if (num[j] % k == 0) {
				isPrime = false;
				break;
			}
		}
		if (num[j] == 1) {
			isPrime = false;
		}

		if (isPrime) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}