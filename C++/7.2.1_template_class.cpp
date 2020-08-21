#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class CArray {
public:
	int size;
	T *ptr;
public:
	CArray(int s=0);
	~CArray();
	T &operator[] (int i)
	{
		return ptr[i];
	}
	int length() { return size; }
	void pushback(T &A);
};

template <typename T>
CArray<T>::CArray(int s):size(s)
{
	if (s==0)
		ptr = NULL;
	else
	  ptr = new T[s];
}

template <typename T>
CArray<T>::~CArray()
{
	if (ptr)
	  delete [] ptr;
}

template <typename T>
void CArray<T>::pushback(T &A)
{
	if (ptr) {
		T *tmpPtr = new T[size+1];
		memcpy(tmpPtr, ptr, sizeof(T)*size);
		delete[] ptr;
		ptr = tmpPtr;
	} else {
		ptr = new T[1];
	}
	ptr[size++] = A;
}

int main()
{
	CArray<int> a;

	for (int i=0; i<5; i++)
		a.pushback(i);

	for (int i=0; i<a.length(); i++)
		cout<<a[i]<<endl;
	
	return 0;
}
