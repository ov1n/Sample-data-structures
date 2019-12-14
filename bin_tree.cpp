#include<iostream>
#include<cassert>
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
		~bin_tree();  					//destructor not working properly
		struct node* createNode();
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

bin_tree::bin_tree(int data){
	root=new node;
	assert(root!=0);		//asserting
	root->value=data;
	root->left=NULL;
	root->right=NULL;
}

void bin_tree::search(struct node *ptr){
	 	
	if(ptr==NULL){
		cout<<"empty node\n"<<endl;
		return;
	}
	search(ptr->left);
	search(ptr->right);
	delete &ptr;
}

bin_tree::~bin_tree(){
	search(root); 		//local pointer to delete tree by traversing from one node to another till end
}

bin_tree::display(){
	if(root==NULL){
		cout<<"Root is empty\n";
	}
	return root->value;
}

