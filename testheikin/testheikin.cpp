#include <iostream>
using namespace std;

int main()
{
	int number;
	int* human;
	float heikin = 0;
	cout << "�������͂��܂����H > " << flush;
	cin >> number;
	human = new int[number];
	
	for (int i = 0; i < number; i++)
	{
		cout << i + 1 << "�l�ڂ���͂��Ă��������B> " << flush;
		cin >> human[i];
	}
	
	for (int i = 0; i < number; i++)
	{
		heikin += human[i];
	}

	heikin = heikin / number;

	cout << "���ϓ_��" << heikin << "�_�ł��B" << endl;

	delete[] human;
}