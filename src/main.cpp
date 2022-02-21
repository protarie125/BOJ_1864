#include <iostream>
#include <map>
#include <string>

using namespace std;

using ll = long long;

auto lut = map<char, int>{
	{ '-', 0 },
	{ '\\', 1 },
	{ '(', 2 },
	{ '@', 3 },
	{ '?', 4 },
	{ '>', 5 },
	{ '&', 6 },
	{ '%%', 7},
	{ '/', -1 },
};

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string line;
	cin >> line;
	do {
		auto value = ll{ 0 };

		auto n = line.length();
		for (int i = 0; i < n; ++i) {
			value *= 8;
			value += lut[line[i]];
		}

		cout << value << '\n';

		cin >> line;
	} while ("#" != line);

	return 0;
}