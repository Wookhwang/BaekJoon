#pragma warning(disable:4996)
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
/*

�ǹ��� : 
 ������ȹ������ �ذ� �Ҷ� �ѹ� ȣ���� ���� ������ ȣ���Ҷ��� 
0�� 1�� ȣ������ �ʾƵ� �ٷ� ȣ���� �Ǿ Ƚ���� ��� 0 0�� �ƴѰ�?
���� ���ظ� �߸��ؼ� ���� Ʋ���ǰ�.. �ƴϸ� ���� ������ �߸��Ȱǰ� �ϴ� �ǹ��� ����...

*/

static long long arr[41] = {1,1};

long long fibonacci(int x);

int main() {

	int t;
	int n;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		
		if (n == 0) {
			cout << 1 << " " << 0 << endl;
		}
		else {
			cout << fibonacci(n - 2);
			cout << " ";
			cout << fibonacci(n - 1) << endl;
		}
	}	
	return 0;
}


long long fibonacci(int x) {
	
	if (x <= 1) {
		return arr[x];
	}
	else if (arr[x] > 0) {
		return arr[x];
	}
	else {
			return arr[x] = fibonacci(x -1) + fibonacci(x - 2);
		}
}