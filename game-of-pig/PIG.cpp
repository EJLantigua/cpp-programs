#include "PIG.h"

PIG::PIG()
{

	player= 1;
	ScoreA = 0;
	ScoreB = 0;
	totalA = 0;
	totalB = 0;
	choice = ' ';
	winner = false;
}

PIG::~PIG()
{}


void PIG::PlayGame()
{
	// TODO: Add your implementation code here.
	do
	{
		cout << "Turn " << player << endl;
		dice.roll();
		cout << "You rolled " << dice.getFace() << endl;
		if (player == 1)
			if (dice.getFace() == 1)
			{
				cout << "You lost your turn" << endl;
				ScoreA = 0;
				player = 2;
			}
			else
			{
				ScoreA += dice.getFace();
				cout << "You have so far " << ScoreA << endl;
				cout << "Roll or Hold? r / h: ";
				cin >> choice;
				if (choice == 'h')
				{
					totalA += ScoreA;
					cout << "The total score is: " << totalA << endl;
					winner = isWinner();
					if (winner)
						showWinner();
					player = 2;
					ScoreA = 0;
				}
			}
		else
		{
			if (dice.getFace() == 1)
			{
				cout << "You lost your turn" << endl;
				ScoreB = 0;
				player = 1;
			}
			else
			{
				ScoreB += dice.getFace();
				cout << "You have so far " << ScoreB << endl;
				cout << "Roll or Hold? r / h: ";
				cin >> choice;
				if (choice == 'h')
				{
					totalB += ScoreB;
					cout << "The total score is: " << totalB << endl;
					winner = isWinner();
					if (winner)
						showWinner();
					player = 1;
					ScoreB = 0;
				}
			}
		}
	} while (!winner);
}





bool PIG::isWinner()
{
	// TODO: Add your implementation code here.
	if (player == 1 && totalA >= 20)
		winner = true;
	else if (player == 2 && totalB >= 20)
		winner = true;
	else
		winner = false;
	return winner;
}

void PIG::showWinner()
{
	if (player == 1 && winner)
		cout << "Player A is the winner" << endl;
	else
		cout << "Player B is the winner" << endl;
}
