#ifndef GAME_H
#define GAME_H
#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <iostream>
#include<algorithm>
#include <iosfwd>
#include <tuple>
using namespace std;
class game {        // The class
  public:
  	int n; 
  	int i;
  	int j=0;
  	int n2,n3;
  	int k=0,k1=0;
  	int maxx=0;
  	tuple <int,int> m;
	tuple <float,float> w,w1;
  	
  	game();
  	
	void game1(); //error avti hati atle function
	void n1(int n);
};
#endif
