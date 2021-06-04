#include<iostream>
//#include<istream>
using namespace std;
class prudhvi
{
    public:
    string name,age,phone_number,adhar_number;
    void print(){
         cout<<"==============================================="<<endl;
 cout<<"Enter your name:"<<endl;
 cin >> name;
 //these three are  used for the spaceing in between the string
 //these are not working 
 //cin.ignore();
 //cin.getline(name,100);
 //getline(cin,name);
    
 cout<<"==============================================="<<endl;
 cout<<"Enter your age:"<<endl;
 cin >> age;
 cout<<"==============================================="<<endl;
 cout<<"Enter your phone number:"<<endl;
 cin >> phone_number;
 cout<<"==============================================="<<endl;
 cout<<"Enter your adhar number:"<<endl;
 cin >> adhar_number;
 cout<<"==============================================="<<endl;
      cout<<"==============================================="<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"Age:"<<age<<endl;
      cout<<"Phone number:"<<phone_number<<endl;
      cout<<"Adhar number:"<<adhar_number<<endl;
      cout<<"==============================================="<<endl;

    }
    
};
class rama:public prudhvi
{
       public:
};
int main(){
    rama p1,p2;
    
    p1.print();     
    return 0;
}