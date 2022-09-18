#include "game.h"
#include "session.h"
#include <iostream>
#include <string>
#include <iostream>
#include<algorithm>
#include <iosfwd>

using namespace std;
game::game(){
}

void game::game1(){

cout << "WELCOME TO WERDLE.\n";
	cout << "Select An Option:\n\n\n";
	cout << "1. Play a game\n";
	cout << "2. View statistic\n";
	cout << "3. View help\n";
	cout << ">";
	cin >> n;
	n1(n);  // error avti hati atle function
}

void game::n1(int n){
	static int a=0; // ek j waar value 0 karvi che atle 
	
	if(n==1)
	{
		j++;
		
		session s;
		
		n2=	s.getnum();
	
		n3=s.getnum2();
		if(n3==7)
		{
			a++;
			k=1;
			
		}
		else{
			k=0;
		}
		if(k==0)
		{
			k1++;
			get<1>(m)=k1;
		}
		else{
			get<1>(m)=k1;
			k1=0;
		}
		
		game1();
		
		
	}
	
	else if(n==2){
		
	
		cout<<"played: "<<j<<" ";
		get<0>(w)= (float)a/j;
		
		
		get<0>(w)=1-get<0>(w);
	
		get<1>(w)=get<0>(w)*100;
		cout<<"win%: "<<get<1>(w)<<" ";
		
		get<0>(m)=maxx;
		maxx=get<1>(m);
		maxx=max(get<0>(m),maxx);
		cout<<"current streak:"<<" "<<k1<<" "<<" max streak: "<<maxx<<endl;
		cout<<"\n\n";
		
		cout<<"GUESS DISTRIBUTION\n";
		int g=1;
		for(int i=0;i<6;i++)
		{
			if(g==n2)
			{
				cout<<g<<":1\n";
				g++;
			}
			else{
				cout<<g<<":0\n";
				g++;
			}
			
			
		}
		cout<<"\n\n";
		game1();
			
	}
	else{
		cout<<"guess the wredle in six tries.\n\n\n";
		cout<<"each guess must be a five-letter word.hit the enter button to submit\n ";
		cout<<"examples\n";
		cout<<"[A] P P L E\n";
		cout<<"THE LETTER A IS IN THE CORRECT POSITION\n";
		cout<<"D |E| A L T\n";
		cout<<"THE LETTER E IS IN THE WORD BUT AT WRONG POSITION\n\n\n\n";
		game1();
	}
}
