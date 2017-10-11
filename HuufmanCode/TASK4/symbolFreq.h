/**---------------------------------------------------
UFCFK4-30-2, TASK4
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
public:
	string text;
	ifstream inFile;
	vector<pair<char, int>> *Freq_inOrder;
	map<char, int> freqTab;
	void inOrder();
	void loadFile();
	/**-------------------------------------------------
	default constructor with the functions called in it
	--------------------------------------------------*/
	symbolFreq();

	/**-------------------------------------------------
	 Deconstructor
	empty.
	--------------------------------------------------*/
	~symbolFreq() {}

	/**-------------------------------------------------
	Iterate through the sorted Frequency and print out
	the Key and the Value <char, int>
	--------------------------------------------------*/
	void PrintFreq();

	/**-------------------------------------------------
	stores the value of Freq in_Order 
	--------------------------------------------------*/
	vector<pair<char, int>>* getFreq();

	/**-------------------------------------------------
	pass the characters in the file through an iterator
	of pairs and increament the frequency of the char
	--------------------------------------------------*/
	void buildTab();
};
#endif