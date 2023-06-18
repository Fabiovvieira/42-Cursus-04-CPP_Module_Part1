//
// Created by fvalli-v on 18-06-2023.
//

//Can access name , run() and legs
class Quadruped{
private:
	std::string	name; //only accessible from a Quadruped object

protected:
	Leg	legs[4]; //Accessible from a Quadruped or derived object (child class)

public:
	void	run(int distance); //Accessible from wherever

};

//look for encapusulation in C++
class Dog : public Quadruped{ //can access run() and legs

};

//look for diamond heritage