
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            // LInk to the previos top
            new_node->set_next(top);
            // change the top
            top = new_node;
            //increase the size
            size++;
   }
 
         // Left missing for exercises…
    
}

int Stack::pop(){
        if(top==NULL){
            
            return -1;
        }

        NodePtr t=top;
        int value;
        value=t->get_value();
        top = t->get_next();

    // Left missing part for exercises
        delete t;
        size--;
        return value;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    //initialize stack
    top=NULL;
    size = 0;
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"deleting stack"<<endl;
    
    while(size>0){
        pop();

    }
    
}


#endif
