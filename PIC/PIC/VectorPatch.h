#pragma once
#include "Patch.h"
#include <vector>

class VectorPatch
{
public:
	VectorPatch(int numberOfPatches);
	~VectorPatch();

	vector<Patch> patchesVector;
};

