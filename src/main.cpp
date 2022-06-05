#include <iostream>
#include <vector>

using namespace std;

using vb = vector<bool>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto lst = vb(30, false);
	for (int i = 0; i < 28; ++i) {
		int x;
		cin >> x;

		lst[x - 1] = true;
	}

	for (int i = 0; i < 30; ++i) {
		if (!lst[i]) {
			cout << i + 1 << '\n';
		}
	}

	return 0;
}