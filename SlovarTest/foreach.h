#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void PrintListForeach(const list<T>& myList)
{
	for (auto element : myList)
	{
		cout << element << endl;
	}
	cout << "///////////\n" << endl;

}

int foreach_main()
{
	int arr[]{5, 11, 94, 101, 44};
	list<int> myList{ 5, 1, 4, 7, 99, 0 };
	/*for each (auto var in arr)
	{
		cout << var << endl;
	}*/

	PrintListForeach(myList);

	for (auto element : arr)
	{
		// передаетс€ по значению
		element = -1; // при этом Ќ≈ мен€ютс€ элементы массива
		cout << element << endl;
	}

	cout << "////////////\n" << endl;
	for (auto& element : arr)
	{
		// передаетс€ по ссылке
		element = -1; // при этом мен€ютс€ и элементы массива
		cout << element << endl;
	}


	system("pause");
	return 0;
}
