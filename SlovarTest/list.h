#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void PrintList(const list<T>& myList)
{
	for (auto it = myList.cbegin(); it != myList.cend(); ++it)
	{
		cout << *it << endl;
	}
	cout << "///////////\n" << endl;

}

int list_main()
{
	list<int> myList{ 14, 5, 5, 7, 10, 10, 10};
	list<int> myList2{ 5, 7, 15 };

	myList.push_back(5);
	myList.push_front(151);

	myList.unique();
	PrintList(myList);


	auto it = myList.cbegin();
	advance(it, 3);

	myList.insert(it, 1111);
	myList.erase(++it);
	//myList.sort();
	PrintList(myList);
	myList.assign(myList2.begin(), myList2.end());
	PrintList(myList);

	cin.ignore();
	cin.get();

	return 0;
}