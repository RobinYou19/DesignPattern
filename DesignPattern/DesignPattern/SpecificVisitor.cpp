#include "SpecificVisitor.h"

// STL
#include <iostream>

void SpecificVisitor::Visit( SpecificContainer* ipContainer )
{
	std::vector<int> data;
	ipContainer->GetData( data );

	for( unsigned i = 0; i < data.size( ); ++i )
	{
		std::cout << data[ i ] << std::endl;
	}
}
