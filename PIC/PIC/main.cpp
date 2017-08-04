#include "Simulation.h"
#include "Parameters.h"

int main()
{

	Parameters parametersList("inputs.txt");
	parametersList.printValuesVector();
	parametersList.distributeInputs();
	parametersList.printMemberVariables();

	Simulation simulation();

	return 0;
}