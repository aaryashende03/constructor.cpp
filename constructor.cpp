#include<iostream>
using namespace std;
class Demo
{
  public:             //access specifer
          int ino1;  // characterisctics
		  int ino2;
		  
		  Demo() 
		  {
		    cout<<"inside constructor\n";
		    ino1=10;
			ino2=13;
		  }
		  ~Demo()  //destructor
		  {
			  cout<<"inside destructor\n";
		  }	  
		  
		  void fun()    //behaviour
		  {
		  cout<<"inside fun\n";
		  }
		  void gun()   //behaviour
		  {
		   cout<<"inside gun\n";
		  }
		  
		  
		  
		  
};
		 
		 int main ()
		            {
					  cout<<"inside constructor\n";
					  Demo obj1;  //caller object
					  Demo obj2;
					  obj1.fun();
					  obj2.gun();	
					  return 0;
					}
					  
					  