#ifndef STONEH
#define STONEH

#include <iostream>
using namespace std;

class Stone{
	private:
		unsigned int weight;
		Stone *next;

	public:
		//setters
		void setNext(Stone *s){this->next = s;}
		void setWeight(unsigned int w){this->weight = w;}

		//getters
		unsigned int getWeight(){return this->weight;}
		Stone *getNext(){return this->next;}

		//constructor
		Stone(){
			this->setNext(NULL);
			this->setWeight(rand()%6+1);
		}

		Stone(unsigned int w){
			this->setNext(NULL);
			this->setWeight(w);
		}

		~Stone(){ /*Destructor*/ }

		void display(){ cout<<this->getWeight()<<" "; }
};

#endif