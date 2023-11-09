#include<iostream>
using namespace std;

class  A
{
  public:
   char name[20];
   int age;
   public:
   A()
   {
   	cout << "Enter name and age:"<<endl;
   	cin>>name;
   	cin>>age;
	   }	
	   void display()
	   {
	   	cout<<endl<<"Younger person deatils: ";
	   	cout <<name<<" ";
	   	cout<<age;
	   }
	   
	   A compare(A);
};

 A A :: compare(A temp){
    cout<<endl<<"Person1 details are: ";
    cout<<this->name<<" ";
    cout<<this->age;
 	cout<<endl<<"Person2 details are: ";
 	cout<<temp.name<<" ";
 	cout<<temp.age;
 	if(this->age<temp.age) return *this;
 	else return temp;
 }
int main()
{
	A p1,p2;
	A yp =p1.compare(p2);
	yp.display();
	return 0;
	
}
