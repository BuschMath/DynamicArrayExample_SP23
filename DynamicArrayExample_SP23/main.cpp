#include "DynamicArray.h"
#include <iostream>

using namespace std;

int main()
{
	int size = 37;
	DynamicArray data(size);
	int* pData = data.GetPtr();

	for (int i = 0; i < size; i++)
	{
		pData[i] = i;
		cout << pData[i] << endl;
	}

	return 0;
}