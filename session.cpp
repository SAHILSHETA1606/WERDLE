#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <iostream>
#include<algorithm>
#include <iosfwd>
#include "session.h"
#include "Dictionary.h"
#include "guess.h"
using namespace std;

session::session(){       //constucter
			
			static int j=0;
		
			
			string b;
			Dictionary d;
			string a = d.d1(j);
			guess g(a);	
				j++;
			n=g.getnum();
			n2=g.getnum2();
			//cout<<"-------------------------"<<n<<"-----------\n";
			//cout<<"j="<<j;	
			
		}
		
int session::getnum() 
	{
		return n;
	}
	
int session::getnum2() 
	{
		
		return n2;
	}
