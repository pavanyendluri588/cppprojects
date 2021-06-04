#include<iostream>
using namespace std;
class pavan{
    public:
    int p1,p2;
    virtual void p123(){
    p1=1;p2=2;
    cout<<"the value of the p1 is "<<p1<<endl<<"the valie of the p2 is "<<p2<<endl;

    }
    
};
class prudhvi:public pavan{
    public:
    int p1,p2;
    void p123(){
    p1=5;p2=6;
    cout<<"the value of the p1 is "<<p1<<endl<<"the valie of the p2 is "<<p2<<endl;
    }
};
int main(){
    /*A C++ virtual function is a member function in the base class that you redefine in a derived class. It is declared using the virtual keyword.
It is used to tell the compiler to perform dynamic linkage or late binding on the function.

Rules of Virtual Function

Virtual functions must be members of some class.
Virtual functions cannot be static members.
They are accessed through object pointers.
They can be a friend of another class.
A virtual function must be defined in the base class, even though it is not used.
The prototypes of a virtual function of the base class and all the derived classes must be identical. If the two functions with the same name but different prototypes, C++ will consider them as the overloaded functions.
We cannot have a virtual constructor, but we can have a virtual destructor*/
    pavan obj1;
    prudhvi obj2;
    obj1.p123();
    obj2.p123();
    return 0;
}