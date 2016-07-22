# ifndef _FUNCTIONS_H
# define _FUNCTIONS_H
# define WINDOW_WIDTH_SIZE 79
# define WINDOW_HEIGHT_SIZE 45
# define CLRBUF cin.ignore(cin.rdbuf()->in_avail())
# include <iomanip>
# include <string>
# include <iostream>
//# include "bsscn.h"
#define BUFSIZE 100

using namespace std;

#pragma comment (lib, "winmm.lib")
#pragma warning( disable : 4244)
//#pragma warning( disable : 4101)


void ungetch2(int c)   /* push character back on input */
{
char buf[BUFSIZE];    /* buffer for ungetch */
   int bufp = 0;         /* next free position in buf */


	if (bufp >= BUFSIZE)
		;
	else
	buf[bufp++] = c;
   }


//centering with endl
void output(string line)
{
for (unsigned i = 0; i < (80 - line.length())/2; ++i)
cout << " ";
cout << line << endl;
}
//centering without endl
void noendl (string line)
{
for (unsigned i = 0; i < (80 - line.length())/2; ++i)
cout << " ";
cout << line;
}

void right(string line)
{
for (unsigned i = 0; i < (80 - line.length()); ++i)
cout << " ";
cout << line << endl;
}

int birish (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}

int hug (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.00) - edef / 5);

return dmg;
}

int dance (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.50) - edef / 5);

return dmg;
}
int smileat (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 0.5);

return dmg;
}
int tickle (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int partywith (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1);

return dmg;
}
int poke (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int gtow (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.00) - edef / 5);

return dmg;
}
int pat (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int blowbubbles (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 2) - edef / 5);

return dmg;
}
int high5 (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int watchtv (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1.00);

return dmg;
}
int gotobonfire (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int playhalo (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 2);

return dmg;
}
int givegift (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1.5);

return dmg;
}
int shun (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int eat (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int bhug (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 2) - edef / 5);

return dmg;
}
int runaway (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int beasian (int str, int edef, int spd)
{
int dmg;
dmg = ((((str + spd) / 10) * 2) - edef / 5);

return dmg;
}
int playsoccer (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int playtag (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int wink (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int bother (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int hackcpu (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int debate (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 2) - edef / 5);

return dmg;
}
int chat (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1);

return dmg;
}
int makeied (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int piggybackride (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int bnerdy (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}
int gethairdone (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.00) - edef / 5);

return dmg;
}
int stfu (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 2) - edef / 5);

return dmg;
}
int playff (int str, int edef, int spd)
{
int dmg;
dmg = ((((spd + str) / 5) * 2) - edef / 5);

return dmg;
}
int telljoke (int str, int edef, int charisma)
{
int dmg;
dmg = ((((charisma + str) / 10) * 1.5) - edef / 7);

return dmg;
}
int playtt (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}
int playguitar (int str, int edef, int spd, int charisma)
{
int dmg;
dmg = ((((str + spd + charisma) / 10) * .75) - edef / 7);

return dmg;
}
int sing (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1.5);

return dmg;
}
int pinkypromise (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.00) - edef / 5);

return dmg;
}

int eatrice (int str, int edef, int charisma, int spd)
{
int dmg;
dmg = ((((charisma + spd) / 10) * 1.00) - edef / 7);

return dmg;
}

int playviolin (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}

int spam (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}

int tap (int str, int edef, int spd)
{
int dmg;
dmg = (((spd / 5) * 1.5) - edef / 5);

return dmg;
}

int goshopping (int str, int eedef, int spd)
{
int dmg;
dmg = (((str + spd) / 5) * 1.00);

return dmg;
}

int talk (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.0) - edef / 5);

return dmg;
}

int listenm (int str, int edef, int charisma)
{
int dmg;
dmg = ((charisma / 5) * 1.00);

return dmg;
}

int ignore2 (int str, int edef)
{
int dmg;
dmg = (((str / 5) * 1.5) - edef / 5);

return dmg;
}

void clear2() //something that turned into something with the same effect as system ("cls") 
{
	int b = 0;
	COORD coord;
	coord.X = 0; coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
	for (int a = 80; a > 0; a--)
	{
	coord.X = 0; coord.Y = b;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
	cout << "                                                                                ";
	b++;
	}
	coord.X = 0; coord.Y = 0;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
}

void sscn (char screen[][81], int r)
{
		for (short r = 0; r < 21; r++) //r = rows
		{
			for (short c = 0; c < 81; c++) // c = columns
				cout << screen[r][c];
			cout << endl;
		}
}

void gym (int &rows, int &columns, double &money, int &str, int &spd, char screen [][81], char a)
{
	if ((rows == 19 && (columns == 48 || columns == 49 || columns == 50)))
		{
			int choice;

			do
			{
			cout << "Welcome to the gym. All courses here take $500. What would you like to do?" << endl; 
			cout << "1. Increase Strength \n2. Increase Speed \n3. Exit" << endl;
			cin >> choice;
			
				if ((choice == 1 || choice == 2) && money < 500)
				{
				cout << "Sorry you do not have enough money. Please leave...";
				if (a == 's')
				{
				rows -= 1;
				}

				if (a == 'a')
				{
				columns += 1;
				}

				if (a == 'd')
				{
				columns -= 1;
				}
				Sleep(2000);

				char sp = ' ';
				screen [18][50] = sp;
				screen [18][48] = sp;
				system("cls");
				break;
				}

				else if (choice == 1)
				{
				cout << "You chose to train in your strength. 10 PUSH UPS!" << endl;
				cout << "Your strength increased by 5";
				money -= 500;
				str += 5;
				}

				else if (choice == 2)
				{
				cout << "You chose to train your speed. 10 LAPS!" << endl;
				cout << "Your speed increased by 5";
				money -= 500;
				spd += 5;
				}

				else if (choice == 3)
				{
				cout << "You chose to leave. Bye Bye.";

				if (a == 'w')
				{
				rows += 1;
				}

				if (a == 's')
				{
				rows -= 1;
				}

				if (a == 'a')
				{
				columns += 1;
				}

				if (a == 'd')
				{
				columns -= 1;
				}
				Sleep(2000);

				char sp = ' ';
				screen [18][50] = sp;
				screen [18][48] = sp;
				system("cls");
				}
			}while (choice != 3);
	}
}

void shop (int &rows, int &columns, double &money, int &charisma, int &grouch, int &befriend)
{
	if ((rows == 17 && (columns == 22 || columns == 28 )) || (rows == 16 && (columns == 24 )) || (rows == 18 && (columns == 24)))
	{

		int choice;
		int many;
		int amount;
		char cont;
		char enterthing;

		cout << "Would you like to enter into the store? y/n"<<endl;
		cin >> enterthing;

		if (enterthing == 'n' || enterthing == 'N')
			return;
		else
		{

		while (1)
		{
			cout << "Welcome to the Academy Shop!\n"<<endl;
			cout << "What would you like to buy?\n"<<endl;
			cout << left << setw (30)<< setfill (' ')<< "1. Buy a Grouch";
			cout << left << setw (2) << setfill (' ')<<grouch;
			cout << " Own grouch(es)"<<endl;
			cout << left << setw (30)<< setfill (' ')<< "2. Buy a Befriend";
			cout << left << setw (2) << setfill (' ')<<befriend;
			cout << " Own befriend(s)"<<endl;
			cout << "3. Leave shop."<<endl<<endl<<endl;

			cout <<"Amount of money: "<<money<<" Yen"<<endl;
		
			cin >> choice;

			if (choice == 1)
			{
				cout << "How many grouches?"<<endl;
				cin >>many;
				amount = 200*many;
				if (amount > money)
				{
					cout << "You don't have enough money."<<endl;
				}
			
				else
				{
					money = money - amount;
					grouch = grouch + many;
					charisma = charisma/2;
					cout << "You purchased " << many << " grouch(es)!"<<endl;
					cout << "You have " << money<<" Yen left."<<endl;
				}
				cout << "Would you like to purchase more items? y/n"<<endl;
				cin >> cont;
				if (cont == 'y' || cont == 'Y')
				{
					Sleep (1000);
					system ("cls");
				}
				else 
				{
					cout << "Bye bye!"<<endl;
					system ("cls");
					return;
				}
			}
			if (choice == 2)
			{
				cout << "How many befriends?"<<endl;
				cin >>many;
				amount = 100*many;
				if (amount > money)
					cout << "You don't have enough money."<<endl;
				else 
				{
					money = money - amount;
					befriend = befriend + many;			
					charisma = charisma/2;				
					cout << "You purchased " << many << " befriend(s)!"<<endl;
					cout << "You have " << money<<" Yen left."<<endl;
				}
				cout << "Would you like to purchase more items? y/n"<<endl;
				cin >> cont;
				if (cont == 'y' || cont == 'Y')
				{
					Sleep (1000);
					system ("cls");
				}
				else 
				{
					cout << "Bye bye!"<<endl;
					system ("cls");
					return;
				}
			}
			if (choice == 3)
			{
				cout << "Bye bye!"<<endl;
				system ("cls");
				return;
			}


		}//while
		}
		
	}//check wall if statement
	return;
}//function

void hobo (int &rows, int &columns, double &money, int &charisma) //Hobo. nuf said.
{
	char answer; 

	if ( rows == 18)
	{
		if (columns == 76)
		{
			system ("cls");
			cout << "As you near the corner of the school you see the corner is not deserted. \nYou see a man dressed in rags huddled in the corner. \nHe notices you and walks up to you. \nHe whispers to you \"I can teach you some tricks to become more friendly with some people (wink wink nudge nudge). \nBut, there is a price of 1000 of whatever currency you use. Would you like to learn from me? [y\\n]" << endl;
			cin >> answer;
				if (answer == 'n' || answer == 'N')
				{
					cout << "Aww, you made the hobo sad. He goes back to the emo corner." << endl;
					Sleep (3000);
					system ("cls");
					return;
				}
				else if (answer == 'y' || answer == 'Y')
				{
					if (money < 1000)
					{
						cout << "I may be a hobo, but I can still count! The hobo goes back to his secluded corner." << endl;
						Sleep (3000);
						system ("cls");
						return;
					}
					if ( money >= 1000)
					{
						cout << "The hobo whispers in your ear some friendly advice, you now know how to be more friendly. Your charisma increases by 5." << endl;
						charisma +=5;
						money = money - 1000;
						cout << " You have "<<money<< " Yen left and you now have "<<charisma<< " in total."<<endl;
						Sleep (3000);
						system ("cls");
						return;
					}
				}
		}
	}//if
}//function

//wall
int wall (int &rows, int &columns, double &money, int &str, int &spd, char screen [][81], char a, int &charisma, int &grouch, int &befriend)
{
	// places -INCOMPLETE
	// gym -INCOMPLETE

	shop (rows, columns, money, charisma, grouch, befriend);
	hobo (rows, columns, money, charisma);
	gym (rows, columns, money, str, spd, screen, a);

	if ((rows == 1 && (columns == 23 || columns == 24 || columns == 25 || columns == 71 || columns == 72 || columns == 73)))
	{
		string choice;
		cout << "Would you like to use the stairs? (yes / no)" << endl;
		cin >> choice;
			if (choice == "yes")
			{
			return 4;
			}
			else
			{
				if (a == 'w')
					{
					rows += 1;
					}

					if (a == 's')
					{
					rows -= 1;
					}

					if (a == 'a')
					{
					columns += 1;
					}

					if (a == 'd')
					{
					columns -= 1;
					}
			system("cls");
			return 3;
			}
	}
	
	else if ((rows == 19 && (columns == 0 || columns == 1 || columns == 2 || columns == 3 || columns == 4 || columns == 5 || columns == 6 || columns == 7 || columns == 8 || columns == 9 || columns == 10 || columns == 11 || columns == 12 || columns == 13 || columns == 14 || columns == 15 || columns == 16 || columns == 17 || columns == 18 || columns == 19 || columns == 20 || columns == 21 || columns == 25 || columns == 26 || columns == 27 || columns == 28 || columns == 29 || columns == 30 || columns == 31 || columns == 32 || columns == 33 || columns == 34 || columns == 35 || columns == 36 || columns == 37 || columns == 38 || columns == 39 || columns == 40 || columns == 41 || columns == 42 || columns == 43 || columns == 44 || columns == 45 || columns == 46 || columns == 47 || columns == 51 || columns == 52 || columns == 53 || columns == 54 || columns == 55 || columns == 56 || columns == 57 || columns == 58 || columns == 59 || columns == 60 || columns == 61 || columns == 62 || columns == 63 || columns == 64 || columns == 65 || columns == 66 || columns == 67 || columns == 68 || columns == 69 || columns == 70 || columns == 71 || columns == 72 || columns == 73 || columns == 74 || columns == 75 || columns == 76 || columns == 77 || columns == 78 || columns == 79 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 0 && (columns == 0 || columns == 1 || columns == 2 || columns == 3 || columns == 4 || columns == 5 || columns == 6 || columns == 7 || columns == 8 || columns == 9 || columns == 10 || columns == 11 || columns == 12 || columns == 13 || columns == 14 || columns == 15 || columns == 16 || columns == 17 || columns == 18 || columns == 19 || columns == 20 || columns == 21 || columns == 22 || columns == 23 || columns == 24 || columns == 25 || columns == 26 || columns == 27 || columns == 28 || columns == 29 || columns == 30 || columns == 31 || columns == 32 || columns == 33 || columns == 34 || columns == 35 || columns == 36 || columns == 37 || columns == 38 || columns == 39 || columns == 40 || columns == 41 || columns == 42 || columns == 43 || columns == 44 || columns == 45 || columns == 46 || columns == 47 || columns == 48 || columns == 49 || columns == 50 || columns == 51 || columns == 52 || columns == 53 || columns == 54 || columns == 55 || columns == 56 || columns == 57 || columns == 58 || columns == 59 || columns == 60 || columns == 61 || columns == 62 || columns == 63 || columns == 64 || columns == 65 || columns == 66 || columns == 67 || columns == 68 || columns == 69 || columns == 70 || columns == 71 || columns == 72 || columns == 73 || columns == 74 || columns == 75 || columns == 76 || columns == 77 || columns == 78 || columns == 79 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 1 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 2 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 3 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}
 
	else if ((rows == 4 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}
 
	else if ((rows == 5 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 6 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 7 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 8 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 9 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 10 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 11 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 12 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 13 && (columns == 20 || columns == 78 || columns == 29 || columns == 67)))
	{
	return 0;
	}

	else if ((rows == 14 && (columns == 20 || columns == 78 || columns == 29 || columns == 67 || columns == 30 || columns == 31 || columns == 32 || columns == 33 || columns == 34 || columns == 35 || columns == 36 || columns == 37 || columns == 38 || columns == 39 || columns == 40 || columns == 41 || columns == 42 || columns == 43 || columns == 44 || columns == 59 || columns == 60 || columns == 61 || columns == 62 || columns == 63 || columns == 64 || columns == 65 || columns == 66)))
	{
	return 0;
	}

	else if ((rows == 15 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 16 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 17 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 18 && (columns == 20 || columns == 78)))
	{
	return 0;
	}

	else if ((rows == 19 && (columns == 20 || columns == 78)))
	{
	return 0;
	}
	
		return 1;
}

void lvlup (int &hp, int &def, int &str, int &spd, int charisma, int &lvl, int xp)
{
	int hm = 15;
	int choice;

	
	if ((lvl == 1 && xp >= 300) || (lvl == 2 && xp >= 800) || (lvl == 3 && xp >= 1500) || (lvl == 4 && xp >= 2400) || (lvl == 5 && xp >= 3500) || (lvl == 6 && xp >= 4800) || (lvl == 7 && xp >= 6300) || (lvl == 8 && xp >= 8000) || (lvl == 9 && xp >= 9900))
	{
	cout << "Congratulations! You leveled up!. Please allocate your stat points. " << endl;
	cout << "Which stat(s) would you like to increase?" << endl;
	cout << "1. Strength+ \n2. Strength+5" << endl;
	cout << "3. Health+ \n4. Health+5" << endl;
	cout << "5. Defense+ \n6. Defense+5" << endl;
	cout << "7. Speed+ \n8. Speed+5" << endl;
	cout << "9. Charisma+ \n10. Charisma+5" << endl;
	
	while (hm > 0)
	{
	cin >> choice;

	if (choice == 1)
	{
	hm -= 1;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 1;
		}

		else
		str += 1;
		
	}
	if (choice == 2)
	{
	hm -= 5;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 5;
		}
		
		else
		str += 5;
	}
	if (choice == 3)
	{
	hm -= 1;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 1;
		}
		else 
		hp += 1;
	}
	if (choice == 4)
	{
	hm -= 5;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 5;
		}
		
		else 
		hp += 5;
	}
	if (choice == 5)
	{
	hm -= 1;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 1;
		}

		else
			def += 1;
	}
	if (choice == 6)
	{
	hm -= 5;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 5;
		}

		else
		def += 5;
	}
	if (choice == 7)
	{
	hm -= 1;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 1;
		}

		else
		spd += 1;
	}
	if (choice == 8)
	{
	hm -= 5;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 5;
		}

		spd += 5;
	}

	if (choice == 9)
	{
	hm -= 1;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 1;
		}

		else
		charisma += 1;
	}
	if (choice == 10)
	{
	hm -= 5;
		if (hm < 0)
		{
		cout << "You do not have enough skill points." << endl;
		hm += 5;
		}

		charisma += 5;
	}


	cout << "You have " << hm << " skill points left.";

		if (choice == 1 || choice == 2)
		{
		cout << "You now have " << str << " strength!";
		}

		if (choice == 3 || choice == 4)
		{
		cout << "You now have " << hp << " health points!";
		}

		if (choice == 5 || choice == 6)
		{
		cout << "You now have " << def << " defense!";
		}

		if (choice == 7 || choice == 8)
		{
		cout << "You now have " << spd << " speed!";
		}

		if (choice == 9 || choice == 10)
		{
		cout << "You now have " << charisma << " charisma!";
		}
	}
	lvl += 1;
	Sleep(1500);
	}
}


int win (int ehp, unsigned short &echp, int &exp, double &money, unsigned short &chp, int hp, int lvl, int &afid, int def, int str, int spd, int charisma, int ad)
{

	int dmg;

	srand((unsigned)time(0));
	if (lvl == 1)
	{
	dmg = 1 + rand() % 2;
	}

	else if (lvl == 2)
	{
	dmg = 2 + rand() % 5;
	}

	if (lvl == 3)
	{
	dmg = 3 + rand() % 6;
	}

	if (lvl == 4)
	{
	dmg = 4 + rand() % 7;
	}

	if (lvl == 5)
	{
	dmg = 5 + rand() % 8;
	}

	if (lvl == 6)
	{
	dmg = 5 + rand() % 9;
	}

	if (lvl == 7)
	{
	dmg = 5 + rand() % 12;
	}

	if (lvl == 8)
	{
	dmg = 6 + rand() % 13;
	}

	if (lvl == 9)
	{
	dmg = 7 + rand() % 13;
	}

	if (lvl == 10)
	{
	dmg = 9 + rand() % 14;
	}
	
	if (echp >= ehp)
	{
	cout << "You won the bat- encounter! YAY!" << endl;

	srand((unsigned)time(0));
	int xp = rand();
	int mon = rand();
	xp = 80 + rand() % 120;
	mon = 50 + rand() % 150;
	exp += xp;
	money += mon;
	lvlup (hp, def, str, spd, charisma, lvl, xp);

	cout << "You gained " << xp << " experience and " << mon << " yen.";

	return 2;
	}
	
	chp += dmg;
	if (chp >= hp)
	{
	cout << "RUH-OH! Your freshman fainted from being loved so much! (OMG!)";
	return 1;
	}

	return 0;
}

//INCOMPLETE
//INCOMPLETE
//INCOMPLETE
//INCOMPLETE
//INCOMPLETE
//INCOMPLETE
//INCOMPLETE
int actions (int &ehp, int choice, int dmg, int &xp, double &money, int action, unsigned short echp, unsigned short hp, unsigned short chp, int lvl, int afid, int item, int &f2, int &f3, int &f4, int &f5, int &f6, int estr, int edef, int espd, int elvl, string ename, int &f2str, int &f2def, int &f2spd, int &f2charisma, int &f2hp, int &f3str, int &f3def, int &f3spd, int &f3charisma, int &f3hp, int &f4str, int &f4def, int &f4spd, int &f4charisma, int &f4hp, int &f5str, int &f5def, int &f5spd, int &f5charisma, int &f5hp, int &f6str, int &f6def, int &f6spd, int &f6charisma, int &f6hp, string f2n, string f3n, string f4n, string f5n, string f6n, int afdef, int afstr, int afspd, int afcharisma, int bw1, int bw2, int bw3, int bw4, int bw5, int bw6, int bw7, int bw8, int bw9, int bw10, int bw11, int bw12, int bw13, int bw14, int bw15, int bw16, int bw17, int bw18, int bw19, int bw20, int bw21, int bw22, int bw23, int bw24, int bw25, int bw26, int bw27, int bw28, int bw29, int bw30, int bw31, int bw32, int bw33, int bw34, int ad1, int ad2, int ad3, int ad4, int ad5, int ad6, int &balls, int echarisma)
{
	if (choice == 1)
	{
	cout << "You gave the enemy " << dmg << " hearts! (That is good not bad. If the enemy loses hearts,  THEN thats bad.)";
	}
	
	short cchance = rand();
	srand((unsigned)time(0));	
	cchance = 1 + rand() % 100;
	if (item == 2)
	{
	cout << "You attempt to catch the enemy.";

	Sleep(2000);
		COORD coord;
		coord.X = 0; coord.Y = 0;
		SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE),coord);
			if (cchance <= 45)
			{
			cout << "You have captured the enemy! Yay.";
			cout << endl;
				if (ename == "payal")
				{
					bw1 = 1;
					if (f2 == 0)
					{
						f2n = "payal";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "payal";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3= 1;
					}
					else if (f4 == 0)
					{
						f4n = "payal";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "payal";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "payal";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}
				if (ename == "alyssa")
				{
					bw2 = 1;
					if (f2 == 0)
					{
						f2n = "alyssa";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "alyssa";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "alyssa";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "alyssa";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "alyssa";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}
				if (ename == "erics")
				{
					bw3 = 1;
					if (f2 == 0)
					{
						f2n = "erics";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "erics";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "erics";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "erics";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
					}
					else if (f6 == 0)
					{
						f6n = "erics";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}
				if (ename == "kamil")
				{
					bw4 = 1;
					if (f2 == 0)
					{
						f2n = "kamil";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "kamil";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "kamil";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "kamil";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
					}
					else if (f6 == 0)
					{
						f6n = "kamil";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}
				if (ename == "shreyas")
				{
					bw5 = 1;
					if (f2 == 0)
					{
						f2n = "shreyas";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "shreyas";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "shreyas";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "shreyas";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
					}
					else if (f6 == 0)
					{
						f6n = "shreyas";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}
				if (ename == "bri") 
				{
					bw6 = 1;
					if (f2 == 0)
					{
						f2n = "bri";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "bri";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "bri";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "bri";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "bri";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "kim")
				{
					bw7 = 1;
					if (f2 == 0)
					{
						f2n = "kim";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "kim";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "kim";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "kim";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "kim";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "ameen")
				{
					bw8 = 1;
					if (f2 == 0)
					{
						f2n = "ameen";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "ameen";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "ameen";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "ameen";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "ameen";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "revan")
				{
					bw9 = 1;
					if (f2 == 0)
					{
						f2n = "revan";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "revan";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "revan";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "revan";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "revan";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "puneet")
				{
					bw10 = 1;
					if (f2 == 0)
					{
						f2n = "puneet";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "puneet";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "puneet";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "puneet";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "puneet";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "jake")
				{
					bw11 = 1;
					if (f2 == 0)
					{
						f2n = "jake";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "jake";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "jake";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "jake";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "jake";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "kelli")
				{
					bw13 = 1;
					if (f2 == 0)
					{
						f2n = "kelli";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "kelli";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "kelli";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "kelli";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "kelli";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "laura")
				{
					bw14 = 1;

					if (f2 == 0)
					{
						f2n = "laura";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "laura";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "laura";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "laura";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "laura";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "subhashini")
				{
					bw15 = 1;
					if (f2 == 0)
					{
						f2n = "subhashini";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "subhashini";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "subhashini";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "subhashini";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "subhashini";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "anat")
				{
					bw16 = 1;
					if (f2 == 0)
					{
						f2n = "anat";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "anat";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "anat";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "anat";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "anat";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "matt")
				{
					bw17 = 1;
					if (f2 == 0)
					{
						f2n = "matt";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "matt";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "matt";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "matt";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "matt";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "alan")
				{
					bw18 = 1;
					if (f2 == 0)
					{
						f2n = "alan";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "alan";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "alan";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "alan";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "alan";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "sagar")
				{
					bw19 = 1;
					if (f2 == 0)
					{
						f2n = "sagar";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "sagar";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "sagar";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "sagar";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "sagar";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "arnav")
				{
					bw20 = 1;
					if (f2 == 0)
					{
						f2n = "arnav";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "arnav";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "arnav";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "arnav";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "arnav";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "kevin")
				{
					bw21 = 1;
					if (f2 == 0)
					{
						f2n = "kevin";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "kevin";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "kevin";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "kevin";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "kevin";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "ericj")
				{
					bw22 = 1;
					if (f2 == 0)
					{
						f2n = "ericj";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "ericj";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "ericj";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "ericj";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "ericj";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "rishi")
				{
					bw24 = 1;
					if (f2 == 0)
					{
						f2n = "rishi";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "rishi";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "rishi";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "rishi";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "rishi";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "raeesa")
				{
					bw25 = 1;
					if (f2 == 0)
					{
						f2n = "raeesa";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "raeesa";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "raeesa";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "raeesa";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "raeesa";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "gloria")
				{
					bw26 = 1;
					if (f2 == 0)
					{
						f2n = "gloria";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "gloria";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "gloria";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "gloria";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "gloria";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "shreyank")
				{
					bw27 = 1;
					if (f2 == 0)
					{
						f2n = "shreyank";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "shreyank";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "shreyank";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "shreyank";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "shreyank";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "devansh")
				{
					bw28 = 1;
					if (f2 == 0)
					{
						f2n = "devansh";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "devansh";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "devansh";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "devansh";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "devansh";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "anthony")
				{
					bw29 = 1;
					if (f2 == 0)
					{
						f2n = "anthony";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "anthony";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "anthony";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "anthony";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "anthony";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "felix")
				{
					bw30 = 1;
					if (f2 == 0)
					{
						f2n = "felix";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "felix";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "felix";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "felix";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "felix";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "jackie")
				{
					bw31 = 1;
					if (f2 == 0)
					{
						f2n = "jackie";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "jackie";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "jackie";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "jackie";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "jackie";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "karin")
				{
					bw32 = 1;
					if (f2 == 0)
					{
						f2n = "karin";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "karin";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "karin";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "karin";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "karin";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "priyanka")
				{
					bw33 = 1;
					if (f2 == 0)
					{
						f2n = "priyanka";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "priyanka";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "priyanka";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "priyanka";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "priyanka";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}	
				}	
				if (ename == "cassie")
				{
					bw34 = 1; 
					if (f2 == 0)
					{
						f2n = "cassie";
						f2 = elvl;
						f2spd = espd;
						f2def = edef;
						f2charisma = echarisma;
						f2str = estr;
						f2hp = echp;
						ad2 = 1;
					}
					else if (f3 == 0)
					{
						f3n = "cassie";
						f3 = elvl;
						f3spd = espd;
						f3def = edef;
						f3charisma = echarisma;
						f3str = estr;
						f3hp = echp;
						ad3 = 1;
					}
					else if (f4 == 0)
					{
						f4n = "cassie";
						f4 = elvl;
						f4spd = espd;
						f4def = edef;
						f4charisma = echarisma;
						f4str = estr;
						f4hp = echp;
						ad4 = 1;
					}
					else if (f5 == 0)
					{
						f5n = "cassie";
						f5 = elvl;
						f5spd = espd;
						f5def = edef;
						f5charisma = echarisma;
						f5str = estr;
						f5hp = echp;
						ad5 = 1;
					}
					else if (f6 == 0)
					{
						f6n = "cassie";
						f6 = elvl;
						f6spd = espd;
						f6def = edef;
						f6charisma = echarisma;
						f6str = estr;
						f6hp = echp;
						ad6 = 1;
					}				
				}
				
					if (bw1 && bw2 && bw3 && bw4 && bw5 && bw6 && bw7 && bw8 && bw9 && bw10 && bw11 && bw12 && bw13 && bw14 && bw15 && bw16 && bw17 && bw18 && bw19 && bw20 && bw21  && bw22 && bw23 && bw24 && bw25 && bw26 && bw27 && bw28 && bw29 && bw30 && bw31)
					{	
					system("cls");
					cout << "YOU WON THE GAME! YAY. GOOD FOR YOU. NOW WHAT?";
					return 1;
					}
					
				
			
				if (f2 == 0)
				{
				f2 = elvl;
				f2n = ename;
				f2str = estr;
				f2def = edef;
				f2hp = ehp;
				f2spd = espd;
				f2charisma = elvl * 5;
				}

				else if (f3 == 0)
				{
				f3 = elvl;
				f3n = ename;
				f3str = estr;
				f3def = edef;
				f3hp = ehp;
				f3spd = espd;
				f3charisma = elvl * 5;
				}

				else if (f4 == 0)
				{
				f4 = elvl;
				f4n = ename;
				f4str = estr;
				f4def = edef;
				f4hp = ehp;
				f4spd = espd;
				f4charisma = elvl * 5;
				}

				else if (f5 == 0)
				{
				f5 = elvl;
				f5n = ename;
				f5str = estr;
				f5def = edef;
				f5hp = ehp;
				f5spd = espd;
				f5charisma = elvl * 5;
				}

				else if (f6 == 0)
				{
				f6 = elvl;
				f6n = ename;
				f6str = estr;
				f6def = edef;
				f6hp = ehp;
				f6spd = espd;
				f6charisma = elvl * 5;
				}
				
			unsigned short temp = 5;
			win (temp, temp, xp, money, chp, hp, lvl, afid, afdef, afstr, afspd, afcharisma, ad1);
			return 2;
			}//cchance

			if (cchance >= 46)
			{
			cout << "You failed to befriend the enemy. Please try again.";
			cout << endl;
			}
			return 0;
	}//if item == 2
	return 0;
}// function end




void revan (int blvl)
{
		    COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "11. Bother";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "12. Hack a computer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "16. Be nerdy with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "17. Get your hair done with";
		}
		else
		{	
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}

void jake (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "23. Go to a bonfire with";
	
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "12. Hack a computer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "18. Skip through a field of flowers with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		} 
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}
void rishi (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";
		
			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "13. Debate";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "39. Play fantasy football with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		} 
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}
void kim (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";			

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "16. be nerdy with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "27. Play table tennis with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}
void devansh (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";
			
			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "20. Dance";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "41. Play guitar with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}	
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}

void karin (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "21. Tickle";
		
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "37. Sing with";			
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";			
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "19. Pinky promise with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "15. Piggy back ride with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
void felix (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "42. Eat rice with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "28. Play violin with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
	
void anthony (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "34. Play Halo with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "41. Play guitar with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "12. Hack a computer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	   
	
	 
}
void puneet (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "8. Eat with";
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "30. Tap";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "15. Piggy back ride on";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	   
	
	 
}
void alan (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "29. Spam";
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "8. Eat with";
		}
		else
		{
			
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "10. Play soccer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
void bri (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";
			
			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "20. Dance";
		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "21. Tickle";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	   
	
	 
}
void anat (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "21. Tickle";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Get take out with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "4. Pat";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "5. Blow bubbles at";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void shreyank (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "6. High five";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "33. Watch TV with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "23. Go to a bonfire with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "34. Play Halo with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void kamil (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "35. Give gift to";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "8. Eat with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "9. Bear hug";	
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void gloria (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "24. Run away with";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "8. Eat with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
void subhashini (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";	

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "10. Play soccer with";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "8. Eat with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "34. Play Halo with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "25. Play tag with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
void matt (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "26. Wink at";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "4. Pat head";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "11. Bother";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void ericj (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "13. Debate";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "12. Hack a computer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void mariyah (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "11. Bother";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "36. Chat with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void shreyas (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "15. Piggy back ride on";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}
void sagar (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "9. Bear hug";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "24. Run away with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "25. play tag with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}

void payal (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";

		if (blvl >= 3)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "44. Go shopping with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "20. Dance";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}

void alyssa (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "15. Piggy back ride with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "17. Get your hair done with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	   
	
	 
}

void erics (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates		
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "39. Play fantasy football with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "9. Bear Hug";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}

void ameen (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "16. Be nerdy with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "10. Play soccer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "27. Play table tennis with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}

void kelli (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "20. Dance";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Get take out with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "33. Watch TV with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "5. Give a gift to";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}

void laura (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "16. Be nerdy with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "45. Listen to music with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "36. Chat with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "9. Bear Hug";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}

void arnav (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "10. Play soccer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "39. Play fantasy football with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "33. Watch TV with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates   
	
	 
}

void kevin (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "36. Chat with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "10. Play soccer with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "4. Discuss politics with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "5. Be Irish with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	   
	
	 
}

void leonard (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "32. Party with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Play hockey with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "13. Debate";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "23. Go to a bonfire with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}


void raeesa (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "4. Study with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "5. Give a gift to";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
	   
	coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	 
}


void jackie (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "33. Watch TV with";

		if (blvl >= 3)  
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "6. High five";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "40. Tell a joke";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "45. Listen to music with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";	 
		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}


void priyanka (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "45. Listen to music with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Give a gift to";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "13. Debate with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "38. Be asian with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}


void cassie (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "36. Chat with";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Get our hair done with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "31. Smile at";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "37. Sing with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";

		}
		coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
}



void janice (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "2. Hug";

			coord.X = 39; coord.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "27. Play table tennis with";
		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "7. Shun";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Get take out with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "23. Go to a bonfire with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}

void jenny (int blvl)
{
		COORD coord; // coordinates
		coord.X = 39; coord.Y = 41; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "22. Poke";

		COORD coord1; // coordinates
		coord1.X = 39; coord1.Y = 43; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord1); // moves to the coordinates
		cout <<left<< setw(40)<< setfill(' ')<< "46. Ignore";

		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "39. Play fantasy football with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "3. Get take out with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill(' ')<< "41. Play guitar with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}

	   coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	
	 
}
void jon (int blvl)
{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 41; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
		cout <<left<< setw(40)<< setfill(' ')<< "43. Talk";

			COORD coord1; // coordinates
			coord1.X = 39; coord1.Y = 43; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord1); // moves to the coordinates	
		cout <<left<< setw(40)<< setfill(' ')<< "6. High five";
		if (blvl >= 3) 
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill(' ')<< "29. Spam";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 45; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 6)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill(' ')<< "14. Make an IED with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 47; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
		if (blvl >= 9)
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill(' ')<< "34. Play Halo with";
		}
		else
		{
			COORD coord; // coordinates
			coord.X = 39; coord.Y = 49; // X and Y coordinates
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates	
			cout <<left<< setw(40)<< setfill (' ')<<" ";
		}
coord.X = 0; coord.Y = 56; // X and Y coordinates
                       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates

}



//																												  befriends     grouches


void avgf (int f1, int f2, int f3, int f4, int f5, int f6, int elvl) // for your party, average friend to see if your difficulty level against your opponent
{
int avg;
int hm = 0;

if (f1 >= 1)
{
hm += 1;
}

if (f2 >= 1)
{
hm += 1;
}

if (f3 >= 1)
{
hm += 1;
}

if (f4 >= 1)
{
hm += 1;
}

if (f5 >= 1)
{
hm += 1;
}

if (f6 >= 1)
{
hm += 1;
}

avg = f1 + f2 + f3 + f4 + f5 + f6;
avg = avg / hm;

if (elvl > avg)
cout << "This freshman is classified as difficult." << endl;

if (elvl < avg)
cout << "This freshman is classified as easy." << endl;

if (elvl == avg)
cout << "This freshman is classified as average." << endl;

Sleep(2000);
cin.clear();
}



//calling actions
int calling (int num, int str, int edef, int spd, int charisma)
{	
	int dmg;
	switch (num)
		{
	case 1:
		dmg = birish(str, edef);
		break;
	case 2:
		dmg = hug(str, edef);
		break;
	case 3:
		dmg = gtow(str, edef);
		break;
	case 4:
		dmg = pat(str, edef);
		break;
	case 5:
		dmg = blowbubbles(str, edef);
		break;
	case 6:
		dmg = high5(str, edef);
		break;
	case 7:
		dmg = shun(str, edef);
		break;
	case 8:
		dmg = eat(str, edef);
		break;
	case 9:
		dmg = bhug(str, edef);
		break;
	case 10:
		dmg = playsoccer(str, edef);
		break;
	case 11:
		dmg = bother(str, edef);
		break;
	case 12:
		dmg = hackcpu(str, edef);
		break;
	case 13:
		dmg = debate(str, edef);
		break;
	case 14:
		dmg = makeied(str, edef);
		break;
	case 15:
		dmg = piggybackride(str, edef);
		break;
	case 16:
		dmg = bnerdy(str, edef);
		break;
	case 17:
		dmg = gethairdone(str, edef);
		break;
	case 18:
		dmg = stfu(str, edef, spd);
		break;
	case 19:
		dmg = pinkypromise(str, edef);
		break;
	case 20:
		dmg = dance(str, edef,spd);
		break;
	case 21:
		dmg = tickle(str, edef,spd);
		break;
	case 22:
		dmg = poke(str, edef,spd);
		break;
	case 23:
		dmg = gotobonfire(str, edef,spd);
		break;
	case 24:
		dmg = runaway(str, edef,spd);
		break;
	case 25:
		dmg = playtag(str, edef,spd);
		break;
	case 26:
		dmg = wink(str, edef,spd);
		break;
	case 27:
		dmg = playtt(str, edef,spd);
		break;
	case 28:
		dmg = playviolin(str, edef,spd);
		break;
	case 29:
		dmg = spam(str, edef,spd);
		break;
	case 30:
		dmg = tap(str, edef,spd);
		break;
	case 31:
		dmg = smileat(str, edef,charisma);
		break;
	case 32:
		dmg = partywith(str, edef,charisma);
		break;
	case 33:
		dmg = watchtv(str, edef,charisma);
		break;
	case 34:
		dmg = playhalo(str, edef,charisma);
		break;
	case 35:
		dmg = givegift(str, edef,charisma);
		break;
	case 36:
		dmg = chat(str, edef,charisma);
		break;
	case 37:
		dmg = sing(str, edef,charisma);
		break;
	case 38:
		dmg = beasian(str, edef,spd);
		break;
	case 39:
		dmg = playff(str, edef,spd);
		break;
	case 40:
		dmg = telljoke(str, edef,charisma);
		break;
	case 41:
		dmg = playguitar(str, edef,spd,charisma);
		break;
	case 42:
		dmg = eatrice(str, edef,charisma,spd);
		break;
	case 43:
		dmg = talk(str, edef);
		break;
	case 44:
		dmg = goshopping(str, edef,spd);
		break;
	case 45:
		dmg = listenm(str, edef,charisma);
		break;
	case 46:
		dmg = ignore2(str, edef);
		break;
		}
return dmg;
}

void heal (unsigned short &chp, int heals)
{
	if (heals >= 1)
	{
	heals -= 1;
		if (chp >= 10)
		{
		chp -= 10;
		}

		if (chp < 10)
		{
		chp = 0;
		}
	}

	else
	{
	cout << "You do not have any heals.";
	}
}



//af = active freshmen, aflvl = active freshmen level, afhp = active freshmen hp, sf = switching freshmen, sflvl = switching freshmen level, sfhp = switching freshmen hp
void switching (string &af, int &aflvl, int &afhp, int &afdef, int &afstrength, int &afchar, int &afspd, string &sf, int &sflvl, int &sfhp, int &sfdef, int &sfstrength, int &sfchar, int &sfspd)
{
	string tempf;
	int tempflvl;
	int temphp;
	int tempdef;
	int tempstrength;
	int tempchar;
	int tempspd;
	
	tempf = af;
	af = sf;
	sf = tempf;

	tempflvl = aflvl;
	aflvl = sflvl;
	sflvl = tempflvl;

	temphp = afhp;
	afhp = sfhp;
	sfhp = temphp;

	tempdef = afdef;
	afdef = sfdef;
	sfdef = tempdef;

	tempstrength = afstrength;
	afstrength = sfstrength;
	sfstrength = tempstrength;

	tempchar = afchar;
	afchar = sfchar;
	sfchar = tempchar;

	tempspd = afspd;
	afspd = sfspd;
	sfspd = tempspd;
}


#pragma warning( disable : 4129)

int bssscn (string freshname, int flvl, int ehp, string buddyname, int blvl, int hp, int balls, int heals, int afid, string f2n, string f3n, string f4n, string f5n, string f6n, int afstr, int afdef, int afspd, int afcharisma, double &money, int &exp, int ad2, int ad3, int ad4, int ad5, int ad6, string afn, int aflvl, int afhp, int f2lvl, int f2hp, int f2def, int f2str, int f2charisma, int f2spd, int f3lvl, int f3hp, int f3def, int f3str, int f3charisma, int f3spd,int f4lvl, int f4hp, int f4def, int f4str, int f4charisma, int f4spd,int f5lvl, int f5hp, int f5def, int f5str, int f5charisma, int f5spd,int f6lvl, int f6hp, int f6def, int f6str, int f6charisma, int f6spd, int f2, int f3, int f4, int f5, int f6, int estr, int edef, int espd, int elvl, int bw1, int bw2, int bw3, int bw4, int bw5, int bw6, int bw7, int bw8, int bw9, int bw10, int bw11, int bw12, int bw13, int bw14, int bw15, int bw16, int bw17, int bw18, int bw19, int bw20, int bw21, int bw22, int bw23, int bw24, int bw25, int bw26, int bw27, int bw28, int bw29, int bw30, int bw31, int bw32, int bw33, int bw34, int ad1, int echarisma)
{
	int result;
	int item = 0;
	int action = 0;
	int choice = 0;
	unsigned short echp = 0;
	unsigned short chp = 0;
	int dmg = 0;
	int idk;

	rewind(stdin);
	while(1)
	{
	if (choice == 1 || item == 2)
	{
		system ("cls");
		COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
		idk = actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
		if (idk == 2)
		{
		Sleep (2000);
		system("cls");
		return 0;
		}

		if (idk == 1)
		{
		Sleep(1500);
		return 1;
		}
		cout << endl;
	}
cout << "________________________________________________________________________________" << endl;
cout << "|Freshman ";
cout << left<< setw (11)<< setfill (' ')<<freshname;
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<<flvl;
cout << "  "<< echp <<" x" << (char)3 << "  |  ___________________________________      |"<< endl;
cout << "|__________________________________|  \\                                  /     |" << endl;
cout << "|                                      \\                                /      |" << endl;
cout << "|                                       \\             Enemy            /       |" << endl;
cout << "|                                        \\                            /        |" << endl;
cout << "|                                         \\                          /         |" << endl;
cout << "|                                          \\________________________/          |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                     _________________________________________|" << endl;
cout << "|                                    |   Freshman ";
cout << left << setw (11)<< setfill (' ')<< buddyname; 
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<< blvl;
cout << " " << chp <<" x" << (char)3 <<"       |"<<endl;
cout << "|         __________________         |_________________________________________|" << endl;
cout << "|       /                   \\        |       What would you like to do?        |" << endl;
cout << "|      /                     \\       | 1. Actions                              |" << endl;
cout << "|     /                       \\      | 2. Party                                |" << endl;
cout << "|    /           You           \\     | 3. Pack                                 |" << endl;
cout << "|   /                           \\    | 4. Run away                             |" << endl;
cout << "|  /_____________________________\\   |                                         |" << endl;
cout << "|                                    |                                         |" << endl;
cout << "|____________________________________|_________________________________________|" << endl;

cin.clear();
cin >> choice;

if (choice == 1)
{
	system("cls");
		
		cout << endl << endl;
		cout << "________________________________________________________________________________" << endl;
		cout << "|Freshman ";
		cout << left<< setw (11)<< setfill (' ')<<freshname;
		cout << "Lvl:";
		cout << left << setw (2)<< setfill (' ')<<flvl;
		cout << "  "<< echp <<" x" << (char)3 << "  |  ___________________________________      |"<< endl;
		cout << "|__________________________________|  \\                                  /     |" << endl;
		cout << "|                                      \\                                /      |" << endl;
		cout << "|                                       \\             Enemy            /       |" << endl;
		cout << "|                                        \\                            /        |" << endl;
		cout << "|                                         \\                          /         |" << endl;
		cout << "|                                          \\________________________/          |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                                                              |" << endl;
		cout << "|                                     _________________________________________|" << endl;
		cout << "|                                    |   Freshman ";
		cout << left << setw (11)<< setfill (' ')<< buddyname; 
		cout << "Lvl:";
		cout << left << setw (2)<< setfill (' ')<< blvl;
		cout << " " << chp <<" x" << (char)3 << "       |"<<endl;
		cout << "|         __________________         |_________________________________________|" << endl;
		cout << "|       /                   \\        |       What would you like to do?        |" << endl;
		cout << "|      /                     \\       |                                         |" << endl;
		cout << "|     /                       \\      |                                         |" << endl;
		cout << "|    /           You           \\     |                                         |" << endl;
		cout << "|   /                           \\    |                                         |" << endl;
		cout << "|  /_____________________________\\   |                                         |" << endl;
		cout << "|                                    | 50. Back                                |" << endl;
		cout << "|____________________________________|_________________________________________|" << endl;

	switch (afid)
		{
			  
		case 1:
			payal (blvl);
			break;
		case 2:
			alyssa (blvl);
			break;
		case 3:
			erics (blvl);
			break;
		case 4:
			kamil (blvl);
			break;
		case 5:
			shreyas (blvl);
			break;
		case 6: 
			bri (blvl);
			break;
		case 7:
			kim (blvl);
			break;
		case 8:
			ameen (blvl);
			break;
		case 9:
			revan (blvl);
			break;
		case 10:
			puneet (blvl);
			break;
		case 11:
			jake (blvl);
			break;
		case 12:
			mariyah (blvl);
			break;
		case 13:
			kelli (blvl);
			break;
		case 14:
			laura (blvl);
			break;
		case 15:
			subhashini (blvl);
			break;
		case 16:
			anat (blvl);
			break;
		case 17:
			matt (blvl);
			break;
		case 18:
			alan (blvl);
			break;
		case 19:
			sagar (blvl);
			break;
		case 20:
			arnav (blvl);
			break;
		case 21:
			kevin (blvl);
			break;
		case 22:
			ericj (blvl);
			break;
		case 23:
			leonard (blvl);
			break;
		case 24:
			rishi (blvl);
			break;
		case 25:
			raeesa (blvl);
			break;
		case 26:
			gloria (blvl);
			break;
		case 27:
			shreyank (blvl);
			break;
		case 28:
			devansh (blvl);
			break;
		case 29:
			anthony (blvl);
			break;
		case 30:
			felix (blvl);
			break;
		case 31:
			jackie (blvl);
			break;
		case 32:
			karin (blvl);
			break;
		case 33:
			priyanka (blvl);
			break;
		case 34:
			cassie (blvl); 
			break;
		case 35:
			janice (blvl);
			break;
		case 36: 
			jon (blvl);
			break;
		case 37:
			jenny (blvl);
			break;
		default:
			break;
		}
		cin >> action;
		
		if (action != 50)
		{
			dmg = calling (action, afstr, afdef, afspd, afcharisma);
			echp += dmg;
			result = win(ehp, echp, exp, money, chp, hp, blvl, afid, afdef, afstr, afspd, afcharisma, ad1);
			
			if (result == 2)
			{
				Sleep(5000);
				system("cls");
			return 0;
			}
			
			if (result == 1)
			{
			return 1;
			}
			system("cls");
		}
} // if choice == 1

if (choice == 2)
{
	system("cls");
cout << endl << endl;
cout << "________________________________________________________________________________" << endl;
cout << "|Freshman ";
cout << left<< setw (11)<< setfill (' ')<<freshname;
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<<flvl;
cout << "  "<< echp <<" x" << (char)3 << "  |  ___________________________________      |"<< endl;
cout << "|__________________________________|  \\                                  /     |" << endl;
cout << "|                                      \\                                /      |" << endl;
cout << "|                                       \\             Enemy            /       |" << endl;
cout << "|                                        \\                            /        |" << endl;
cout << "|                                         \\                          /         |" << endl;
cout << "|                                          \\________________________/          |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                     _________________________________________|" << endl;
cout << "|                                    |   Freshman ";
cout << left << setw (11)<< setfill (' ')<< buddyname; 
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<< blvl;
cout << " " << chp <<" x" << (char)3 << "       |"<<endl;
cout << "|         __________________         |_________________________________________|" << endl;
cout << "|       /                   \\        |       What would you like to do?        |" << endl;
cout << "|      /                     \\       |             Switch Freshmen             |" << endl;
cout << "|     /                       \\      | 1. ";
cout << left << setw (15)<< setfill (' ')<< f2n;
cout << "6. Go back            |" << endl;
cout << "|    /           You           \\     | 2. ";                                   
cout << left << setw (15)<< setfill (' ')<< f3n << "                      |" << endl;
cout << "|   /                           \\    | 3. ";
cout << left << setw (15)<< setfill (' ')<< f4n << "                      |" << endl;
cout << "|  /_____________________________\\   | 4. ";
cout << left << setw (15)<< setfill (' ')<< f5n << "                      |" << endl;
cout << "|                                    | 5. ";
cout << left << setw (15)<< setfill (' ')<< f6n << "                      |" << endl;
cout << "|____________________________________|_________________________________________|" << endl;

short switching2;
cin >> switching2;

	if (ad2 == 0 && switching2 == 1)
	{
			COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	cout << "There is no usable freshman there." << endl << endl;
	actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
	}
	if (ad3 == 0 && switching2 == 2)
	{
			COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	cout << "There is no usable freshman there." << endl << endl;
	actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
	}
	if (ad4 == 0 && switching2 == 3)
	{
			COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	cout << "There is no usable freshman there." << endl << endl;
	actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
	}
	if (ad5 == 0 && switching2 == 4)
	{
			COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	cout << "There is no usable freshman there." << endl << endl;
	actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
	}
	if (ad6 == 0 && switching2 == 5)
	{
			COORD coord; // coordinates
		coord.X = 0; coord.Y = 0; // X and Y coordinates
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // moves to the coordinates
	cout << "There is no usable freshman there." << endl << endl;
	actions (ehp, choice, dmg, exp, money, action, echp, hp, chp, aflvl, afid, item, f2, f3, f4, f5, f6, estr, edef, espd, elvl, freshname, f2str, f2def, f2spd, f2charisma, f2hp, f3str, f3def, f3spd, f3charisma, f3hp, f4str, f4def, f4spd, f4charisma, f4hp, f5str, f5def, f5spd, f5charisma, f5hp, f6str, f6def, f6spd, f6charisma, f6hp, f2n, f3n, f4n, f5n, f6n, afdef, afstr, afspd, afcharisma, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, ad2, ad3, ad4, ad5, ad6, balls, echarisma); 
	}

//switching (string &af, int &aflvl, int &afhp, int &afdef, int &afstrength, int &afchar, int &afspd, string &sf, int &sflvl, int &sfhp, int &sfdef, int &sfstrength, int &sfchar, int &sfspd)


	else if (ad2 == 1 && switching2 == 1)
	{
	switching (afn, aflvl, afhp, afdef, afstr, afcharisma, afspd, f2n, f2lvl, f2hp, f2def, f2str, f2charisma, f2spd);
	}

	else if (ad3 == 1 && switching2 == 2)
	{
	switching (afn, aflvl, afhp, afdef, afstr, afcharisma, afspd, f3n, f3lvl, f3hp, f3def, f3str, f3charisma, f3spd);
	}

	else if (ad4 == 1 && switching2 == 3)
	{
	switching (afn, aflvl, afhp, afdef, afstr, afcharisma, afspd, f4n, f4lvl, f4hp, f4def, f4str, f4charisma, f4spd);
	}

	else if (ad5 == 1 && switching2 == 4)
	{
	switching (afn, aflvl, afhp, afdef, afstr, afcharisma, afspd, f5n, f5lvl, f5hp, f5def, f5str, f5charisma, f5spd);
	}

	else if (ad6 == 1 && switching2 == 5)
	{
	switching (afn, aflvl, afhp, afdef, afstr, afcharisma, afspd, f6n, f6lvl, f6hp, f6def, f6str, f6charisma, f6spd);
	}
}

if (choice == 3)
{
	system("cls");
cout << endl << endl;
cout << "________________________________________________________________________________" << endl;
cout << "|Freshman ";
cout << left<< setw (11)<< setfill (' ')<<freshname;
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<<flvl;
cout << "  "<< echp <<" x" << (char)3 << "  |  ___________________________________      |"<< endl;
cout << "|__________________________________|  \\                                  /     |" << endl;
cout << "|                                      \\                                /      |" << endl;
cout << "|                                       \\             Enemy            /       |" << endl;
cout << "|                                        \\                            /        |" << endl;
cout << "|                                         \\                          /         |" << endl;
cout << "|                                          \\________________________/          |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                                                              |" << endl;
cout << "|                                     _________________________________________|" << endl;
cout << "|                                    |   Freshman " ;
cout << left << setw (11)<< setfill (' ')<< buddyname; 
cout << "Lvl:";
cout << left << setw (2)<< setfill (' ')<< blvl;
cout << " " << chp<<" x" << (char)3 << "    |"<<endl;
cout << "|         __________________         |_________________________________________|" << endl;
cout << "|       /                   \\        |       What would you like to do?        |" << endl;
cout << "|      /                     \\       |                  PACK                   |" << endl;
cout << "|     /                       \\      | 1. Grouches (heal)             x";
cout << heals << "       |" << endl;//skeptical on length
cout << "|    /           You           \\     | Takes 10 hearts away                    |" << endl;
cout << "|   /                           \\    | 2. Befriend (catch)            x";
cout << balls << "       |" << endl;
cout << "|  /_____________________________\\   | 4. Return to main menu                  |"<<endl;

cout << "|                                    | Gives chance on \"catching enemy\"        |" << endl;
cout << "|____________________________________|_________________________________________|" << endl;

cin >> item;

if (item == 1)
{
heal(chp,heals);
}

}// end of if == 3

if (choice == 4)
{
system("cls");
return 0;
}
system("cls");
}//whileloop
}

//battlesystem
int bs(int &hp, int &spd, int &def, int &str, int &exp, int f1, int f2, int f3, int f4, int f5, int f6, string afn, int aflvl, int afhp, int afstr, int afdef, int afspd, int afcharisma, int bfs, int heals, string f2n, string f3n, string f4n, string f5n, string f6n, int afid, double &money, int ad2, int ad3, int ad4, int ad5, int ad6, int f2hp, int f2def, int f2str, int f2charisma, int f2spd, int f3hp, int f3def, int f3str, int f3charisma, int f3spd, int f4hp, int f4def, int f4str, int f4charisma, int f4spd, int f5hp, int f5def, int f5str, int f5charisma, int f5spd, int f6hp, int f6def, int f6str, int f6charisma, int f6spd, int bw1, int bw2, int bw3, int bw4, int bw5, int bw6, int bw7, int bw8, int bw9, int bw10, int bw11, int bw12, int bw13, int bw14, int bw15, int bw16, int bw17, int bw18, int bw19, int bw20, int bw21, int bw22, int bw23, int bw24, int bw25, int bw26, int bw27, int bw28, int bw29, int bw30, int bw31, int bw32, int bw33, int bw34, int &rows, int &columns, int doc, char a, int ad1)
{	
	string enamer;	

	bool mc = 0;
	bool oc = 0;
	bool la = 0;
	bool pr = 0;
	bool pa = 0;
	bool wi = 0;

	if ((rows == 5 && (columns == 75 || columns == 76 ||columns == 77)) && doc == 1)
		mc = 1;
	
	if ((rows == 19 && (columns == 22 || columns == 23 ||columns == 24)) && doc == 1)
		la = 1;

	if ((rows == 7 && (columns == 21 || columns == 22 ||columns == 23)) && doc == 1)
		pr = 1;

	if ((rows == 5 && (columns == 68 || columns == 69 ||columns == 70)) && doc == 1)
		oc = 1;

	if ((rows == 5 && (columns == 75 || columns == 76 ||columns == 77)) && doc == 0)
		pa = 1;

	if ((rows == 19 && (columns == 26 || columns == 27 ||columns == 28)) && doc == 1)
		wi = 1;

		int encounter = rand();
	srand((unsigned)time(0));
	encounter = 1 + rand() % 80;
	if ((mc && oc && la && pr && pa && wi) == 0)
	{
		switch (encounter)
		{
		case 1:
			enamer = "payal";
			break;
		case 2:
			enamer = "alyssa";
			break;
		case 3:
			enamer = "erics";
			break;
		case 4:
			enamer = "kamil";
			break;
		case 5:
			enamer = "shreyas";
			break;
		case 6:
			enamer = "bri";
			break;
		case 7:
			enamer = "kim";
			break;
		case 8:
			enamer = "ameen";
			break;
		case 9:
			enamer = "revan";
			break;
		case 10:
			enamer = "puneet";
			break;
		case 11:
			enamer = "jake";
			break;
		case 12:
			enamer = "mariyah";
			break;
		case 13:
			enamer = "kelli";
			break;
		case 14:
			enamer = "laura";
			break;
		case 15:
			enamer = "subhashini";
			break;
		case 16:
			enamer = "anat";
			break;
		case 17:
			enamer = "matt";
			break;
		case 18:
			enamer = "alan";
			break;
		case 19:
			enamer = "sagar";
			break;
		case 20:
			enamer = "arnav";
			break;
		case 21:
			enamer = "kevin";
			break;
		case 22:
			enamer = "ericj";
			break;
		case 23:
			enamer = "leonard";
			break;
		case 24:
			enamer = "rishi";
			break;
		case 25:
			enamer = "raeesa";
			break;
		case 26:
			enamer = "gloria";
			break;
		case 27:
			enamer = "shreyank";
			break;
		case 28:
			enamer = "devansh";
			break;
		case 29:
			enamer = "anthony";
			break;
		case 30:
			enamer = "felix";
			break;
		case 31:
			enamer = "jackie";
			break;
		case 32:
			enamer = "karin";
			break;
		case 33:
			enamer = "priyanka";
			break;
		case 34:
			enamer = "cassie"; 
			break;
		default:;			
		}
	}

			//e = enemy
			int elvl = rand(); 
			int ehp;
			int espd;
			int edef;
			int estr;
			int echarisma;

			srand((unsigned)time(0));
			elvl = 1 + rand() % 10;


			system ("cls");
		cout << endl << endl << endl << "You encountered a level " << elvl << " freshmen in your travels!" << endl;

		//must change stats unless good. 6+ incomplete
			if (elvl == 1)
			{
			ehp = 10;
			espd = 5;
			edef = 0;
			estr = 5;
			echarisma = 0;
			}
			
			if (elvl == 2)
			{
			ehp = 20;
			espd = 10;
			edef = 5;
			estr = 10;
			echarisma = 5;
			}

			if (elvl == 3)
			{
			ehp = 30;
			espd = 15;
			edef = 10;
			estr = 15;
			echarisma = 10;
			}
			if (elvl == 4)
			{
			ehp = 40;
			espd = 20;
			edef = 15;
			estr = 20;
			echarisma = 15;
			}
			
			if (elvl == 5)
			{
			ehp = 50;
			espd = 25;
			edef = 20;
			estr = 25;
			echarisma = 20;
			}

			if (elvl == 6)
			{
			ehp = 60;
			espd = 30;
			edef = 25;
			estr = 30;
			echarisma = 25;
			}

			if (elvl == 7)
			{
			ehp = 70;
			espd = 35;
			edef = 30;
			estr = 35;
			echarisma = 30;
			}

			if (elvl == 8)
			{
			ehp = 80;
			espd = 40;
			edef = 35;
			estr = 40;
			echarisma = 35;
			}

			if (elvl == 9)
			{
			ehp = 90;
			espd = 45;
			edef = 40;
			estr = 45;
			echarisma = 40;
			}

			if (elvl == 10)
			{
			ehp = 100;
			espd = 50;
			edef = 45;
			estr = 50;
			echarisma = 45;
			}
			

			avgf (f1, f2, f3, f4, f5, f6, elvl);
			cin.ignore(INT_MAX, '\n');
			CLRBUF;
			if (encounter <= 34)
			{
				int blob;
				blob = bssscn (enamer, elvl, ehp, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, estr, edef, espd, elvl, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
				
				if (blob == 0)
				{
				return 0;
				}

				if (blob == 1)
				{
				return 1;
				}
			}
			
		

			if (mc == 1)
			{
			cout << "You enter Mr. McCormick's room. He is at his desk and is grading tests. When he notices you approaching he stands up and says \"Did you hand your essay into turnitin.com?\"" << endl;
			cout << "Yes or No? (He is lvl 6.)";
			string ans;
			cin >> ans;
				if (ans == "yes" || ans == "Yes" || ans == "YES")
				{
					 if (a == 'w')
					{
						rows += 1;
					}

					if (a == 's')
					{
						rows -= 1;
					}
	
		             if (a == 'a')
			        {
					    columns += 1;
					}

					if (a == 'd')
				    {
						columns -= 1;
				    }
					bssscn ("McCormick", 6 , 90, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, 5, 5, 5, 5, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
				}
			}

			if (la == 1)
			{
			cout << "You enter Mrs. Lane's room. She is grading some essays, and when she notices you she asks in a kind tone, \"Do you think I grade harshly?\"" << endl;
			cout << "Yes or No? (She is lvl 2)";
			string ans;
			cin >> ans;
				if (ans == "yes" || ans == "Yes" || ans == "YES")
				{
					 if (a == 'w')
                {
                rows += 1;
                }

                if (a == 's')
                {
                rows -= 1;
                }

                if (a == 'a')
                {
                columns += 1;
                }

                if (a == 'd')
                {
                columns -= 1;
                }
				bssscn ("Lane", 2 , 40, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, 5, 5, 5, 5, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
				}
			}

			if (pr == 1)
			{
			cout << "You enter Mr. Price's room. He is browsing through the channels on his TV. He sees you and asks \"Do you think you can win in a debate against me?\"" << endl;
			cout << "Yes or No? (He is lvl 8)";
			string ans;
			cin >> ans;
				if (ans == "yes" || ans == "Yes" || ans == "YES")
				{
					 if (a == 'w')
                {
                rows += 1;
                }

                if (a == 's')
                {
                rows -= 1;
                }

                if (a == 'a')
                {
                columns += 1;
                }

                if (a == 'd')
                {
                columns -= 1;
                }
					bssscn ("Price", 8 , 120, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, 5, 5, 5, 5, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
			
				}
			}

			if (oc == 1)
			{
			cout << "You enter Mr. Ocker's room. He is twidling his thumbs, wondering what to do. He sees you and says \"Hola, do you want to have a geography lesson?\"" << endl;
			cout << "Yes or No? (He is lvl 1)";
			string ans;
			cin >> ans;
				if (ans == "yes" || ans == "Yes" || ans == "YES")
				{
					 if (a == 'w')
                {
                rows += 1;
                }

                if (a == 's')
                {
                rows -= 1;
                }

                if (a == 'a')
                {
                columns += 1;
                }

                if (a == 'd')
                {
                columns -= 1;
                }
				bssscn ("Ocker", 1 , 15, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, 5, 5, 5, 5, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
				}
			}

			if (pa == 1)
			{
				PlaySound(TEXT("papercut.wav"), 0, SND_LOOP | SND_ASYNC);
			cout << "You enter Mr. Paterno's room. He is on his laptop looking at his cute doggy screensaver. He sees you enter and asks \"Would you like FOOL lab?\"" << endl;
			cout << "Yes or No? (He is lvl 10)";
			string ans;
			cin >> ans;
				if (ans == "yes" || ans == "Yes" || ans == "YES")
				{
					 if (a == 'w')
                {
                rows += 1;
                }

                if (a == 's')
                {
                rows -= 1;
                }

                if (a == 'a')
                {
                columns += 1;
                }

                if (a == 'd')
                {
                columns -= 1;
                }
				PlaySound(0,0,0);
				bssscn ("Paterno", 10, 150, afn, aflvl, afhp, bfs, heals, afid, f2n, f3n, f4n, f5n, f6n, afstr, afdef, afspd, afcharisma, money, exp, ad2, ad3, ad4, ad5, ad6, afn, aflvl, afhp, f2, f2hp, f2def, f2str, f2charisma, f2spd, f3, f3hp, f3def, f3str, f3charisma, f3spd, f4, f4hp, f4def, f4str, f4charisma, f4spd, f5, f5hp, f5def, f5str, f5charisma, f5spd, f6, f6hp, f6def, f6str, f6charisma, f6spd, f2, f3, f4, f5, f6, 5, 5, 5, 5, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, ad1, echarisma);
				}
			}
return 0;
}

# endif