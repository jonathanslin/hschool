# include <iostream>
# include <iomanip> // idk
# include <string> // strings
# include <conio.h> // kbhit and get_ch
# include <windows.h> // sleep
# include <ctime> // time function for 
# include <cstdlib> // rand
//# include "bsscn.h"
# include "functions.h" // header file
# include "TGrafix.h" // tgraphix

#pragma comment (lib, "winmm.lib")

using namespace std;

// REMEMBER ROWS AND COLUMNS START AT ZERO

// faint = sleep
// dont get max health!!!
// different areas?


//jenny specializes hp def
//janice specializes hp spd
//johnny specializes str speed

//store = 1
//nurses = 2
//gym = 3
//boss portal = 4

// to show 2d array

//bosses
//mccormick row 5  columns 75 76 77  6
//lane      row 19 columns 22 23 24  2
//price     row 7  columns 21 22 23  8
//ocker     row 5  columns 69 70 71  1
//paterno   row 7  columns 75 76 77  10
//winat     row 19 columns 26 27 28  4


int main()
{
while (1)
{
	srand((unsigned)time(0));
	int a;
	char who;
	int doc = 0;
	string choose;
	int br = 5;
	int bc = 78;

	//stats + battle system
	int hp;
	int str;
	int def;
	int spd;
	int charisma;
	double money = 2000;

	//party
bool ad1 = 0;
	int f1 = 0;
bool ad2 = 0;
	int f2 = 0;
bool ad3 = 0;
	int f3 = 0;
bool ad4 = 0;
	int f4 = 0;
bool ad5 = 0;
	int f5 = 0;
bool ad6 = 0;
	int f6 = 0;//   lvl1 lvl2 lvl3  lvl4  lvl5  lvl6  lvl7  lvl8  lvl9  lvl10
	int exp = 0; // 300  800  1500  2400  3500  4800  6300  8000  9900  
	//stats for characters?!?!?!?!?

	string f2n = " ";
		int f2hp = 0;
		int f2str = 0;
		int f2def = 0;
		int f2spd = 0;
		int f2charisma = 0;
	string f3n = " ";
		int f3hp = 0;
		int f3str = 0;
		int f3def = 0;
		int f3spd = 0;
		int f3charisma = 0;
	string f4n = " ";
		int f4hp = 0;
		int f4str = 0;
		int f4def = 0;
		int f4spd = 0;
		int f4charisma = 0;
	string f5n = " ";
		int f5hp = 0;
		int f5str = 0;
		int f5def = 0;
		int f5spd = 0;
		int f5charisma = 0;
	string f6n = " ";
		int f6hp = 0;
		int f6str = 0;
		int f6def = 0;
		int f6spd = 0;
		int f6charisma = 0;

	//active pokemon stats
	string afn;
	int afid; // can equal any of the freshmen
	int aflvl;
	int afstr;
	int afdef;
	int afspd;
	int afcharisma;
	int afhp;

	//items
	int bfs = 5;
	int heals = 5;

	//caught
	int bw1 = 0;
	int bw2 = 0;
	int bw3 = 0;
	int bw4 = 0;
	int bw5 = 0;
	int bw6 = 0;
	int bw7 = 0;
	int bw8 = 0;
	int bw9 = 0;
	int bw10 = 0;
	int bw11 = 0;
	int bw12 = 0;
	int bw13 = 0;
	int bw14 = 0;
	int bw15 = 0;
	int bw16 = 0;
	int bw17 = 0;
	int bw18 = 0;
	int bw19 = 0;
	int bw20 = 0;
	int bw21 = 0;
	int bw22 = 0;
	int bw23 = 0;
	int bw24 = 0;
	int bw25 = 0;
	int bw26 = 0;
	int bw27 = 0;
	int bw28 = 0;
	int bw29 = 0;
	int bw30 = 0;
	int bw31 = 0;
	int bw32 = 0;
	int bw33 = 0;
	int bw34 = 0;

	//2D array
	//        rows columns
	char screen [21][81] = {"The controls are:   ___________________________________________________________",
							"W to move forward   |  [3]   |                                     |   [3]    |",
							"                    |        |                                     |          |",
							"A to move left      |        |                                     |          |",
							"                    |        |                                     |          |",
							"S to move down      |                                                      [4]|",
							"                    |                                                         |",
							"D to move right     |                                                         |",
							"                    |                                                         |",
							"                    |        |                                     |          |",
							"                    |        |                                     |          |",
							"___________________ |        |                                     |          |",
							"|     MAP KEY     | |        |                                     |          |",
							"|*****************| |        |                                     |          |",
							"|1 = STORE        | |        |______________              _________|          |",
							"|2 = GYM          | |                                                         |",
							"|3 = STAIRS       | |                                                         |",
							"|4 = BOSS         | |  [1]                                                    |",
							"|                 | |                            X                            |",
							"|_________________| |___________________________[2]___________________________|"};
	int ccol = 49; // column coordinate for X
	int crow = 18; // row coordinate for Y

	char screen2 [21][81] ={"The controls are:   ___________________________________________________________",
							"W to move forward   |  [3]    |                                    |   [3]    |",
							"                    |         |                                    |          |",
							"A to move left      |         |                                    |          |",
							"                    |         |                                    |          |",
							"S to move down      |         |                                    |       [4]|",
							"                    |         |                                    |          |",
							"D to move right     |         |                                    | [4]      |",
							"                    |         |                                    |          |",
							"                    |         |                                    |          |",
							"                    |         |                                    |          |",
							"___________________ |         |                                    |          |",
							"|     MAP KEY     | |         |                                    |          |",
							"|*****************| |         |                                    |          |",
							"|1 = STORE        | |         |                                    |          |",
							"|2 = GYM          | |         |____________________________________|          |",
							"|3 = STAIRS       | |                                                         |",
							"|4 = BOSSES       | |  [1]                                                    |",
							"|                 | |                                                         |",
							"|_________________| |_[4]_[4]_________________________________________________|"};

	PlaySound (TEXT("welcome.wav"), 0, SND_LOOP|SND_ASYNC);begin:

	output ("M        M  CCCCCCCC        AAAA ");
	output ("MM      MM  CC             AA  AA");
	output ("M M    M M  CC            AA    AA");
	output (" M  M  M  M  CC           AA      AA");
 	output ("   M   MM   M  CC          AAAAAAAAAAAA");
	output ("    M        M  CC         AA          AA");
	output ("     M        M  CC        AA            AA");
	output ("     M        M  CCCCCCCC AA              AA");

	cout << endl;

	output ("RRRR     PPPP    GGGGGG   ");
	output ("R  RR    P  PP   G    GG  ");
	output ("R   RR   P   PP  G     GG ");
	output ("RRRRRR   PPPPPP  G        ");
 	output ("RRR      P       G    GGGG");
	output ("R RR     P       G      GG");
	output ("R  RR    P       G     GG ");
	output ("R    RR  P        GGGGGG  ");
	
	cout << endl << endl;

	output ("Press any key to continue...");
	cout << endl << endl;
	output ("************************************************");
	output ("*Made by Jonathan Lin, Jenny Lorenc, Janice Ho.*");
	noendl ("************************************************");

	_kbhit();
	a = _getch();

	system ("cls");

	int b;

	cout << "The freshmen of the Academy have gotten quiet and split up individually by the teachers because apparently they work better that way. You want all the freshmen to be friends in the school, but many are too much of a bookworm to listen. You have decided that you want to change the freshmen one by one. Your job is to befriend as many freshmen as possible and stop the teachers from keep splitting them up." << endl << endl;
	cout << "Press any key to continue...";
	_kbhit();
	b = _getch();
	system("cls");

	do
	{
	clear();
	output ("Welcome to MCA RPG!");
	cout << endl;
	output ("*****************************************");
	output ("*~~~~~~~~~~~~~~Welcome!~~~~~~~~~~~~~~~~~*");
	output ("*~~~~Who would you like to play as?~~~~~*");
	output ("*~~~~~~~~~~~~1. Johnny~~~~~~~~~~~~~~~~~~*");
	output ("*~~~~~~~~~~~~2. Jenny.~~~~~~~~~~~~~~~~~~*");
	output ("*~~~~~~~~~~~~3. Janice.~~~~~~~~~~~~~~~~~*");
	output ("*****************************************");

	cout << "Strength determines damage for most attacks and usually has an average multiplier for the attacks." << endl << endl;
	cout << "Speed determines damage for some attacks and has varying multipliers. It also determines who attacks first." << endl << endl;
	cout << "Defense determines how much damage is subtracted for some attacks." << endl << endl;
	cout << "Charisma determines damage for a few attacks and most of the attacks have a low multiplier. But, the attacks are not affected by defense. Charisma can also subtract the amount of money you need to pay." << endl << endl;
	cout << "Health determines how many hearts you can have before you faint." << endl << endl;
	Sleep(2000);
	cout << "Enter in the number that corresponds to the person that you would like be: ";
	cin >> who;
	//refer to the text after using namespace std;
		
		if (who == '1')
		{
		cout << "You chose Johnny. He excels in strength and speed. Are you sure you want to choose this character? (yes / no)" << endl;
		cin >> choose;
			if (choose == "yes")
			{
			str = 15;
			def = 10;
			spd = 15;
			hp = 15;
			charisma = 5;
			aflvl = 1;
			afstr = 15;
			afdef = 10;
			afspd = 15;
			afhp = 15;
			afcharisma = 5;
			f1 = 1; // lvl of f1
			afn = "Johnny";
			afid = 36;
			ad1 = 1;
			}
		}
		
		else if (who == '2')
		{
		cout << "You chose Jenny. She excels in hitpoints and defense. Are you sure you want to choose this character? (yes / no)" << endl;
		cin >> choose;

			if (choose == "yes")
			{
			str = 10;
			def = 15;
			spd = 10;
			hp = 20;
			charisma = 5;
			aflvl = 1;
			afstr = 10;
			afdef = 15;
			afspd = 10;
			afhp = 20;
			afcharisma = charisma;
			f1 = 1; // lvl of f1
			afn = "Jenny";
			afid = 37;
			ad1 = 1;
			}
		}

		else if (who == '3')
		{
		cout << "You chose Janice. She excels in hp and speed. Are you sure you want to choose this character? (yes / no)" << endl;
		cin >> choose;
			if (choose == "yes")
			{
			str = 10;
			def = 10;
			spd = 15;
			hp = 20;
			charisma = 5;
			aflvl = 1;
			afstr = 10; 
			afdef = 10; 
			afspd = 15; 
			afhp = 20;
			afcharisma = charisma;
			f1 = 1; // lvl of f1
			afn = "Janice";
			afid = 35;
			ad1 = 1;
			}
		}
	}while (choose != "yes");
	{
	cout << endl;
	Sleep (250);
	choose ="yes";
	}
	system("cls");

output ("Please wait.  ");
output ("______");
output ("|*   |");
output ("|    |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait.. ");
output ("______");
output ("|    |");
output ("| *  |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\	");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait...");
output ("______");
output ("|    |");
output ("|    |");
output ("|  * |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait.  ");
output ("______");
output ("|    |");
output ("|    |");
output ("|    |");
output ("|___*|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\ ");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait.. ");
output ("______");
output ("|    |");
output ("|    |");
output ("|  * |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\	");

Sleep(250);
clear1();
output ("Please wait...");
output ("______");
output ("|    |");
output ("| *  |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\ ");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait...");
output ("______");
output ("|*   |");
output ("|    |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\	");

Sleep(250);
clear1();
output ("Please wait.. ");
output ("______");
output ("|    |");
output ("| *  |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\	");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait...");
output ("______");
output ("|    |");
output ("|    |");
output ("|  * |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait.  ");
output ("______");
output ("|    |");
output ("|    |");
output ("|    |");
output ("|___*|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\ ");
output ("  / \\ ");

Sleep(250);
clear1();
output ("Please wait.. ");
output ("______");
output ("|    |");
output ("|    |");
output ("|  * |");
output ("|____|");

cout << endl;

output ("	O	");
output ("   |/	");
output ("  /|	");
output ("  / \\	");

Sleep(250);
clear1();
output ("Please wait...");
output ("______");
output ("|    |");
output ("| *  |");
output ("|    |");
output ("|____|");

cout << endl;

output ("	O	");
output (" \\|	");
output ("   |\\ ");
output ("  / \\ ");

Sleep (250);
output ("~Loading Complete~");
output ("Please press any key to continue...");
_kbhit();
a = _getch();

clear();
PlaySound (0,0,0);

char x = 'X';
char sp = ' ';

while (1)
{
	while (doc != 1)
	{
	sscn (screen, 21);

	_kbhit();
	a = _getch();

	int alwd;
		if (a == 'w')
		{
			crow = crow - 1;
			alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
			if (alwd == 1)
			{
			screen [crow + 1][ccol] = sp;
			screen [crow][ccol] = 'X';
			}

			if (alwd == 0)
			{
			cout << "You cannot walk through walls.";
			crow = crow + 1;
			Sleep (1500);
			system ("cls");
			}		

			if (alwd == 3)
			{
				crow += 1;
				break;
			}

			if (alwd == 4)
				{
				doc = 1;
					if (a == 'w')
					{
					crow += 1;
					}
					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
				break;
				}
		}

		else if (a == 's')
		{
			crow = crow + 1;
			alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
			if (alwd == 1)
			{
			screen [crow - 1][ccol] = sp;
			screen [crow][ccol] = 'X';
			}

			if (alwd == 0)
			{
			cout << "You cannot walk through walls.";
			crow = crow - 1;
			Sleep (1500);
			system ("cls");
			}

			if (alwd == 3)
				break;

			if (alwd == 4)
				{
				doc = 1;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
				break;
				}
		}

		else if (a == 'a')
		{
			ccol = ccol - 1;
			alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
			if (alwd == 1)
			{
			screen [crow][ccol + 1] = sp;
			screen [crow][ccol] = 'X';
			}

			if (alwd == 0)
			{
			cout << "You cannot walk through walls.";
			ccol = ccol + 1;
			Sleep (1500);
			system ("cls");
			}

			if (alwd == 3)
			{
				ccol += 1;
				break;
			}

			if (alwd == 4)
				{
				doc = 1;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
				break;
				}
		}

		else if (a == 'd')
		{
			ccol = ccol + 1;
			alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
			if (alwd == 1)
			{
			screen [crow][ccol - 1] = sp;
			screen [crow][ccol] = 'X';
			}

			if (alwd == 0)
			{
			cout << "You cannot walk through walls.";
			ccol = ccol - 1;
			Sleep (1500);
			system ("cls");
			}

			if (alwd == 3)
			{
				ccol -= 1;
				break;
			}

			if (alwd == 4)
				{
				doc = 1;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
				break;
				}
		}
		bs (hp, spd, def, str, exp, f1, f2, f3, f4, f5, f6, afn, aflvl, afhp, afstr, afdef, afspd, afcharisma, bfs, heals, f2n, f3n, f4n, f5n, f6n, afid, money, ad2, ad3, ad4, ad5, ad6, f2hp, f2def, f2str, f2charisma, f2spd, f3hp, f3def, f3str, f3charisma, f3spd, f4hp, f4def, f4str, f4charisma, f4spd, f5hp, f5def, f5str, f5charisma, f5spd, f6hp, f6def, f6str, f6charisma, f6spd, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, crow, ccol, doc, ad1, a);
		clear1();
	}

	system("cls");

	while (doc == 1)
	{
		sscn (screen2, 21);
		screen2 [crow][ccol] = 'X';

		_kbhit();
		a = _getch();

		int alwd;
			if (a == 'w')
			{
				crow = crow - 1;
				alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
				if (alwd == 1)
				{
				screen2 [crow + 1][ccol] = sp;
				screen2 [crow][ccol] = 'X';
				}

				if (alwd == 0)
				{
				cout << "You cannot walk through walls.";
				crow = crow + 1;
				Sleep (1500);
				system ("cls");
				}

				if (alwd == 4)
				{
					doc = 0;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
					break;
				}
			}

			else if (a == 's')
			{
				crow = crow + 1;
				alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
				if (alwd == 1)
				{
				screen2 [crow - 1][ccol] = sp;
				screen2 [crow][ccol] = 'X';
				}

				if (alwd == 0)
				{
				cout << "You cannot walk through walls.";
				crow = crow - 1;
				Sleep (1500);
				system ("cls");
				}

				if (alwd == 4)
				{
					doc = 0;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
					break;
				}
			}

			else if (a == 'a')
			{
				ccol = ccol - 1;
				alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
				if (alwd == 1)
				{
				screen2 [crow][ccol + 1] = sp;
				screen2 [crow][ccol] = 'X';
				}

				if (alwd == 0)
				{
				cout << "You cannot walk through walls.";
				ccol = ccol + 1;
				Sleep (1500);
				system ("cls");
				}

				if (alwd == 4)
				{
					doc = 0;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
					break;
				}
			}

			else if (a == 'd')
			{
				ccol = ccol + 1;
				alwd = wall (crow, ccol, money, str, spd, screen, a, afcharisma, heals, bfs);
				if (alwd == 1)
				{
				screen2 [crow][ccol - 1] = sp;
				screen2 [crow][ccol] = 'X';
				}

				if (alwd == 0)
				{
				cout << "You cannot walk through walls.";
				ccol = ccol - 1;
				Sleep (1500);
				system ("cls");
				}

				if (alwd == 4)
					{
					doc = 0;
					if (a == 'w')
					{
					crow += 1;
					}

					if (a == 's')
					{
					crow -= 1;
					}

					if (a == 'a')
					{
					ccol += 1;
					}

					if (a == 'd')
					{
					ccol -= 1;
					}
					break;
				}
			}
			int blob;
			blob = bs (hp, spd, def, str, exp, f1, f2, f3, f4, f5, f6, afn, aflvl, afhp, afstr, afdef, afspd, afcharisma, bfs, heals, f2n, f3n, f4n, f5n, f6n, afid, money, ad2, ad3, ad4, ad5, ad6, f2hp, f2def, f2str, f2charisma, f2spd, f3hp, f3def, f3str, f3charisma, f3spd, f4hp, f4def, f4str, f4charisma, f4spd, f5hp, f5def, f5str, f5charisma, f5spd, f6hp, f6def, f6str, f6charisma, f6spd, bw1, bw2, bw3, bw4, bw5, bw6, bw7, bw8, bw9, bw10, bw11, bw12, bw13, bw14, bw15, bw16, bw17, bw18, bw19, bw20, bw21, bw22, bw23, bw24, bw25, bw26, bw27, bw28, bw29, bw30, bw31, bw32, bw33, bw34, crow, ccol, doc, ad1, a);
			if (blob == 1)
				{
				break;
				}
			clear1();
	}
	system("cls");

}// end of forever while loop
} //end of real forever

}// int main end

/*
	RRRRRRRRRRRRRRRR    DDDDDDDDDD
	AAAAAAAAAAAAAAA     EEEEEEEEEEE
	NNNNNNNNNNNNNNN     FFFFFFFFFFFF
	DDDDDDDDDDDDDD      SSSSSSSSSSS
	OOOOOOOOOOOO
	MMMMMMMMMMMMMMM
*/