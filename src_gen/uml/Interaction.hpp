//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTION_HPP
#define UML_INTERACTION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

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

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
namespace uml 
{
	class Action;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class BehavioralFeature;
}

namespace uml 
{
	class BehavioredClassifier;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class Connector;
}

namespace uml 
{
	class Constraint;
}

namespace uml 
{
	class Dependency;
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
	class ElementImport;
}

namespace uml 
{
	class Extension;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Gate;
}

namespace uml 
{
	class GeneralOrdering;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionFragment;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class InterfaceRealization;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Message;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Parameter;
}

namespace uml 
{
	class ParameterSet;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class Reception;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "uml/Behavior.hpp"

#include "uml/InteractionFragment.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An Interaction is a unit of Behavior that focuses on the observable exchange of information between connectable elements.
	<p>From package UML::Interactions.</p> */
	class Interaction:virtual public Behavior,virtual public InteractionFragment
	{
		public:
 			Interaction(const Interaction &) {}
			Interaction& operator=(Interaction const&) = delete;

		protected:
			Interaction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Interaction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 An Interaction instance must not be contained within another Interaction instance.
			enclosingInteraction->isEmpty() */ 
			virtual bool not_contained(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Actions owned by the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::Action, uml::Element>> getAction() const = 0;
			
			/*!
			 Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::Gate, uml::NamedElement>> getFormalGate() const = 0;
			
			/*!
			 The ordered set of fragments in the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::InteractionFragment, uml::NamedElement>> getFragment() const = 0;
			
			/*!
			 Specifies the participants in this Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::Lifeline, uml::NamedElement>> getLifeline() const = 0;
			
			/*!
			 The Messages contained in this Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::Message, uml::NamedElement>> getMessage() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Actions owned by the Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::Action, uml::Element>> m_action;
			/*!
			 Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::Gate, uml::NamedElement>> m_formalGate;
			/*!
			 The ordered set of fragments in the Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::InteractionFragment, uml::NamedElement>> m_fragment;
			/*!
			 Specifies the participants in this Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::Lifeline, uml::NamedElement>> m_lifeline;
			/*!
			 The Messages contained in this Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::Message, uml::NamedElement>> m_message;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;/*!
			 The contexts that this element may be redefined from.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::Classifier>> getRedefinitionContext() const = 0;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement>> getRole() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_INTERACTION_HPP */
