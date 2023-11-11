  //cunstructor is invoked while creating data members,

#include<iostream>
using namespace std;
class ccp
{
	int n;
	public:
		ccp()
		{
			n=10;
		}
		ccp(int x)
		{
			n=x;
			
		}
		ccp (ccp &temp)
		{
			n =temp.n;
		}
		void display()
		{
			cout <<"n = "<<n;
		}
};

int main()
{
	
	ccp ob1(25);
	ccp ob2=ob1; 
	ccp ob3;
	ob3.display();  
/*	ccp ob4(ob2);
	ob3 = ob2; 
	ob1.display();  
	ob2.display();  
	ob3.display(); 
	ob4.display(); 
*/
	return 0;
}
