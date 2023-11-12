#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Adita college: \n";
			
		}
		~A(){
			cout<<"Destructor using inheritance \n";
		}
};

class B : public A
{
	public:
		B(){
			cout<<"Derived class\n";
		}
		
		~B(){
			cout<<"NOT a BASE CLASS\n";
		}
};

int main(){
	B ob;
	return 0;
}
