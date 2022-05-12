#pragma once
#include "Die.h"

class PIG
{
public:
	PIG();
	~PIG();
private:
	int player;
	int ScoreA;
	int ScoreB;
	int totalA;
	int totalB;
	Die dice;
	char choice;
	bool winner;
public:
	void PlayGame();
private: // helpers
	void showWinner();
	bool isWinner();
};

