#include<iostream>
#include<cassert>
using namespace std;

class bin_tree{
	
	public:
		struct node{
			int value;
			#include<iostream>
using namespace std;

class bin_tree{
	
	private:
		struct node{
			int value;
			struct node* right;
			struct node* left;
		};
		struct node *root;
		
	public:
		bin_tree();
		bin_tree(int data);
		~bin_tree();
		struct node* createNode();
		void insert(int data);
		void search(struct node *ptr); //change pointer, only temp
		//void delete(int data);
		int display(); 		// test function for dev only
		
};

int main(){
	bin_tree bree=bin_tree(44);
	cout<<bree.display();
	return 0;
}

bin_tree::bin_tree(int data){
	root=new node;
	root->value=data;
	root->left=NULL;
	root->right=NULL;
}

void bin_tree::search(struct node *ptr){
	 	
	if(ptr==NULL){
		return;
	}
	search(ptr->left);
	search(ptr->right);
	delete[]ptr;
}

bin_tree::~bin_tree(){
	search(root); 		//local pointer to delete tree by traversing from one node to another till end
}

bin_tree::display(){
	return root->value;
}

struct node* right;
			struct node* left;
		};
		struct node *root;
		
	//public:
		bin_tree();
		bin_tree(int data);
		//~bin_tree();  					//destructor not working properly
		struct node* create_node();		//can create an overloaded function too
		void insert(int data);
		void search(struct node *ptr); //change pointer, only temp
		//void delete(int data);
		int display(); 		// test function for dev only
		
};

int main(){
	bin_tree bree=bin_tree(55);
	cout<<bree.display()<<endl;
	bree.~bin_tree();  
	cout<<bree.display()<<endl;
	return 0;
}
bin_tree::node* create_node(){
	
	struct node *ptr;
	
	ptr=new node;
	assert(ptr!=0);		//asserting
	//ptr->value=data;
	ptr->left=NULL;
	ptr->right=NULL;
	
	//return ptr;
}

bin_tree::bin_tree(int data){
	
	//create_node();
	root=create_node();
	root->value=data;
}

void bin_tree::search(struct node *ptr){
	 	
	if(ptr==NULL){
		cout<<"empty node\n"<<endl;
		return;
	}
	search(ptr->left);
	search(ptr->right);
	delete &ptr;				//FIX
}

//bin_tree::~bin_tree(){
	//search(root); 		//local pointer to delete tree by traversing from one node to another till end
//}

bin_tree::display(){
	if(root==NULL){
		cout<<"Root is empty\n";
	}
	return root->value;
}

