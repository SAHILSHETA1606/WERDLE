#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <iostream>
#include<algorithm>
#include <iosfwd>
#include "guess.h"
	
using namespace std;
	
	guess::guess(string word)
	{
		static int n2=0;
		
    	for (int guesses = 0; guesses < 6; guesses++)
    		{
    			cout << "\nguess >";
        		string guess;
       			cin >> guess;
       			

        		// Assign return value from function into a variable 
        
        		bool correct_guess = check_guess(guess, word);

        		// If word is correctly guessed, break the loop and outpout a nice message
        		if (correct_guess)
        			{
        				switch (guesses)
						 {
  							case 0:
   							 cout << "impossible!\n\n";
   							 
    						break;
  							case 1:
    						 cout << "amazing!\n\n";
  						    break;
  							case 2:
   							 cout << "outstanding!\n\n";
    						break;
  							case 3:
   							 cout << "great!\n\n";
    						break;
  							case 4:
   							 cout << "nice one!\n\n";
    						break;
  							case 5:
   							 cout << "you got there!\n\n";
    						break;
    						default:
							 cout<<"try again\n\n";
							 
							}
							n1=guesses+1;
						break;
							
        			}
        			
        		else if(guesses==5)
        		{
        			n2++;
        			cout<< "\nCorrect answer:"<<word<<"\n\n";
        			n3=guesses+2;
        			
        			
				}
        			
        	
        			//cout << "You have " << 4 - guesses << " guesses left." << '\n';
    		}
    
	}
	
	int guess::getnum() 
		{
		return n1;
		}
	int guess::getnum2()
	{
	
		return n3;
		}	
    
	
	
    bool guess::check_guess(string user_guess, string word) 
		{
    		int letter_position[5] = { 0, 0, 0, 0, 0 }; // Init array length of 5 

    		// Iterate over the length of the user's guess 
    		for (int i = 0; i < user_guess.length(); i++)
    			{
        			// If the guessed word is not 5 characters long
        			if (user_guess.length() != word.length())
        				{
            				cout << "Must guess a 5 letter word!" << endl;
            				return false;
        				}

        			// If the guessed word is the same as the word to guess
        			if (user_guess.compare(word) == 0)
        				{
            				return true;
        				}

        			// Check if position i character is the same as position i in the word to guess
        			if (user_guess[i] == word[i])
        				{
           			 		// Increment value to 1
            				letter_position[i] = 1;

           					 // If position i in array is equal to 1, print out the character is in the correct position.
           					 if (letter_position[i] == 1)
            					{
                					 cout << "[" << user_guess[i]<< "]" <<" ";
                 					 continue; // breaks one iteration of the loop and jumps back up to the top of the loop
           						}
       					}
        			// If character (i) exists in user's guess print out if there is a match 
        			// npos is typically used to indicate there are no matches (so we check if there is NOT no matches)
        			// https://www.cplusplus.com/reference/string/string/npos/
        			if (word.find(user_guess[i]) != string::npos)
        				{
           					 cout << "|"<<user_guess[i]<<"|" <<" ";
        				}
        			else
        				{
            				cout << user_guess[i] <<" ";
        				}
    			}

    		return false;
		}


