//
// Created by fvalli-v on 18-06-2023.
//

#include<iostream>

//using virtual keyword avoid ambiguities when constructor of Person are called.
//using virtual keyword just one constructor is called.

//When we use ‘virtual’ keyword, the default constructor of grandparent class
// is called by default even if the parent classes explicitly call parameterized
// constructor. How to call the parameterized constructor of the ‘Person’ class?
// The constructor has to be called in ‘TA’ class after the Faculty(x).

//In general, it is not allowed to call the grandparent’s constructor directly,
// it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.

using namespace std;
class Person {

public:
	int i;
	Person(int x) : i(x){ cout << "Person::Person(int ) called" << endl; cout<<"Person i is: " << this->i << endl;  }
	Person()     { cout << "Person::Person() called" << endl;   }
};

class Faculty : virtual public Person {
public:
	Faculty(int x):Person(x)   {
		cout<<"Faculty::Faculty(int ) called"<< endl;
		cout<<"Faculty i is: " << this->i << endl;
	}
};

class Student : virtual public Person {
public:
	Student(int x):Person(x) {
		cout<<"Student::Student(int ) called"<< endl;
		cout<<"Student i is: " << this->i << endl;
	}
};

class TA : public Faculty, public Student  {
public:
	TA(int x): Person(x), Faculty(x) , Student(x)  {
		cout<<"TA::TA(int ) called"<< endl;
		cout<<"i is: " << this->i << endl;
	}
};

int main()  {
	TA ta1(30);
}
