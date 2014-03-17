#ifndef STONEPILEH
#define STONEPILEH
#include "stone.h"

class StonePile{
	private:
		Stone *head;
		unsigned int weight, count;

	public:
		//accessors
		Stone *getHead(){ return this->head; }
		unsigned int getWeight(){return this->weight; }
		unsigned int getCount(){ return this->count; } 

		//mutators
		void setCount(unsigned int x){ this->count = x; }
		void setWeight(unsigned int x){ this->weight = x; }
		void setHead(Stone *h){ this->head = h; }

		//tests the state of the pile
		bool isEmpty(){ return getHead() == NULL ; }
		bool isFull(){
			Stone *p = new Stone;
				if(p){
					delete p;
					return false;
				}
			return true;
		}

		//removes a stone from the pile
		void remove(Stone *s){
			Stone *temp = getHead(), *current;
			//perform action only if the list is populated
			if(!isEmpty()){
				while(temp){
					if(temp == s){
						if(s == getHead()){
							setHead(s->getNext());
							s->setNext(NULL);
						}
						else{
							current->setNext(temp->getNext());
							temp->setNext(NULL);
						}
						setCount(getCount() - 1);
						setWeight( getWeight() - s->getWeight());
						break;
					}
					//keep track of the node and the 1 before it
					current = temp;
					temp = temp->getNext();
				}
			}
		}

		//deletes the pile from memory
		void destroy(){
			while(!isEmpty())
				remove(getHead());	
		}

		void display(){
			if(!isEmpty()){
				Stone *temp = getHead();
				while(temp){
					temp->display();
					temp = temp->getNext();
				}

				cout<<"\n Weight: "<<getWeight()<<endl;
			}
		}

		//adds a stone to a pile
		void addStone(Stone *s){
			if(isFull()){
				//do nothing
			}
			else if(isEmpty()){
				setHead(s);
				setCount(1);
				setWeight(s->getWeight());
			}
			else{
				Stone *temp = getHead();
				while(temp->getNext())
					temp = temp->getNext();

				temp->setNext(s);
				setWeight( getWeight() + s->getWeight());
				setCount(getCount() + 1);
			}
		}

		//function to sort the elements by key (swaps the weight only) using bubble sort
		void sort(){
			int val;
	        bool swapped;
            Stone *current, *top;
			//loop controlling passes
            for(top = head; top->getNext(); top = top->getNext()){
                swapped = false;
				for(current = top->getNext(); current; current = current->getNext()){
					//swap occurs here
					if(top->getWeight() < current->getWeight()){
						val = top->getWeight();
						top->setWeight(current->getWeight());
						current->setWeight(val);
						swapped = true;
                    }
                }
				//exit function if no swapps occur on a pass
				if(!swapped)
					break;
			}
		}

		//constructor
		StonePile(){
			this->setHead(NULL);
			this->setWeight(0);
			this->setCount(0);
		}

		//destructor
		~StonePile(){ destroy(); }
};
#endif
