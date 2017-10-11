#include "stdafx.h"
#include "symbolFreq.h"

using namespace std;
/**-------------------------------------------------
comparator to set the priority queue in decending
order
@param: L
@param: R
--------------------------------------------------*/
static bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
	return i.second > j.second;
}
symbolFreq::symbolFreq()
{
	Freq_inOrder = new vector<pair<char, int>>;
	loadFile();
	buildTab();
}

void symbolFreq::loadFile()
{
	inFile.open("ToCompress.txt");
	getline(inFile, text);
	while (inFile >> text)
	{
		for (size_t i = 0; i < text.length(); i++)
		{
			freqTab[text[i]]++;
		}
	}
	
}

void symbolFreq::buildTab()
{
	for (size_t i = 0; i < text.length(); i++)
	{
		char c = text.at(i);
		if (freqTab.find(text.at(i)) == freqTab.end())
		{
			/*get the key and value from the file*/
			freqTab.insert(pair<char, int>(text[i], 1));
		}
		else
		{
			/*if the symbol has been read already increment the frequency*/
			freqTab[text[i]]++;
		}
	}

	inOrder();
}

void symbolFreq::inOrder()
{
	for (map<char, int>::iterator it = freqTab.begin();
	it != freqTab.end(); ++it)
	{
		/*convert the freqencies to vectors of pairs*/
		Freq_inOrder->push_back(make_pair(it->first, it->second));
	}
	/*arrange the freq in decending order*/
	sort(Freq_inOrder->begin(), Freq_inOrder->end(), compare);
}



void symbolFreq::PrintFreq()
{
	cout << "Frequency Table:" << endl;
	for (vector<pair<char, int>>::iterator it = Freq_inOrder->begin();
	it != Freq_inOrder->end(); ++it)
	{
		cout << it->first << "\t-\t" << it->second << endl;
	}
}

vector<pair<char, int>>* symbolFreq::getFreq()
{
		return Freq_inOrder;
}