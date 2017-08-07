#include "Parameters.h"

Parameters::Parameters(string filename)
{
	ifstream inputFile(filename);	// Open input file
	
	char firstCharacter;
	string name;
	string value;

	if (inputFile.is_open())
	{
		cout << "Processing parameters" << endl;

		while (!inputFile.eof())	// Until the end of the file is reached
		{
			// Check what the first character in each line is
			firstCharacter = static_cast<char>(inputFile.get());
			// cout << "First character is: " << firstCharacter << endl;

			// Check for commented lines
			if (firstCharacter == '%')
			{
				// cout << "Ran into a comment!!!" << endl;
				inputFile.ignore(256, '\n');
			}
			// Check for empty lines 
			else if (firstCharacter == '\r')
			{
				// cout << "Ran into an empty line!!!" << endl;
				inputFile.ignore(256, '\n');
			}
			// Store values in a string vector, names and values are space separated
			else
			{
				inputFile >> name >> value;
				valuesVector.push_back(value);
				// cout << "Value is: " << value << endl;
				inputFile.ignore(256, '\n');
			}
		}
		inputFile.close();
	}
	else
	{
		cout << "Unable to open input file" << endl;
		fileNotOpened = true;
	}
	cout << "Number of input parameters is: " << valuesVector.size() << endl;
}

Parameters::~Parameters()
{
}

void Parameters::printValuesVector()
{
	if (valuesVector.size() != 0)
	{
		for (size_t i = 0; i < (valuesVector.size()); i++)
		{
			cout << "Parameter " << i + 1 << " is: " << valuesVector[i] << endl;
		}
		cout << endl;
	}
}

void Parameters::distributeInputs()
{
	if (!fileNotOpened)
	{
		try
		{
			timeStep = stod(valuesVector[0]);
		}
		catch (invalid_argument&)
		{
			cout << "Invalid argument detected for time step!!!" << endl;
		}

		try
		{
			maximumNumberOfIterations = stoi(valuesVector[1]);
		}
		catch (invalid_argument&)
		{
			cout << "Invalid argument detected for maximum number of iterations!!!" << endl;
		}
		
		try
		{
			numberOfPatches = stoi(valuesVector[2]);
		}
		catch (invalid_argument&)
		{
			cout << "Invalid argument detected for number of patches!!!" << endl;
		}
		
		try
		{
			meshFilePath = valuesVector[3];
		}
		catch (invalid_argument&)
		{
			cout << "Invalid argument detected for mesh file path!!!" << endl;
		}
	}
}

void Parameters::printMemberVariables()
{
	cout << "Time step: " << timeStep << endl;
	cout << "Maximum number of iterations: " << maximumNumberOfIterations << endl;
	cout << "Number of patches: " << numberOfPatches << endl;
	cout << "Mesh file path: " << meshFilePath << endl;
}

void Parameters::hitReturnToEnter()
{
	do {
		cout << endl << "Press the return key to continue . . .";
	} while (cin.get() != '\n');
}