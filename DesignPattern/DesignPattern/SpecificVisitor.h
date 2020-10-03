#pragma once

#include "Visitor.h"
#include "SpecificContainer.h"

class SpecificVisitor : public Visitor
{
public:

	void Visit( SpecificContainer* ipContainer ) override;

};
