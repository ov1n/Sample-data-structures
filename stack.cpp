#include<iostream>
using namespace std;

class stack{
	
	private:
		char alphabet[27];
		int top;
		
	public:
		stack(){ top=-1;}
		
		~stack(){
			top=-1;
		}
		
		void load_stack(){
			
			top=-1;
			char i;
			for(i='a';i<='z';i++){
				top++;
				alphabet[top]=i;
				
			}
		}
		
		void show_stack(){
			int i;
			cout<<"contents of stack:"<<endl;
			for(i=0;i<=26;i++){
				cout<<alphabet[i]<<"    ";	
			}
			cout<<endl;
		}
		
		int pop(){
			
			char temp;
			if(top==-1){
				cout<<"Stack is empty nothing to pop"<<endl;
			}
			else{
				temp=alphabet[top];
				top--;
				return temp;
			}
		}
		
		void push(char ch){
			
			if(top>26){
				cout<<"Stack is full cannot pop"<<endl;
			}else{
				
				top++;
				alphabet[top]=ch;
			}
		}
		
};

int main(){
	
	stack s1=stack();
	s1.load_stack();
	s1.show_stack();
	s1.pop();
	s1.push('p');
	s1.show_stack();
}
