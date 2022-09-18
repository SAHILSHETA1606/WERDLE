#ifndef GUESS_H
#define GUESS_H
#include<bits/stdc++.h>

#include <iostream>
#include <string>
#include <iostream>
#include<algorithm>
#include <iosfwd>

using namespace std;

class guess  // class
{
	int n1;
	int n3;

	public:
	
	guess(string word);
	
	int getnum();
	int getnum2();
    
	
	
    bool check_guess(string user_guess, string word) ;
};
#endif
