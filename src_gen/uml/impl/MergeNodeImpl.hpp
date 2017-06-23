//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_MERGENODEMERGENODEIMPL_HPP
#define UML_MERGENODEMERGENODEIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../MergeNode.hpp"

#include "impl/ControlNodeImpl.hpp"



//*********************************
namespace uml 
{
	class MergeNodeImpl :virtual public ControlNodeImpl, virtual public MergeNode 
	{
		public: 
			MergeNodeImpl(const MergeNodeImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			MergeNodeImpl& operator=(MergeNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			MergeNodeImpl();

		public:
			//destructor
			virtual ~MergeNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A MergeNode has one outgoing ActivityEdge.
			outgoing->size()=1 */ 
			virtual bool one_outgoing_edge(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The ActivityEdges incoming to and outgoing from a MergeNode must be either all ObjectFlows or all ControlFlows.
			let allEdges : Set(ActivityEdge) = incoming->union(outgoing) in
			allEdges->forAll(oclIsKindOf(ControlFlow)) or allEdges->forAll(oclIsKindOf(ObjectFlow)) */ 
			virtual bool edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const ;/*!
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
#endif /* end of include guard: UML_MERGENODEMERGENODEIMPL_HPP */
