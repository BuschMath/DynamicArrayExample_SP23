#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray
{
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();

	int* GetPtr() { return data; };

private:
	int* data;
};

#endif // !DYNAMICARRAY_H
