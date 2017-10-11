#pragma once
#include <string>
using namespace std;

class userComment
{
private:
	string comments;
	int reads;
	int thumbsUp;
public:
	userComment() {}
	userComment(string comments, int reads, int thumbsUp);
	void incrementReads();
	void incrementThumbsUp();
};