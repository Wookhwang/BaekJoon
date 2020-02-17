/*
BaekJoon 2580
Problem name : ������
category : back tracking
*/

#include <iostream>

#define endl '\n'

using namespace std;

int arr[9][9]; // ������ ��ü �迭
bool raw[9][9]; // �࿡ ���� ���� Ȯ��
bool col[9][9]; // ���� ���� ���� Ȯ��
bool square[9][9]; // 3 * 3 ���簢���� ���� ���� Ȯ��

void dfs(int i) {

	int x = i / 9; // ���� ����
	int y = i % 9; // ���� ���������� ����

	if (i == 81) {
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				cout << arr[j][k] << " ";
			}
			cout << endl;
		}
		// exit(0)�� ���ϸ� ã�� ��� ����� ���� ��µȴ�. �� �߰��ؾ���!
		exit(0);
	}
	
	if (arr[x][y] == 0) {
		for (int j = 1; j <= 9; j++) {
			// ��, ��, �簢���� ���� ���ڸ� ã�´�. ã���� �ִٰ� �� �迭�� ǥ���ϰ� �߰��Ѵ����� leaf�� �̵�
			if (raw[x][j] == false && col[y][j] == false && square[(x / 3) * 3 + (y / 3)][j] == false) {
				raw[x][j] = true;
				col[y][j] = true;
				square[(x / 3) * 3 + (y / 3)][j] = true;
				arr[x][y] = j;
				dfs(i + 1);
				arr[x][y] = 0;
				raw[x][j] = false;
				col[y][j] = false;
				square[(x / 3) * 3 + (y / 3)][j] = false;

			}
		}
	}
	else {
		dfs(i + 1);
	}

}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 0) {
				raw[i][arr[i][j]] = true;
				col[j][arr[i][j]] = true;
				square[(i / 3) * 3 + (j / 3)][arr[i][j]] = true;
			}
		}
	}

	dfs(0);

	return 0;
}