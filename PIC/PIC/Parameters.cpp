#include "Parameters.h"

Parameters::Parameters(string filename)
{
	ifstream inputFile(filename);	// Open input file

	char firstCharacter;
	string name;
	string value;

	if (inputFile.is_open())
	{
		cout << "Hello" << endl;
		/*
		while (!inputFile.eof())	// Until the end of the file is reached
		{
			// Check what the first character in each line is
			firstCharacter = inputFile.get();
			// cout << "First character is: " << firstCharacter[0] << endl;

			// Check for commented lines
			if (firstCharacter == '%')
			{
				// cout << "Ran into a comment!!!" << endl;
				inputFile.ignore(256, '\n');
			}
			// Check for empty lines 
			else if (firstCharacter == '\n')
			{
				// cout << "Ran into an empty line!!!" << endl;
			}
			// Store values in a string vector, names and values are space separated
			else
			{
				inputFile >> name >> value;
				valuesVector.push_back(value);
				// cout << "Value is: " << value << endl;
				inputFile.ignore(256, '\n');
			}
			// cout << endl;
		}
		inputFile.close();
		*/
	}
	else cout << "Unable to open input file";
	cout << "Vector size is: " << valuesVector.size() << endl << endl;

	// hitReturnToEnter();
}

Parameters::~Parameters()
{
}

void Parameters::printValuesVector()
{
	for (size_t i = 0; i < (valuesVector.size()); i++)
	{
		cout << "Variable " << i + 1 << " is: " << valuesVector[i] << endl;
	}
	cout << endl;
}

void Parameters::distributeInputs()
{
	// Integers
	/*
	try
	{
		var1 = stoi(valuesVector[0]);
	}
	catch (invalid_argument&)
	{
		cout << "Invalid argument detected for var1!!!" << endl;
	}
	*/

	var1 = stoi(valuesVector[0]);
	var2 = stoi(valuesVector[1]);
	var3 = stoi(valuesVector[2]);
	var4 = stoi(valuesVector[3]);
	var5 = stoi(valuesVector[4]);

	// Doubles
	var6 = stod(valuesVector[5]);
	var7 = stod(valuesVector[6]);
	var8 = stod(valuesVector[7]);

	// Strings
	var9 = valuesVector[8];
	var10 = valuesVector[9];
}

void Parameters::printMemberVariables()
{
	cout << endl << "var1: " << var1 << endl;
	cout << "var2: " << var2 << endl;
	cout << "var3: " << var3 << endl;
	cout << "var4: " << var4 << endl;
	cout << "var5: " << var5 << endl;
	cout << "var6: " << var6 << endl;
	cout << "var7: " << var7 << endl;
	cout << "var8: " << var8 << endl;
	cout << "var9: " << var9 << endl;
	cout << "var10: " << var10 << endl;

}

void Parameters::hitReturnToEnter()
{
	do {
		cout << endl << "Press the return key to continue . . .";
	} while (cin.get() != '\n');
}