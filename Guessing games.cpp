/* MUHAMMAD HAYYAN
23I-2041____CY-A
Assignment#04_____Q3a */

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
		//Program to play guessing games
	int game, random1, random2, random3, n1, n2, n3;
	char c;
	
	//Displaying menu
	cout<< "\n\t -------- GUESSING GAMES --------- \n";
	cout<< "\n\n\t 1. Play Higher or Lower \n";
	cout<< "\n\t 2. Play paper - scissor - rock \n";
	cout<< "\n\t 3. Guess the numbers \n";
	cout<< "\n\t 4. Quit \n";
	cout<< "\n Enter your choice ( 1 - 4 ) : ";
	cin>> game;

	srand(time(NULL));
	
	//Higher or lower
	if (game == 1)
	{
		//Displaying game menu
		cout<< "\n\n\t ---------- HIGHER OR LOWER ---------- \n";
		cout<< "\n Press Enter to start the game - ";
		cin.ignore();
		cin.get();
		
		//Generating randoms
		random1 = (rand()%20)+1;
		random2 = (rand()%20)+1;
		
		//taking input
		cout<< "\n\n First Number is : "<<random1<<endl;
		cout<< "\n Guess the second number! Will it be Higher or Lower?\n";
		cout<< "\n Enter H for higher OR L for lower: ";
		cin>> c;
		
		//Checking if user guessed correctly or not
		if (c == 'h' || c == 'H')
		{
			if (random2>random1)
			{
				cout<< "\n\n You won! Your guess was correct \n";
				cout<< "\n Second number was : "<<random2<<endl;
			}
			else if (random2<random1)
			{
				cout<< "\n\n You lost :( Your guess was incorrect \n";
				cout<< "\n Second number was : "<<random2<<endl;
			}
				else 
					cout<< "\n\n Tie! Second number was same \n";	
		}
		else if (c == 'l' || c == 'L')
		{
			if (random1>random2)
			{
				cout<< "\n\n You won! Your guess was correct \n";
				cout<< "\n Second number was : "<<random2<<endl;
			}
			else if (random1<random2)
			{
				cout<< "\n\n You lost :( Your guess was incorrect \n";
				cout<< "\n Second number was : "<<random2<<endl;
			}	
				else 
					cout<< "\n\n Tie! Second number was same \n";	
		}
		else 
			cout<< "\n\n Invalid Input! Please Enter only H or L \n";
	}
	
	//Rock paper scissor
	else if (game == 2)
	{
		//Displaying game menu
		cout<< "\n\n\t ---------- PAPER - SCISSOR - ROCK ---------- \n";
		cout<< "\n Press Enter to start the game - ";
		cin.ignore();
		cin.get();
	
		//generating random
		random1 = (rand()%3)+1;
		
		//taking input
		cout<< "\n\n Enter P for paper, S for scissor, R for rock : ";
		cin>> c;
		
		//checking conditions
		if (c == 'p' || c == 'P')
		{
			if (random1 == 3)
			{
				cout<< "\n\n Computer: Rock\t You: Paper \n";
				cout<< "\n You won!\n";
			}
			else if (random1 == 2)
			{
				cout<< "\n\n Computer: Scissor\t You: Paper \n";
				cout<< "\n You lost :( Computer won\n";
			}
				else 
				{
					cout << "\n\n Computer: Paper\t You: Paper \n";
					cout<< "\n Its a Tie ! \n";
				}
		}
		else if (c == 's' || c == 'S')
		{
			
			if (random1 == 1)
			{
				cout<< "\n\n Computer: Paper\t You: Scissor \n";
				cout<< "\n You won!\n";
			}
			else if (random1 == 3)
			{
				cout<< "\n\n Computer: Rock\t You: Scissor \n";
				cout<< "\n You lost :( Computer won \n";
			}
				else 
				{
					cout << "\n\n Computer: Scissor\t You: Scissor \n";
					cout<< "\n Its a Tie ! \n";
				}
		}
			
			else if (c == 'r' || c == 'R')
			{
			
				if (random1 == 2)
				{
					cout<< "\n Computer: Scissor\t You: Rock \n";
					cout<< "\n You won!\n";
				}
				else if (random1 == 1)
				{
					cout<< "\n\n Computer: Paper\t You: Rock \n";
					cout<< "\n You lost :( Computer won \n";
				}
					else 
					{
						cout << "\n\n Computer: Rock\t You: Rock \n";
						cout<< "\n Its a Tie ! \n";
					}
			}
			     else 
			     	cout<< "\n\n Invalid Input! Please enter only P or S or R \n"; 
	}
	
	//Guess the numbers
	else if (game == 3)
	{
		//Displaying game menu
		cout<< "\n\n\t ---------- GUESSING THE NUMBERS ---------- \n";
		cout<< "\n Press Enter to start the game - ";
		cin.ignore();
		cin.get();
		
		//Generating randoms
		random1 = (rand()%10);
		random2 = (rand()%10);
		random3 = (rand()%10);
		
		//taking inputs
		cout<< "\n\n Guess the first number (0-9) : ";
		cin>> n1;
		cout<< "\n\n Guess the second number (0-9) : ";
		cin>> n2;
		cout<< "\n\n Guess the third number (0-9) : ";
		cin>> n3;
		
		//checking conditions
		if ( (n1>=0 && n1<=9) && (n2 >=0 && n2<=9) && (n3 >=0 && n3<=9))
		{
			if (n1 == random1 && n2 == random2 && n3 == random3)
			{
				cout<< "\n\n You guessed all numbers correctly in exact order!\n";
			}
			
			else if ( (n1==random1 || n1==random2 || n1==random3) && (n2==random1 || n2==random2 || n2==random3) && (n3==random1 || n3==random2 || n3==random3))
			{
				cout<< "\n\n You guessed all numbers correctly but not in exact order \n";
			}
				
				else if ( (n1==random1 && n2==random2) || (n1==random1 && n3==random3) || (n2==random2 && n3==random3) )
				{
					cout<< "\n\n You guessed two numbers correctly \n";
				}
				
					else if (n1 == random1 || n2 == random2 || n3 == random3)
					{
						cout<< "\n\n You guessed one number correctly \n";
					}
					
						else 
						{
							cout<< "\n\n You didn't guess any number correctly :( \n";
						}
					
		
		}
		else 
		{
			cout<< "\n\n Invalid Input! Please enter a number in range 0 to 9 \n";
		}
	}
	else if (game == 4)
	{
	}
	else 
		cout<<"\n\nInvalid Input! Please enter number in range 1 to 4\n";
	
	
	return 0;	
}
