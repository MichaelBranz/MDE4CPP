//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef SIMPLEOPERATIONS_TESTSUITE_HPP
#define SIMPLEOPERATIONS_TESTSUITE_HPP

#include "cute_suite.h"
#include "cute_runner.h"
#include "xml_listener.h"
#include "ide_listener.h"

extern cute::suite make_suite_SimpleOperations_TestSuite();

extern bool runSimpleOperations_TestSuiteSubTests( cute::runner<cute::xml_listener<cute::ide_listener<cute::null_listener> > > runner );

#endif /* end of include guard: SIMPLEOPERATIONS_TESTSUITE_HPP */