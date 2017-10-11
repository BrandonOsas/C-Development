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

	symbolFreq();
	~symbolFreq() {}
	//symbolFreq(string sym);
	void PrintFreq();
	vector<pair<char, int>>* getFreq();
	void buildTab();
};
#endif