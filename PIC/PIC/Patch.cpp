#include "Patch.h"

Patch::Patch(Parameters parametersList)
{
	localParametersList = parametersList;
	localParametersList.logMessages("Initialising patch...");
}


Patch::~Patch()
{
}

void Patch::startPIC()
{
	localParametersList.logMessages("Starting PIC loop...");
}
