//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_FACTORY_HPP
#define UML_FACTORY_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Class;
}

namespace uml 
{
	class Comment;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Element;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 An Element may be created from a Factory. A Factory is an instance of the MOF Factory class. A Factory creates
	instances of the types in a Package.
	
	<span style="background-color:#FF8000">This Element was merged from mof::Reflection package.</span> */
	class Factory:virtual public Element	{
		public:
 			Factory(const Factory &) {}
			Factory& operator=(Factory const&) = delete;
	
		protected:
			Factory(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Factory() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Creates an element that is an instance of the metaClass. Object::metaClass == metaClass and metaClass.isInstance(object)
			== true.
			All properties of the element are considered unset. The values are the same as if object.unset(property) was invoked for
			every property. */ 
			virtual std::shared_ptr<uml::Element>  create(std::shared_ptr<uml::Class>  metaClass)  = 0;
			
			
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
			/*!
			 */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_FACTORY_HPP */
