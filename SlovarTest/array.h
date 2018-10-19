#include <iostream>
#include <array>

using namespace std;

int array_main()
{
	array<int, 4> arr = { 1, 2, 5, 7};

	//try
	//{
	//	cout << arr.at(11) << endl;// работает дольше чем arr[] 
	//}
	//catch (const exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}

	return 0;
}