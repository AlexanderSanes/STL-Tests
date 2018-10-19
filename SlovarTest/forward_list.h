#include <iostream>
#include <forward_list>

using namespace std;

int forward_main()
{
	forward_list<int> f1;
	f1.push_front(1);
	f1.push_front(4);

	auto it = f1.before_begin();
	
	f1.insert_after(it, 1999);
	//f1.erase_after(it);
	
	//cout << *it << endl;

	for (auto el : f1)
	{
		cout << el << endl;
	}

	return 0;
}