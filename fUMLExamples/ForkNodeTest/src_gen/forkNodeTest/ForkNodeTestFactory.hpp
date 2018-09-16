//********************************************************************
//*    	
//* Warning: This file was generated by MDE4CPP Generator
//*
//********************************************************************

#ifndef FORKNODETEST_FACTORY_HPP
#define FORKNODETEST_FACTORY_HPP

#include "uml/Factory.hpp"

namespace forkNodeTest 
{
	class ForkClass;
	class ForkNodeTestPackage;
	class ForkNodeTestFactory;

	class ForkNodeTestFactory : virtual public uml::Factory 
	{ 
		protected:
			//protected default construcotr
			ForkNodeTestFactory(){}

			//Singleton Instance and Getter
			
			private:
				static std::shared_ptr<ForkNodeTestFactory> instance;
			public:
				static std::shared_ptr<ForkNodeTestFactory> eInstance();

			//Creator functions
			virtual std::shared_ptr<uml::Element> create(std::string _className) = 0;

			virtual std::shared_ptr<forkNodeTest::ForkClass> createForkClass() = 0;
			
			

			//Package
			virtual std::shared_ptr<ForkNodeTestPackage> getForkNodeTestPackage() = 0;
	};
}
#endif /* end of include guard: FORKNODETEST_FACTORY_HPP */
