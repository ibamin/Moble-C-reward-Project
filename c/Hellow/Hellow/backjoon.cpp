#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(pair<string,string>a,pair<string,string>b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first > b.first;
}

int main(){
	int n;
	map<string, string> m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name, inout;
		cin >> name >> inout;
		m[name] = inout;
	}
	vector<pair<string, string>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);
	for (auto i = v.begin(); i != v.end(); i++) {
		if(i->second!="leave")
			cout << i->first << '\n';
	}
}
