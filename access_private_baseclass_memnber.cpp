#include<iostream>
using namespace std;
class A{
	private:
		int i,j;
};
class B : public A{
	public: int x;
	void show(int *sp)
	{
		cout<<"i= "<<*sp;
		cout<<"j= "<<*(sp + 1);
		cout<<"k= "<<*(sp + 2);
	}
};
int main(){
	B ob;
	int *p;
	ob.x=10;
	p = &ob.x;
	p--;
	*p=20;
	p--;
	*p=25;
	
	ob.show(p);
	return 0;
}
