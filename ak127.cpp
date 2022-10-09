///my technique for dnf sort 
#include<bits/stdc++.h>
using namespace std;
void dnf(int ar[],int n){
    int a1,b2,c0;
    a1=0;b2=0;c0=0;
   
    int arrr[n];
    for(int i=0;i<n;i++){
       if(ar[i]==0)
       c0=c0+1;
       else if(ar[i]==1)
       a1=a1+1;
       else if(ar[i]==2)
       b2=b2+1;}
       cout<<c0<<" "<<a1<<" "<<b2<<" "<<endl;
       for(int i=0;i<c0;i++){
        arrr[i]=0;
        cout<<arrr[i]<<" ";
       }
       for(int j=c0;j<(c0+a1);j++){
        arrr[j]=1;
      cout<<arrr[j]<<" ";
       }
       for(int k=(c0+a1);k<n;k++)
       {
        arrr[k]=2;
        cout<<arrr[k]<<" ";
       }
}

int main(){
    int n;
    cin>>n;
    int ar[n]={0};
     cout<<"Array element should be 0 ,1 and 2 only ";
    for(int i=0;i<n;i++){
       
        cin>>ar[i];
    }
    dnf(ar,n);
}