#pragma once

class SpecificVisitor;

class Container
{
public:

	virtual void Accept( SpecificVisitor* ipVisitor ) = 0;

};
