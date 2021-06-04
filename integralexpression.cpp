#include<iostream>
using namespace std;
class p
{
public:
    int a,d;
    float b,c;
    void pa(int x,int y){
      cin >> a >>b;
      c=a+int(b);
      cout<<"the value of a  "<<a<<endl<<"the value of b  "<<b<<endl<<"the value of c  "<<c<<endl;
    }

};
int main(){
p pavan1;
    pavan1.pa(5,7);
    return 0;
}
