#include <vector>
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RU");
	int i = 0;
    vector<int> vec1(5);
	vector<int> vec2(5);
	for (int i = 0; i < 5; i++)
	{
		vec1[i] = -20 + rand() % 40;
		cout << vec1[i] << " ";
	}
	cout << "\n";

	for (int elem : vec1)
	{
		if (elem <= 0){}
		else
		{ 
			vec2[i] = elem; 
			i++;
		}
	}
	for (int elem : vec2)
	{
		if (elem == 0)
		{

		}
		else
		{
			cout << elem << " ";
		}
	}
}

