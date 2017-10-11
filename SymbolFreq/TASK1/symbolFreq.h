/**---------------------------------------------------
UFCFK4-30-2, TASK1
Class: symbolFreq

Purpose: Determines the frequency of each symbol in 
		 the given input text file "ToCompress.txt"

Author: Brandon Egonwman

Dtae: 2/3/2017
----------------------------------------------------*/
#pragma once
#ifndef SYMBOLFREQ_H
#define SYMBOLFREQ_H 
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <algorithm>    
using namespace std;

class symbolFreq
{
private:
	/*the file is read as a string*/
	string text; 
	ifstream inFile;
	vector<pair<char, int>> Freq_inOrder;
	map<char, int> freqTab;

	
public:
	/**-------------------------------------------------
	default constructor and Deconstructor
	empty.
	--------------------------------------------------*/
	symbolFreq() {}
	~symbolFreq() {}

	/**-------------------------------------------------
	Opens File and read each character
	@param: the file to be opened text = sym 
	--------------------------------------------------*/
	symbolFreq(string sym);

	/**-------------------------------------------------
	pass the characters in the file through an iterator
	of pairs and increament the frequency of the char
	--------------------------------------------------*/
	void buildTab();

	/**-------------------------------------------------
	convert the map into pairs of vectors and arrange 
	the frequency in descending order using the 
	comparator
	--------------------------------------------------*/
	void inOrder();

	/**-------------------------------------------------
	Iterate through the sorted Frequency and print out 
	the Key and the Value <char, int>
	--------------------------------------------------*/
	void PrintFreq();
};
#endif