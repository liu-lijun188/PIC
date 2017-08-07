#include "VectorPatch.h"

VectorPatch::VectorPatch(int numberOfPatches)
{
	cout << "Creating patches vector..." << endl;
	for (int i = 0; i < numberOfPatches; i++)
	{
		cout << "Patch " << i << endl;
		patchesVector[i].initialisePatch();
	}
}

VectorPatch::~VectorPatch()
{
}
