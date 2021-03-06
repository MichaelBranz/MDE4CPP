//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP
#define UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Substitution.hpp"

#include "uml/impl/RealizationImpl.hpp"

//*********************************
namespace uml 
{
	class SubstitutionImpl :virtual public RealizationImpl, virtual public Substitution 
	{
		public: 
			SubstitutionImpl(const SubstitutionImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SubstitutionImpl& operator=(SubstitutionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			SubstitutionImpl();
			virtual std::shared_ptr<Substitution> getThisSubstitutionPtr() const;
			virtual void setThisSubstitutionPtr(std::weak_ptr<Substitution> thisSubstitutionPtr);

			//Additional constructors for the containments back reference
			SubstitutionImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			SubstitutionImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			SubstitutionImpl(std::weak_ptr<uml::Package > par_owningPackage);


			//Additional constructors for the containments back reference
			SubstitutionImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference
			SubstitutionImpl(std::weak_ptr<uml::Classifier > par_substitutingClassifier);




		public:
			//destructor
			virtual ~SubstitutionImpl();
			
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
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier > getContract() const ;
			
			/*!
			 The contract with which the substituting classifier complies.
			<p>From package UML::Classification.</p> */
			virtual void setContract(std::shared_ptr<uml::Classifier> _contract_contract) ;
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual std::weak_ptr<uml::Classifier > getSubstitutingClassifier() const ;
			
			/*!
			 Instances of the substituting classifier are runtime substitutable where instances of the contract classifier are expected.
			<p>From package UML::Classification.</p> */
			virtual void setSubstitutingClassifier(std::shared_ptr<uml::Classifier> _substitutingClassifier_substitutingClassifier) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const ;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const ;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Substitution> m_thisSubstitutionPtr;
	};
}
#endif /* end of include guard: UML_SUBSTITUTIONSUBSTITUTIONIMPL_HPP */
