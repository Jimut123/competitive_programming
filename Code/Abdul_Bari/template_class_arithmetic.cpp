#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
	private:
		T a;
		T b;
	public:
		Arithmetic(T a, T b);
		T add();
		T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
	this->a = a;
	this->b = b;
}

template <class T>
T Arithmetic<T>:: sub()
{
	T c;
	c = a-b;
	return c;
}

template <class T>
T Arithmetic<T>:: add()
{
	T c;
	c = a+b;
	return c;
}

int main()
{
	Arithmetic<int> a(3,5);
	cout<<"Subtraction of 3 and 5 = "<<a.sub()<<"\n";
	cout<<"Addition of 3 and 5 = "<<a.add()<<"\n";
	

	Arithmetic<float> a1(9.324,5453.2323);
	cout<<"Subtraction of 9.324 and 5453.2323 = "<<a1.sub()<<"\n";
	cout<<"Addition of 9.324 and 5453.2323 = "<<a1.add()<<"\n";


	return 0;
}
