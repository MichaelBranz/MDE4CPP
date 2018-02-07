//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ENAMEDELEMENT_HPP
#define ECORE_ENAMEDELEMENT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <map>
#include <string>
#include <vector>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace ecore 
{
	class EAnnotation;
}

namespace ecore 
{
	class EModelElement;
}

// base class includes
#include "ecore/EModelElement.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class ENamedElement:virtual public EModelElement
	{
		public:
 			ENamedElement(const ENamedElement &) {}
			ENamedElement& operator=(ENamedElement const&) = delete;

		protected:
			ENamedElement(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~ENamedElement() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getName() const = 0;
			
			/*!
			 */ 
			virtual void setName (std::string _name)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			std::string m_name ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
	};

}
#endif /* end of include guard: ECORE_ENAMEDELEMENT_HPP */

