/*
BaekJoon 2884
Problem name : �˶� �ð�
category : ����
*/

#include <iostream>

using namespace std;

int main() {
	int H;
	int M;

	cin >> H >> M;

	if (M < 45) {
		if (H == 0) {
			H = 23;
		}
		else {
			H -= 1;
		}
		M = M + 15;
	}
	else {
		M -= 45;
	}

	cout << H <<" "<< M << endl;

	return 0;
}