#include<iostream>
using namespace std;
virtual class pavan{
    public:
    int a,b,c;
     virtual void pava(int a1,int b1,int c1){
                cout<<"this is pava function in the pavan  class"<<endl;
        cout<<"the value of a1 is"<<a1<<endl<<"the value of b1 is "<<b1<<endl<<"the value of c1 is "<<c1<<endl<<endl;
    }
};
class prudhvi :public pavan{
    public:
    void pava(int a2,int b2,int c2){
        cout<<"this is pava function in the prudhvi class"<<endl;
    cout<<"the value of a1 is"<<a2<<endl<<"the value of b1 is "<<b2<<endl<<"the value of c1 is "<<c2<<endl<<endl;
}
};
int  main(){
    int * ptr; 
   pavan obj1;
   prudhvi obj;
   ptr=&obj1;
   obj.pava(1,2,3);
   obj1.pava(10,20,30);

   

    return 0;
}