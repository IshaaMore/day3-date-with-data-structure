#include <iostream>
using namespace std;
class Stack{
	public:
		int *arr;
		int top;
		int size;
		
		Stack(int size){
			this->size=size;
			arr=new int[size];
			top=-1;
		}
int push(int element){
	if (size-top>1){
		top++;
		arr[top]=element;
	}
	else{
		cout<<"Stack Overflow."<<endl;
	}
}
int pop(){
	if(top==-1){
		cout<<"Stack Underflow."<<endl;
	}
	else{
		top--;
	}
}
int peek(){
	if(top==-1){
		cout<<"Stack Underflow."<<endl;
	}
	else{
		cout<<arr[top]<<endl;
	}
}
void isEmpty(){
	if(top==-1){
		cout<<"Stack is empty.";
	}
}	
};
int main(){
	Stack stack(44);
	stack.push(16);
	stack.push(20);
	stack.push(37);
	stack.push(91);
	stack.push(51);
	stack.peek();
	stack.pop();
	stack.peek();
	stack.pop();
	stack.peek();
}
