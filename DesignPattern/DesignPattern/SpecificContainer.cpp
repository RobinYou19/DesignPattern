#include "SpecificContainer.h"

SpecificContainer::SpecificContainer( std::vector<int> iData ) : m_data( iData )
{

}

void SpecificContainer::Accept( SpecificVisitor* ipVisitor )
{
	if( ipVisitor )
		ipVisitor->Visit( this );
}

void SpecificContainer::GetData( std::vector<int>& ioData )
{
	ioData = m_data;
}
