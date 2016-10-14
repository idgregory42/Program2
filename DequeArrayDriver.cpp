#include "DequeArray.h"


#include "CSC2110/Text.h"
using CSC2110::String;
#include "CSC2110/Valtostr.h"
using CSC2110::Valtostr;
#include "CSC2110/Integer.h"
using CSC2110::Integer;

int main()
{
	
	
	int size;
/*	
	int t1 = 1;
	int t2 = 2;
	int t3 = 3;
	int t4 = 4;
	int t5 = 5;
	int t6 = 6;
	int t7 = 7;
	int t8  = 8;
	int t9  = 9;
	int t10 = 10;
	int t11 = 11;
	int t12 = 12;
	int t13 = 13;
	int t14 = 14;
	int t15 = 15;
	int t16 = 16;
	int t17 = 17;
	int t18 = 18;
	int t19 = 19;
	int t20 = 20;
	
	
	int* q;

	int* w;
		
	int* e;
	int* r;
	int* t;
	int* y;
	int* u;
	int* i;
	int* o;
	int* p;
	int* a;	
	int* s;
	int* d;
	int* f;
	int* g;
	int* h;
	int* j;
	int* k;
	int* l;
	int* z;
	int* x;
	int* c;
	int* v;
	int* b;
	int* n;
	int* m;
*/	
	

	
	
	DequeArray<Integer>* de = new DequeArray<Integer>;
	Valtostr* intVal = new Valtostr();

	String* _sz;
	String* sz;
	String* val;
	String* _val;
	String* end_line = new String("\n");
	Integer* in_it;
	int* v_al;
	

	for(int i = 1; i <= 20; i++)
	{
		size = de->size();
		if(i == 1)
		{
			end_line->displayString();			
			_sz = new String(" **Start Size: ");
			_sz->displayString();
			sz = new String(intVal->i_to_c(size));
			sz->displayString();
			end_line->displayString();
			end_line->displayString();			
			in_it = new Integer(i);
			de->enqueue(in_it);					
		}
		else
		{
			
			_sz = new String("* Size3: ");
			_sz->displayString();
			sz = new String(intVal->i_to_c(size));
			sz->displayString();
			end_line->displayString();
			
			in_it = new Integer(i);
			de->enqueue(in_it);			
		}
	}
		size = de->size();
		
		_sz = new String("* Size1: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();
		
		end_line->displayString();
		end_line->displayString();
		end_line->displayString();
/*		
		size = de->size();
		_sz = new String("Size2: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();
		
		de->enqueue(&t1);
		de->enqueue(&t2);
		de->enqueue(&t3);
		de->enqueue(&t4);
		de->enqueue(&t5);
		de->enqueue(&t6);
		de->enqueue(&t7);
		de->enqueue(&t8);
		de->enqueue(&t9);
		de->enqueue(&t10);
		
		size = de->size();
		_sz = new String("Size: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();
		
		de->enqueue(&t11);
		de->enqueue(&t12);
		de->enqueue(&t13);
		de->enqueue(&t14);
		de->enqueue(&t15);
		de->enqueue(&t16);
		de->enqueue(&t17);
		de->enqueue(&t18);
		de->enqueue(&t19);
		de->enqueue(&t20);
*/		
		
		
		
	for(int i = 0; i < 10; i++)
	{
		size = de->size();
		_sz = new String("* Size2: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();	
		
		end_line->displayString();
		end_line->displayString();		
		in_it = de->dequeueDeque();
		_val = new String("** deqDeq: ");
		_val->displayString();
		val = new String(intVal->i_to_c(in_it->getValue()));
		val->displayString();
		
		end_line->displayString();
		end_line->displayString();		
	}
		
	size = de->size();

	
	end_line->displayString();
	end_line->displayString();		
	_sz = new String(" **End Size: ");	
	_sz->displayString();
	
	sz = new String(intVal->i_to_c(size));
	sz->displayString();
	end_line->displayString();
	in_it = de->peek();
	_val = new String("** Front: ");
	_val->displayString();
	val = new String(intVal->i_to_c(in_it->getValue()));
    val->displayString();
	end_line->displayString();
	end_line->displayString();

	for(int i = 20; i > 15; i--)
	{
		size = de->size();
		_sz = new String("* Size3: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();
		end_line->displayString();
			
		in_it = new Integer(i);
		de->enqueueDeque(in_it);					
	}
	size = de->size();
	_sz = new String(" **End Size: ");	
	_sz->displayString();
	
	sz = new String(intVal->i_to_c(size));
	sz->displayString();
	end_line->displayString();	
	for(int i = 2; i > 0; i--)
	{
		size = de->size();
		_sz = new String("* Size2: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();	
		
		end_line->displayString();
		end_line->displayString();		
		in_it = de->dequeue();
		_val = new String("** deqDeq: ");
		_val->displayString();
		val = new String(intVal->i_to_c(in_it->getValue()));
		val->displayString();
		
		end_line->displayString();
		end_line->displayString();				
	}
		end_line->displayString();
		end_line->displayString();	
		end_line->displayString();
		end_line->displayString();				
	size = de->size();
	for(int i = 0; i < 13; i++)
	{
		
		_sz = new String("* Size2: ");
		_sz->displayString();
		sz = new String(intVal->i_to_c(size));
		sz->displayString();	
		
		end_line->displayString();
		end_line->displayString();		
		in_it = de->dequeueDeque();
		_val = new String("** deqDeq: ");
		_val->displayString();
		val = new String(intVal->i_to_c(in_it->getValue()));
		val->displayString();
		
		end_line->displayString();
		end_line->displayString();
       	size = de->size();	
	}
/*	
	cout << size << endl;
		q = de->dequeueDeque();
		cout << "deqDeq: " << *q << endl;
		w = de->dequeueDeque();
		cout << "deqDeq: " << *w << endl;
		e= de->dequeueDeque();
		cout << "deqDeq: " << *e << endl;
		r= de->dequeueDeque();
		cout << "deqDeq: " << *r << endl;
		t= de->dequeueDeque();
		cout << "deqDeq: " << *t << endl;
		y= de->dequeueDeque();
		cout << "deqDeq: " << *y << endl;
		u= de->dequeueDeque();
		cout << "deqDeq: " << *u << endl;
		i= de->dequeueDeque();
		cout << "deqDeq: " << *i << endl;
		o= de->dequeueDeque();
		cout << "deqDeq: " << *o << endl;
		size = de->size();
		cout << size << endl;
		p= de->dequeueDeque();
		cout << "deqDeq: " << *p << endl;
		a= de->dequeueDeque();
		cout << "deqDeq: " << *a << endl;
		s= de->dequeueDeque();
		cout << "deqDeq: " << *s << endl;
		d= de->dequeueDeque();
		cout << "deqDeq: " << *d << endl;
		f= de->dequeueDeque();
		cout << "deqDeq: " << *f << endl;
		g= de->dequeueDeque();
		cout << "deqDeq: " << *g << endl;
		h= de->dequeueDeque();
		cout << "deqDeq: " << *h << endl;
		j= de->dequeueDeque();
		cout << "deqDeq: " << *j << endl;
		k= de->dequeueDeque();
		cout << "deqDeq: " << *k << endl;
		l= de->dequeueDeque();
		cout << "deqDeq: " << *l << endl;
		z= de->dequeueDeque();
		cout << "deqDeq: " << *z << endl;
		
		size = de->size();
	cout << size << endl;
*/		
	delete _sz;
	delete end_line;
	delete sz;
	delete val;
	delete _val;
delete in_it;

	delete intVal;
	delete de;

 
 return 0;	
}