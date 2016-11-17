#ifndef TESTING_H
#define TESTING_H

void testA_Function1()
{
	cout << "\n--- testA_Function1 -------------------------\n";
	map<char, int> m;
	m['J'] = 5;	m['B'] = 2;	m['S'] = 1;	m['L'] = 4;	m['H'] = 3;
	set<int> s;
	vector<int> v;

	function1(m, s, v);

	cout << endl;
}

void testB_Function1()
{
	cout << "\n--- testB_Function1 -------------------------\n";
	map<char, int> m;
	m['t'] = 65;m['d'] = 26; m['e'] = 13; m['u'] = 54; m['g'] = 33; m['h'] = 45; m['k'] = 23;
	set<int> s;
	vector<int> v;

	function1(m, s, v);

	cout << endl;
}

void testA_Function2()
{
	cout << "\n--- testA_Function2 -------------------------\n";
	int arrQueue[] = { 63, -41, 35, 22, -24, 52, -86, -91, 29, -56, -78, 25 };
	int elements = 12;
	queue<int> q;
	for (int i = 0; i < elements; ++i) q.push(arrQueue[i]);
	list<int> l;
	
	function2(l, q);

	list<int>::const_iterator iterList = l.begin();
	int i = 0;
	while (i < 6)
	{
		cout << *iterList << " ";
		++iterList;
		++i;
	}
	cout << endl;
}

void testB_Function2()
{
	cout << "\n--- testB_Function2 -------------------------\n";
	int arrQueue[] = { -5, 3, -7, 8, -1, 2, 5, -6 };
	int elements = 8;
	queue<int> q;
	for (int i = 0; i < elements; ++i) q.push(arrQueue[i]);
	list<int> l;

	function2(l, q);

	list<int>::const_iterator iterList = l.begin();
	int i = 0;
	while (i < 4)
	{
		cout << *iterList << " ";
		++iterList;
		++i;
	}
	cout << endl;
}

void testA_Function3()
{
	cout << "\n--- testA_Function3 -------------------------\n";
	int a[] = { 1, 2, 3 };
	DoublyList dl(a, 3);

	dl.function3();

	dl.print();
	dl.reversePrint();
}

void testB_Function3()
{
	cout << "\n--- testB_Function3 -------------------------\n";
	int a[] = { 49, 24, 35, 76, 12, 82, 90, 56 };
	DoublyList dl(a, 8);

	dl.function3();

	dl.print();
	dl.reversePrint();
}

#endif