#include<stdio.h>
#include<iostream>
#include<math.h>
#include "threedim.h"
#include "square.h"
using namespace std;

Threedim::Threedim()
{

size=0;

  
}

Threedim::Threedim(int k){

  size=k;
  
}


int Threedim::getSize(){

  return size;
  
}

void Threedim::changeSquare(int a, int b, int c, float d, float e, float f){
 gol[a][b][c].setColor1(d);
 gol[a][b][c].setColor2(e);
 gol[a][b][c].setColor3(f);
  
}

void Threedim::iteration(){
  cout<<"iteration was called"<<endl;

  Square next [25][25][25];
  for(int q=0;q<25;q++){
    for(int r=0; r<25; r++){
      for(int s=0;s<25;s++){
        next[q][r][s]=gol[q][r][s];
      }
    }
  }

  for(int i=0;i<25;i++){
    for(int j=0; j<25; j++){
      for(int k=0;k<25;k++){
        
        int adj=0;
        for(int a=-1;a<=1;a++){
          for(int b=-1;b<=1;b++){
            for(int c=-1; c<=1; c++){
            if(gol[((i+a)%25+25)%25][((j+b)%25+25)%25][((k+c)%25+25)%25].getColor1()!=0){
            
              adj++;
              
              
            }
              }
          }
        }
/*
        if(gol[i][j][k].getColor1()>0){
          adj=adj-1;
        }
        
        if(adj<9){
          int val = next[i][j][k].getColor1();
          if(val!=0){
          next[i][j][k].setColor1(val-1);
            }
        }

        if(adj==5||adj==6||adj==7||adj==12||adj==13||adj==15){
          int val = next[i][j][k].getColor1();
          if(val==0){
          next[i][j][k].setColor1(4);
            }
        }
     */
        

        next[i][j][k].setColor1(adj);
        
        



        
      }
    }
  }
  
  for(int e=0;e<5;e++){
    for(int f=0;f<5;f++){
      for(int g=0;g<5;g++){
        gol[e][f][g]=next[e][f][g];
        
      }}}

  
  
}

void Threedim::display(){
  

  for(int c=0;c<5;c++){
    for(int b=0;b<25;b++){
      for(int a=0;a<25;a++){
        (gol[a][b][c]).printMe();
      }
      cout<<endl;
    }
    cout<<endl;
  
  }

cout<<"_______________"<<endl;
  
}
