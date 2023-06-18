//
// Created by fvalli-v on 18-06-2023.
//


#include<iostream>
using namespace std;

class A
{
	int x;
public:
	A(int i) { x = i; }
	A() { x = 0; } // Default constructor
	void print() { cout << x; }
	attack();
};

class B: virtual public A
{
public:
	B():A(10) {  }
	attack();
};

class C:  virtual public A
{
public:
	C():A(10) {  }
};

class D: public B, public C {
public:
	D() : A(10) {} // Specify which constructor of A to call
};

int main()
{
	D d;
	d.print();
	d.attack();
	return 0;
}