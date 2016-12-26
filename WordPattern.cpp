#include <string>
#include <sstream>
#include <unordered_map>
#include<vector>
#include <iostream>
using namespace std;



bool match(vector<string> &a, vector<string> &b) {
	unordered_map <string, string> mp;
	for (int i = 0; i < a.size(); ++i) {
		if (!mp.count(a[i])) {
			mp[a[i]] = b[i];
		}
		else if (mp[a[i]] != b[i]) {
			return false;
		}
	}
	return true;
}

bool wordPattern(string pattern, string str) {
	vector <string> a, b;
	stringstream ss(str);
	string t;
	for (auto e : pattern) {
		a.push_back(to_string(e));
	}
	while (getline(ss, t, ' ')) {
		b.push_back(t);
	}
	return a.size() == b.size() && match(a, b) && match(b, a);
}



//int main()
//{
//	cout << "Resualt: " << wordPattern("abba", "dog cat cat dog") << endl;
//	cout << "Resualt: " << wordPattern("abba", "dog cat cat fish") << endl;
//	system("pause");
//	return 0;
//}