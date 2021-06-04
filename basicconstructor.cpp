#include<iostream>
using namespace std;
class pavan{
public://the class  should be in public
int x,y;//instance variable’s
pavan(){       //constructor
x=10;
  
y=5;
}

void add(){
cout<<"the addition  of x,y is  :"<<(x+y)<<endl;
}
};
int main(){
pavan obj;
obj.add();
  return 0;
}



