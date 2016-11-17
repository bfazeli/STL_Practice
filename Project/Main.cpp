#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>

using namespace std;

// Definition function1
void function1(const map<char, int>& m, set<int>& s, vector<int>& v);

int main()
{
	map<char, int> m;
	m['J'] = 5;	m['B'] = 2;	m['S'] = 1;	m['L'] = 4;	m['H'] = 3;
	set<int> s;
	vector<int> v;

	function1(m, s, v);

	cout << endl;
	for (int value : v)	cout << value << " ";
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

// Definition function1
