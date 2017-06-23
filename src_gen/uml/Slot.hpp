//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SLOT_HPP
#define UML_SLOT_HPP

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
	class InstanceSpecification;
}

namespace uml 
{
	class StructuralFeature;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A Slot designates that an entity modeled by an InstanceSpecification has a value or values for a specific StructuralFeature.
	<p>From package UML::Classification.</p> */
	class Slot:virtual public Element	{
		public:
 			Slot(const Slot &) {}
			Slot& operator=(Slot const&) = delete;
	
		protected:
			Slot(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Slot() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The StructuralFeature that specifies the values that may be held by the Slot.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::StructuralFeature> getDefiningFeature() const = 0;
			
			/*!
			 The StructuralFeature that specifies the values that may be held by the Slot.
			<p>From package UML::Classification.</p> */
			virtual void setDefiningFeature(std::shared_ptr<uml::StructuralFeature> _definingFeature) = 0;
			/*!
			 The value or values held by the Slot.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ValueSpecification>>> getValue() const = 0;
			
			/*!
			 The InstanceSpecification that owns this Slot.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::InstanceSpecification> getOwningInstance() const = 0;
			
			/*!
			 The InstanceSpecification that owns this Slot.
			<p>From package UML::Classification.</p> */
			virtual void setOwningInstance(std::shared_ptr<uml::InstanceSpecification> _owningInstance) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The StructuralFeature that specifies the values that may be held by the Slot.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::StructuralFeature> m_definingFeature;
			/*!
			 The value or values held by the Slot.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::ValueSpecification>>> m_value;
			/*!
			 The InstanceSpecification that owns this Slot.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::InstanceSpecification> m_owningInstance;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_SLOT_HPP */
