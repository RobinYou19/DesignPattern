#pragma once

class SpecificContainer;

class Visitor
{
public:

	virtual void Visit( SpecificContainer* ipContainer ) = 0;

};
