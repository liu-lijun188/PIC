#include "Simulation.h"

Simulation::Simulation(Parameters parametersList)
{
	cout << "Starting simulation..." << endl;
	Timer newTimer;
	VectorPatch patchesVector(parametersList);
	patchesVector.startPIC();
}

Simulation::~Simulation()
{
}

void Simulation::loadBalance()
{
}
