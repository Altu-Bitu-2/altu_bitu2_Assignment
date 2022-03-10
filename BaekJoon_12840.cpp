#include <iostream>

using namespace std;

#define day 86400 //�Ϸ� = 86400��



int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);


	int h, m, s, q, x, f, b;
	cin >> h >> m >> s >> q;		//���� �ð�

	int cur_time = 3600 * h + 60 * m + s;	//���� �ð��� �ʷ� ǥ��


	for (int i = 0; i < q; i++) {
		cin >> x;
		if (x == 3) {
			if (s < 0)  s += day;

			cout << cur_time / 3600 << ' ' << (cur_time / 60) % 60 <<
				' ' << cur_time % 60 << '\n';
		}
		else if (x == 1) {
			cin >> f;
			cur_time = (cur_time + f) % day;
		}
		else {
			cin >> b;
			cur_time = (cur_time - b) % day;
			}
		}
	return 0;
}


	
