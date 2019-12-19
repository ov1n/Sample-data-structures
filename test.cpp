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


