/*
BaekJoon 8393
Problem name : ��
category : for��
*/

#include <iostream>

using namespace std;

int main() {

	int N;
	int result = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		result += i;
	}

	cout << result << endl;

	/*
		result = N * (N + 1) / 2
	*/
}