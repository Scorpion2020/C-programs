/*I have used a couple of lines of code from 'http://www.cprogrammingnotes.com/question/tic-tac-toe-game.html'. This line have been declared in a comment next them lines*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int playerscore = 0, computerscore = 0;

int resultcheck(char sqaure[]);
void board(char square[]);
int dice(int user);

int dice(int user) /*Roll a six sided dice to see who goes first*/
{
	int dice;
	int max_number = 6;
	int mini_number = 1;

	srand(time(NULL));

	dice = rand() % (max_number + 1 - mini_number) + mini_number;

    if (dice == 1 || dice == 3 || dice == 5) {
     	printf ("Player goes first\n");
     	user = 1;
    }
    else {
    	printf ("Computer goes first\n");
		user = 2;
    }
	return user;
}

int main() /*This fuction is for the user to enter their position*/
{
    char square[10] = { 'a', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; /*From Cprogrammingnotes.com*/
    int player = 1, i, choice, user, dice3; 
    int vlc = 0;
    char mark, mark1, mark2, reset;
    int max_number = 9;
    int mini_number = 1;

	printf ("Do you wish to be 'X' or 'O': ");
    	scanf (" %c", &mark1);

	player = dice(user);

	do
    	{
        	board(square);
        	player = (player % 2) ? 1 : 2; /*This changes between the user and the computer. This was find on Cprogrammingnotes.com*/

		if (mark1 == 'X')
		{
			mark2 = 'O';
		}
		else
		{
			mark2 = 'X';
		}

		if (player == 1)
		{
        		printf("Player %d, enter a number:  ", player);
        		scanf("%d", &choice);
		}
		else if (player == 2)
		{	
    	LINE65:
    		srand(time(NULL));
			dice3 = rand() % (max_number + 1 - mini_number) + mini_number;
			choice = dice3;
		}
		if (player == 1)
		{
			mark = mark1;
		}
		else
		{
			mark = mark2;
		}

		switch(choice)
		{
			case 1:
				if (square[1] == '1')
				{
					square[1] = mark;
					break;
				}
				else
				{
					goto LINE171;
				}
			case 2:
				if (square[2] == '2')
				{
					square[2] = mark;
					break;
				}
				else
				{
					goto LINE171;
				}
			case 3:
				if (square[3] == '3')
				{
					square[3] = mark;
					break;
				}
				else
				{
					goto LINE171;
				}
			case 4:
				if (square[4] == '4')
				{
					square[4] = mark;	
					break;
				}
				else
				{
					goto LINE171;
				}
			case 5:
				if (square[5] == '5')
				{
					square[5] = mark;
					break;
				}
				else
				{
					goto LINE171;
				}
			case 6:
				if (square[6] == '6')
				{
					square[6] = mark;
					break;
				}
				else
				{
					goto LINE171;
				}
			case 7:
            	if (square[7] == '7')
                {
                	square[7] = mark;
                	break;
                }
                else
				{
					goto LINE171;
				}
            case 8:
            	if (square[8] == '8')
            	{
                	square[8] = mark;
                	break;
                }
                else
				{
					goto LINE171;
				}
            case 9:
                if (square[9] == '9')
                {
                	square[9] = mark;
                	break;
                }
                else
		{
			goto LINE171;
		}
		LINE171:
            default:
            	printf ("This square is already taken");
            	player--;
		if (player == 2)
		{
            		goto LINE65;
			
		}
		else
		{
			getchar();
			break;
		}
            	break;
		}
		i = resultcheck(square);  /*This will check if results after ever input.*/
		player++;
	}while (i == -1);

	if (i == 1)
	{
		printf ("Player %i wins!!!\n", --player);
		if (player == 1)
		{
			playerscore++;
		}
		else
		{
			computerscore++;
		}
	}
	else
	{
		printf ("It's a draw\n");
	}

	board(square);

	printf ("Do you wish to reset (y or n): ");
   	scanf (" %c", &reset);

	if (reset == 'y')
   	{
			
	/*	for (vlc = 0; vlc > 9; vlc++)
		{
			square[vlc] + vlc;
		}*/
		i = -1;
		main();
    }
    else
    {
    	printf ("Player won: %i\n", playerscore);
    	printf ("Computer won: %i\n", computerscore);
    	printf ("Goodbye\n");
    }

	return 0;
}
void board(char square[])
{
	printf("     |     |     \n  %c  |  %c  |  %c \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n     |     |     \n\n", square[1], square[2], square[3], square[4], square[5], square[6], square[7], square[8], square[9]);
}

int resultcheck(char square[])
{
	int vcl = 1;

	if (square[1] == square[2] && square[2] == square[3] || square[1] == square[4] && square[4] == square[7] || square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8] || square[4] == square[5] && square[5] == square[6])/*bug fix replacement of square[4] == square[4] to square[4] == square[5]*/
	{
		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9] || square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9') /*Tried other methods however couldn't get them to work. lines 245 to 259 where find on Cprogrammingnotes.com*/
	{
		return 0;
	}
	else
	{
		return -1; /*Board is not full and no one has won*/
	}
}

