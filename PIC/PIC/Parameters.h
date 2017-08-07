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
	bool fileNotOpened = false;

public:
	Parameters(string filename);	// Default constructor, reads input file and dumps data in valuesVector
	~Parameters();

	void printValuesVector();		// Print raw input from valuesVector
	void distributeInputs();		// Assign values to member variables
	void printMemberVariables();	// Print member variables
	void hitReturnToEnter();		// Keeps console window open

	double timeStep;
	int maximumNumberOfIterations, numberOfPatches;
	string meshFilePath;
};
