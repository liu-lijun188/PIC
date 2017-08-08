#include "VectorPatch.h"

VectorPatch::VectorPatch(Parameters parametersList)
{
	cout << "Creating patches vector..." << endl;
	for (int i = 0; i < parametersList.numberOfPatches; i++)
	{
		cout << "Patch " << i << endl;
		Patch patch(parametersList);
		patchesVector.push_back(patch);
	}
}

VectorPatch::~VectorPatch()
{
}

void VectorPatch::startPIC()
{
	for (unsigned int i = 0; i < patchesVector.size(); i++)
	{
		cout << "Patch " << i << endl;
		patchesVector[i].startPIC();
	}
}
