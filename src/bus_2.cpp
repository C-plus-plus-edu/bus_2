#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
	map<vector<string>, int> buses;
	vector<string> stop_bus;
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		bool tf = false;
		cin >> n;
		for (int z = 0; z < n; ++z) {
			string stops;
			cin >> stops;
			stop_bus.push_back(stops);
		}
		int nums = buses.size();
		for (auto x : buses) {
			if (x.first == stop_bus) {
				cout << "Already exists for " << x.second << endl;
				tf = true;
			}
		}
		if (tf == false) {
			buses[stop_bus] = nums + 1;
			cout << "New bus " << nums + 1 << endl;
		}
		stop_bus.clear();
	}
	return 0;
}
