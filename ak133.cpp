//operator overloading 
#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
int real, imag;
public:
Complex(int r=0,int i=0){
    real=r;
    imag=i;
}
Complex operator + (Complex const &obj){
    Complex re;
    re.imag=imag+obj.imag;
    re.real=real+obj.real;
    return re;
}
void display(){
    cout<<real<<" "<<imag<<"i "<<endl;
}
};
int main(){
Complex c1(12,7),c2(6,7);
Complex c3=c1+c2;
c3.display();
return 0;
}
/////smjho dhnag se 