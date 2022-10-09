// #include<iostream>
// using namespace std;
// int clearBit(int n,int pos){
//     int mask=~(1<<pos);
//     return  (n & mask);

// }
// int main()
// {
// cout<<clearBit(5,2)<<endl;
//     return 0;
// }
//update bit

#include<iostream>
using namespace std;
int updateBit(int n,int pos ,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));


}
int main()
{
    cout<<updateBit(5,1,1);
    return 0;
}