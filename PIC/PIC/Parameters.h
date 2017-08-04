#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <exception>

using namespace std;

class Parameters
{
private:
	vector<string> valuesVector;
	int var1, var2, var3, var4, var5;
	double var6, var7, var8;
	string var9, var10;
	bool fileNotOpened = false;
public:
	Parameters(string filename);	// Default constructor, reads input file and dumps data in valuesVector
	~Parameters();

	void printValuesVector();		// Print raw input from valuesVector
	void distributeInputs();		// Assign values to member variables
	void printMemberVariables();	// Print member variables
	void hitReturnToEnter();		// Keeps console window open
};