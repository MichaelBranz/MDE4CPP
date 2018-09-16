//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_ELEMENT_LEVEL1_HPP
#define SUBSETUNIONBENCHMARK_ELEMENT_LEVEL1_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace subsetUnionBenchmark
{
	class SubsetUnionBenchmarkFactory;
}

//Forward Declaration for used types
namespace subsetUnionBenchmark 
{
	class Element;
}

// base class includes
#include "subsetUnionBenchmark/Element.hpp"

// enum includes


//*********************************
namespace subsetUnionBenchmark 
{
	/*!
	 */
	class Element_Level1:virtual public Element
	{
		public:
 			Element_Level1(const Element_Level1 &) {}
			Element_Level1& operator=(Element_Level1 const&) = delete;

		protected:
			Element_Level1(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Element_Level1() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: SUBSETUNIONBENCHMARK_ELEMENT_LEVEL1_HPP */
