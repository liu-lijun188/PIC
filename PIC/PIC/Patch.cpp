#include "Patch.h"

Patch::Patch(Parameters parametersList)
{
	localParametersList = parametersList;
	localParametersList.logMessages("Initialising patch...");
	particlesVector = VectorParticle(&localParametersList);
	mesh = Mesh(&localParametersList);
	mesh.checkMesh();
}

Patch::~Patch()
{
}

void Patch::startPIC()
{
	localParametersList.logMessages("Starting PIC loop...");

}