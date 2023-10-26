#include <iostream>
using namespace std;

int main()
{
	int number;
	int* human;
	float heikin = 0;
	cout << "何名入力しますか？ > " << flush;
	cin >> number;
	human = new int[number];
	
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "人目を入力してください。> " << flush;
		cin >> human[i];
	}
	
	for (int i = 0; i < number; i++)
	{
		heikin += human[i];
	}

	heikin = heikin / number;

	cout << "平均点は" << heikin << "点です。" << endl;

	delete[] human;
}