#include<iostream>
using namespace std;


class test{
	private:
		struct a{
			int num;
			int *g;
		};
		struct a *point;
		
	public:
		test();/*{
			point=new a;
			point->num=43;
		}*/
		
		void display(){
			cout<<"The data is "<<(point->num)<<endl;
		} 
};
int main(){
	
	test user=test();
	user.display();
	
}

test::test(){
			point=new a;
			point->num=43;
		}
