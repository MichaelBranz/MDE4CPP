//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_BEHAVIOREDCLASSIFIERBEHAVIOREDCLASSIFIERIMPL_HPP
#define UML_BEHAVIOREDCLASSIFIERBEHAVIOREDCLASSIFIERIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../BehavioredClassifier.hpp"

#include "impl/ClassifierImpl.hpp"



//*********************************
namespace uml 
{
	class BehavioredClassifierImpl :virtual public ClassifierImpl, virtual public BehavioredClassifier 
	{
		public: 
			BehavioredClassifierImpl(const BehavioredClassifierImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			BehavioredClassifierImpl& operator=(BehavioredClassifierImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			BehavioredClassifierImpl();

		public:
			//destructor
			virtual ~BehavioredClassifierImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If a behavior is classifier behavior, it does not have a specification.
			classifierBehavior->notEmpty() implies classifierBehavior.specification->isEmpty() */ 
			virtual bool class_behavior(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Retrieves all the interfaces on which this behaviored classifier or any of its parents has an interface realization dependency. */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Interface>>> getAllImplementedInterfaces()  ;
			
			/*!
			 Retrieves the interfaces on which this behaviored classifier has an interface realization dependency. */ 
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Interface>>> getImplementedInterfaces()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A Behavior that specifies the behavior of the BehavioredClassifier itself.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Behavior> getClassifierBehavior() const ;
			
			/*!
			 A Behavior that specifies the behavior of the BehavioredClassifier itself.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setClassifierBehavior(std::shared_ptr<uml::Behavior> _classifierBehavior) ;
			/*!
			 The set of InterfaceRealizations owned by the BehavioredClassifier. Interface realizations reference the Interfaces of which the BehavioredClassifier is an implementation.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InterfaceRealization>>> getInterfaceRealization() const ;
			
			/*!
			 Behaviors owned by a BehavioredClassifier.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Behavior>>> getOwnedBehavior() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getOwnedMember() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Feature>>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::NamedElement>>> getMember() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_BEHAVIOREDCLASSIFIERBEHAVIOREDCLASSIFIERIMPL_HPP */
