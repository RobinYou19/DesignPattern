#pragma once

#include "Container.h"
#include "SpecificVisitor.h"

// STL
#include <vector>

class SpecificContainer : public Container
{
public:
	SpecificContainer( std::vector<int> iData );

	void Accept( SpecificVisitor* ipVisitor ) override;

	void GetData( std::vector<int>& ioData );

private:
	std::vector<int> m_data;
};

