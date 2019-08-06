//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECTCS_OBJECTIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECTCS_OBJECTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_Object.hpp"

#include "PSCS/impl/PSCSFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_ObjectImpl :virtual public ecore::EObjectImpl,
virtual public CS_Object 
	{
		public: 
			CS_ObjectImpl(const CS_ObjectImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_ObjectImpl& operator=(CS_ObjectImpl const&) = delete;

		protected:
			friend class PSCS::PSCSFactoryImpl;
			CS_ObjectImpl();
			virtual std::shared_ptr<CS_Object> getThisCS_ObjectPtr() const;
			virtual void setThisCS_ObjectPtr(std::weak_ptr<CS_Object> thisCS_ObjectPtr);



		public:
			//destructor
			virtual ~CS_ObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool checkAllParents(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier) ;
			
			/*!
			 */ 
			virtual bool contains(Any object) ;
			
			/*!
			 */ 
			virtual bool directlyContains(Any object) ;
			
			/*!
			 */ 
			virtual Any dispatchIn(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual Any dispatchIn(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual Any dispatchOut(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual Any dispatchOut(std::shared_ptr<uml::Operation>  operation,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Object> > getDirectContainers() ;
			
			/*!
			 */ 
			virtual Any getFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature) ;
			
			/*!
			 */ 
			virtual PSCS::Semantics::StructuredClassifiers::CS_LinkKind getLinkKind(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Link>  link,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSCS::Semantics::StructuredClassifiers::CS_Link> > getLinks(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual bool hasValueForAFeature(Any value) ;
			
			/*!
			 */ 
			virtual bool isDescendant(std::shared_ptr<uml::Interface>  contact,std::shared_ptr<uml::Interface>  interface_) ;
			
			/*!
			 */ 
			virtual bool isOperationProvided(Any reference,std::shared_ptr<uml::Operation>  operation) ;
			
			/*!
			 */ 
			virtual bool isOperationRequired(Any reference,std::shared_ptr<uml::Operation>  operation) ;
			
			/*!
			 */ 
			virtual bool realizesInterface(std::shared_ptr<uml::Class>  type,std::shared_ptr<uml::Interface>  interface_) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<Any> > selectTargetsForDispatching(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Link>  link,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint,uml::ConnectorKind connectorKind,std::shared_ptr<uml::Operation>  operation,bool toInternal) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<Any> > selectTargetsForSending(std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_Link>  link,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint,uml::ConnectorKind connectorKind,bool toInternal) ;
			
			/*!
			 */ 
			virtual void sendIn(Any eventOccurrence,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual void sendIn(Any eventOccurrence,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual void sendOut(Any eventOccurrence,std::shared_ptr<PSCS::Semantics::StructuredClassifiers::CS_InteractionPoint>  interactionPoint) ;
			
			/*!
			 */ 
			virtual void sendOut(Any eventOccurrence,std::shared_ptr<uml::Port>  onPort) ;
			
			/*!
			 */ 
			virtual void setFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<Any> >  values,int position) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSCS::PSCSFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<CS_Object> m_thisCS_ObjectPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_OBJECTCS_OBJECTIMPL_HPP */