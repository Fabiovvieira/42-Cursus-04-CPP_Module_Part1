#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H


//scope of a struct is public by default
//while in a class is private by default
//evething else is the same
struct Sample {

	int foo;

	Sample(void);
	~Sample(void);

	void	bar(void) const;


};

#endif