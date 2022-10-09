#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    void display(){
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
        

    }
};
int main(){
    student a;student b;student c;
    a.name="SHAILJA";
    a.age=20;
    a.gender=1;
    b.name="Kriti";
    b.age=19;
    b.gender=1;
    c.name="SIMSIM";
    c.age=20;
    c.gender=1;
    a.display();
    b.display();
    c.display();
    return 0;
}