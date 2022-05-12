/*
Emijoel Lantigua
3/19/2019
Khaled Mansour CPS171 - 01
MP5 - Arrays
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int ROW = 5;
const int COLUM = 5;
const char FIRST_CHAR = 'A';
const char LAST_CHAR = 'Y';
const char ENCRYP = 'E';
const char DECRYP = 'D';

string uniqueWordCheck(ifstream& file, string word)
{
	string unique = "";

	file >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (unique.find(word[i]) == -1)
		{
			unique += word[i];
		}
	}
	return unique;
}

void fillArray(ofstream& fout, char uniqArray[][COLUM], string word)
{
	int r = 0, c = 0;

	for (int i = 0; i < word.length(); i++)
	{
		uniqArray[r][c] = word[i];
		fout << uniqArray[r][c] << " ";
		c++;
		if (c == 5)
		{
			fout << endl;
			c = 0;
			r++;
		}
	}
	for (char ch = FIRST_CHAR; ch <= LAST_CHAR; ch++)
	{
		if (word.find(ch) == -1)
		{
			uniqArray[r][c] = ch;
			fout << uniqArray[r][c] << " ";
			c++;
			if (c == 5)
			{
				fout << endl;
				c = 0;
				r++;
			}
		}
	}
}

string decryptedLines(ifstream& file, ofstream& fout, char uniqArray[][COLUM], string crypline)
{
	string decrypline = "";
	char ch = ' ';
	int r = 0, c = 0, i = 0;

	file >> ch;
	cout << ch;
	getline(file, crypline);
	cout << crypline << endl;

	switch (ch)
	{
	case ENCRYP:
		for (i = 0; i < crypline.length(); i++)
		{
			if (toupper(crypline[i]) < FIRST_CHAR || toupper(crypline[i]) > LAST_CHAR)
			{
				decrypline += crypline[i];
			}
			else
			{
				for (r = 0; r < ROW; r++)
				{
					for (c = 0; c < COLUM; c++)
					{
						if (toupper(crypline[i]) == uniqArray[c][r])
						{
							decrypline += uniqArray[r][c];
						}
					}
				}
			}
		}
		break;
	case DECRYP:
		for (i = 0; i < crypline.length(); i++)
		{
			if (!(crypline[i] >= FIRST_CHAR) && (crypline[i] <= LAST_CHAR))
			{
				decrypline += crypline[i];
			}
			else
			{
				for (r = 0; r < ROW; r++)
				{
					for (c = 0; c < COLUM; c++)
					{
						if (crypline[i] == uniqArray[r][c])
						{
							decrypline += uniqArray[c][r];
						}
					}
				}
			}
		}
		break;
	}
	return decrypline;
}

void displayPart1()
{
	string codeLine = "", uniqWord = "", decrypLine = "";
	int r = 0, c = 0;
	char letter = ' ';

	char systemArray[ROW][COLUM];

	ifstream fin("Crypted.txt");

	ofstream fout("Crypted_output.txt");

	uniqWord = uniqueWordCheck(fin, codeLine);
	fout << uniqWord << endl;
	fillArray(fout, systemArray, uniqWord);
	while (!fin.eof())
	{
		decrypLine = decryptedLines(fin, fout, systemArray, codeLine);
		fout << decrypLine << endl;
	}

	fin.close();
	fout.close();
}

int main()
{
	displayPart1();
}