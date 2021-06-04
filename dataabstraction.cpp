#include<iostream>
using namespace std;
class pavan{
  private:int x,y,z;
  public:
  void process(int X,int Y,int Z){
      X=x;Y=y;Z=z;
  cout<<"the value of the x is"<<X<<endl<<"the value oif the y is "<<Y<<"the value of z is"<<Z<<endl;

  }
  

};
class prudhvi:pavan{
    public:
    void p1()
{
int a,b,c;
 cout<<"enter the value of the a";
 cin>>a;
 cout<<"enter the value of the b";
 cin>>b;
 cout<<"enter the value of the c";
 cin>>c;
 cout<<"the val;ur of the a is "<<a<<endl<<"the value of the b is "<<b<<endl<<"the value of the c is "<<c<<endl;
 }
        
};
int main(){
 


    return 0;
}