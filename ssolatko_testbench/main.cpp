
#include<stdio.h>
#include<iostream>
#include<math.h>
#include "lifegrid.h"
#include "threedim.h"
#include "square.h"
using namespace std;

int main() {
  std::cout << "Hello World!\n";
 
  cout<<endl;
  cout<<endl;

  Threedim* bye=new Threedim(25);
  bye->display();
  
  /*
  for(int i=10;i<17;i++){
    hi->changeSquare(4,i,1);
  }
  hi->display();
  hi->iteration();
  cout<<endl;
  hi->display();
  hi->iteration();
  cout<<endl;
  hi->display();
  hi->iteration();
  cout<<endl;
  hi->display();
  hi->iteration();
  cout<<endl;
  hi->display();
  hi->iteration();
  cout<<endl;
  hi->display();
  
*/

float simple=3.55;
  cout<<simple<<endl;

  int a=5;
  int b=5;
  

while(a<10){
  while(b<10){
      if(b%2==1){
      bye->changeSquare(a,b,0,1,0,0);
        }
    b++;
    

  }
  b=5;
  a++;
}
 
    bye->changeSquare(2,3,0,1,0,0);
    bye->changeSquare(2,4,0,1,0,0);
    bye->changeSquare(2,2,0,1,0,0);
  bye->display();
  bye->iteration();
cout<<"iteration was called!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
  bye->display();
  /*
  bye->iteration();
  bye->display();
*/




  
}


