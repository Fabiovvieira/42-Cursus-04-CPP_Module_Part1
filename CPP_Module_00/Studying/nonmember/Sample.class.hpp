#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		Sample(void);
		~Sample(void);
		// static key word create a non member function or atribute
		static int getNbInst(void);

	private:

		static int _nbInst;

};

#endif