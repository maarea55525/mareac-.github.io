#include<iostream>
using namespace std;
 void multip( double x , double y){

   cout <<x*y<<"\n";
 }
 void sum( double x , double y){

   cout<<x+y<<"\n";
 }
 void device( double x , double y){
   cout<<x/y<<"\n";
 }
 
 int  main(){ 
 int x , y;
   cout <<" Input  x =" ;
   cin>>x;
   cout<<" Input y = ";
   cin>>y;
   cout<<"Total:";
    multip(x,y);
    sum(x,y);
    device(x,y);

   return 0;
 }
