#ifndef SAMPLE_CLASS1_H
#define SAMPLE_CLASS1_H


//scope of a struct is public by default
//while in a class is private by default
//evething else is the same
class Sample1 {
//this class will execute its desctructor and constructor just if it is public
//	public:
		int foo;

		Sample1(void);
		~Sample1(void);

		void	bar(void) const;

};

#endif