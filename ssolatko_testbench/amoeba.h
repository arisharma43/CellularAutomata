#ifndef Amoeba_H
#define Amoeba_H
#include<stdio.h>
#include<string.h>
#include<iostream>
#include "square.h"

class Amoeba
{
public:
	int size;
  Square gol [30][30][30];
	
public:
	Threedim();
  Threedim(int);
	int getSize();
  void changeSquare(int,int,int, float, float, float);
  void iteration();
	void display();
  

};

#endif // GRID_H
