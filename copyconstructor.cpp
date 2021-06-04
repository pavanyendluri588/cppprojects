#include<iostream>
using namespace std;
class pavan{
     public:
   int x;
pavan(){  //default constructor
    x=10;
}



pavan(pavan &a){     //copy constructor 
x=a.x;        //here this line checks for the  object a and take the value of x inside the object a
}
void display(){
 cout<<"the value of the x is "<<x<<endl;
}
};




int main(){
pavan  obj1,obj2;
obj2=obj1; /*here the copy construstor will involve  thes line tells by using copy constructor the obj1 alias  a */
  obj1.display();obj2.display();
     return 0; 
}

