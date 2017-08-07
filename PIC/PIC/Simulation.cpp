#include "Simulation.h"

Simulation::Simulation(Parameters parametersList)
{
	cout << "Starting simulation..." << endl;
	Timer newTimer;
	VectorPatch patchesVector(parametersList.numberOfPatches);
}

Simulation::~Simulation()
{
}

void Simulation::loadBalance()
{
}
