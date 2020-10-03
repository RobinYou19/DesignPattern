// DesignPattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Memory Check
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

// STL
#include <iostream>
#include <vector>

// Visitor Includes
#include "SpecificContainer.h"
#include "SpecificVisitor.h"

namespace
{
    std::vector<int> dataVisitor;

    void VisitorDesignPattern( )
    {
        for( int i = 0; i < 11; ++i )
        {
            dataVisitor.emplace_back( i );
        }
        SpecificContainer* pContainer = new SpecificContainer( dataVisitor );

        SpecificVisitor* pVisitor = new SpecificVisitor( );

        pContainer->Accept( pVisitor );

        if( pContainer )
            delete pContainer;
        pContainer = nullptr;

        if( pVisitor )
            delete pVisitor;
        pVisitor = nullptr;
    }
}

int main()
{
    std::cout << "Starting Application ... \n";
    _CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
    _CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_DEBUG );

    //_crtBreakAlloc = 166; // Memory Leak Breaker

    // Visitor Design Pattern Scenario
    VisitorDesignPattern();

}
