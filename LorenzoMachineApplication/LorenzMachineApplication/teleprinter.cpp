#include "stdafx.h"
#include "teleprinter.h"

teleprinter::teleprinter(lorenzMachine encryptionDevice)
{
	/*char c[] = { "*E-A SIU,DRJNFCKTZLWHYPQOBG.MXV!" };*/
	  char c[] = { "*E-A SIU,DRJNFCKTZLWHYPQOBG!MXV." };
	
	for (int i = 0b00000; i <= 0b11111; ++i)
	{
		charToBaudot[c[i]] = i;
	}

	for (int i = 0b00000; i <= 0b11111; ++i)
	{
		if (i == 31)
		{
			baudotToChar[i] = '.';
		}
		else
		{
			baudotToChar[i] = c[i];
		}
	}

	encryptor = encryptionDevice;

	/* Very long list */
	/*
	charToBaudot['Q'] = 0b10111;
	charToBaudot['W'] = 0b10011;
	charToBaudot['E'] = 0b00001;
	charToBaudot['R'] = 0b01010;
	charToBaudot['T'] = 0b10000;
	charToBaudot['Y'] = 0b10101;
	charToBaudot['U'] = 0b00111;
	charToBaudot['I'] = 0b00110;
	charToBaudot['O'] = 0b11000;
	charToBaudot['P'] = 0b10110;
	charToBaudot['A'] = 0b00011;
	charToBaudot['S'] = 0b00101;
	charToBaudot['D'] = 0b01001;
	charToBaudot['F'] = 0b01101;
	charToBaudot['G'] = 0b11010;
	charToBaudot['H'] = 0b10100;
	charToBaudot['J'] = 0b01011;
	charToBaudot['K'] = 0b01111;
	charToBaudot['L'] = 0b10010;
	charToBaudot['Z'] = 0b10001;
	charToBaudot['X'] = 0b11101;
	charToBaudot['C'] = 0b01110;
	charToBaudot['V'] = 0b11110;
	charToBaudot['B'] = 0b11001;
	charToBaudot['N'] = 0b01100;
	charToBaudot['M'] = 0b11100;
	//Symbols
	charToBaudot[','] = 0b01000;
	charToBaudot['-'] = 0b00010;
	charToBaudot['.'] = 0b11111;
	charToBaudot['!'] = 0b11011;
	charToBaudot[' '] = 0b00000;
	//baudotTochar(c)
	baudotToChar[0b10111] = 'Q';
	baudotToChar[0b10011] = 'W';
	baudotToChar[0b00001] = 'E';
	baudotToChar[0b01010] = 'R';
	baudotToChar[0b10000] = 'T';
	baudotToChar[0b10101] = 'Y';
	baudotToChar[0b00111] = 'U';
	baudotToChar[0b00110] = 'I';
	baudotToChar[0b11000] = 'O';
	baudotToChar[0b10110] = 'P';
	baudotToChar[0b00011] = 'A';
	baudotToChar[0b00101] = 'S';
	baudotToChar[0b01001] = 'D';
	baudotToChar[0b01101] = 'F';
	baudotToChar[0b11010] = 'G';
	baudotToChar[0b10100] = 'H';
	baudotToChar[0b01011] = 'J';
	baudotToChar[0b01111] = 'K';
	baudotToChar[0b10010] = 'L';
	baudotToChar[0b10001] = 'Z';
	baudotToChar[0b11101] = 'X';
	baudotToChar[0b01110] = 'C';
	baudotToChar[0b11110] = 'V';
	baudotToChar[0b11001] = 'B';
	baudotToChar[0b01100] = 'N';
	baudotToChar[0b11100] = 'M';
	//Symbols
	baudotToChar[0b01000] = ',';
	baudotToChar[0b00010] = '-';
	baudotToChar[0b11111] = '.';
	baudotToChar[0b11011] = '!';
	baudotToChar[0b00000] = ' ';*/
}

int teleprinter::getBaudotFromChar(char c)
{
	int baudot;

	baudot = charToBaudot[c];


	return baudot;
}

char teleprinter::getCharFromBaudot(int b)
{
	char c;

	c = baudotToChar[b];

	return c;
}

string teleprinter::encryptMessage(string message)
{
	string encmessage;
	encmessage.resize(message.length(), EOF);

	int baudot, xor;

	encmessage.empty();

	for (int i = 0; i < message.length(); ++i)
	{
		
		baudot = getBaudotFromChar(toupper(message[i])); //get baudot number

		xor = encryptor.encryptChar(baudot);

		encmessage[i] = getCharFromBaudot(xor);
	}

	encmessage[encmessage.length()] = EOF;

	return encmessage;
}