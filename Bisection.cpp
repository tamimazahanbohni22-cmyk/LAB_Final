#include <bits/stdc++.h>
using namespace std;
#define EPSILON 0.001
double func(double x){
  return (x*x*x)-x-11;
}
void bisection(double a,double b){
  if(func(a)*func(b)>=0){
    cout<<"Your input is invalid ";
    return;
  }
  double plus,min;
  if(func(a)>0){
     plus=a;
     min=b;
  }else{
    plus=b;
    min=a;
  }
  double c=a;
  while((plus-min)>=EPSILON){
  c=(plus+min)/2;
  if(func(c)==0.0){
    return;
  }else if(func(c)*func(plus)>0){
       plus=c;
  }else{
    min=c;
  }
  }
  cout<<"The value of root in bisection method = "<<c<<endl;
}
int main(){
double a,b;
cout << "Name: Tamima Zahan Bohni" << endl;
cout << "ID No: 1425"<<endl;
cout<<"Enter the first guess (a) = ";
cin>>a;
cout<<"Enter the second guess (b) = ";
cin>>b;
bisection(a,b);
return 0;
}