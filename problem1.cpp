#include<bits/stdc++.h>
using namespace std;
int main(){
 double num1,num2;
 cout<<"Enter num1: "; cin>>num1;
 cout<<"Enter num2: "; cin>>num2;
 char charecter,press;
 cout<<"Enter +,-,*,/,%: ";  cin>>charecter;
    cout<<"Enter =: ";  cin>>press;

 if(press=='='){
  if(charecter=='+'){
   cout<<num1<<"+"<<num2<<" = "<<num1+num2<<endl;
  }
  else if(charecter=='-'){
   cout<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
  }
  else if(charecter=='*'){
   cout<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;
  }
  else if(charecter=='/'){
   cout<<num1<<"/"<<num2<<" = "<<num1/num2<<endl;
  }
  else{
   cout<<num1<<"%"<<num2<<" = "<<int(num1)%int(num2)<<endl;
  }
 }
}
