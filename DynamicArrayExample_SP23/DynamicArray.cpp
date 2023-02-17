#include "DynamicArray.h"
#include <memory>

DynamicArray::DynamicArray()
{
	data = new int[100];
}

DynamicArray::DynamicArray(int size)
{
	//data = (int*)malloc(sizeof(int) * size);
	data = new int[size];
}

DynamicArray::~DynamicArray()
{
}