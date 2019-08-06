//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGYCS_REQUESTPROPAGATIONSTRATEGYIMPL_HPP
#define PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGYCS_REQUESTPROPAGATIONSTRATEGYIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../CS_RequestPropagationStrategy.hpp"

#include "PSCS/impl/PSCSFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSCS::Semantics::StructuredClassifiers 
{
	class CS_RequestPropagationStrategyImpl :virtual public ecore::EObjectImpl,
virtual public CS_RequestPropagationStrategy 
	{
		public: 
			CS_RequestPropagationStrategyImpl(const CS_RequestPropagationStrategyImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			CS_RequestPropagationStrategyImpl& operator=(CS_RequestPropagationStrategyImpl const&) = delete;

		protected:
			friend class PSCS::PSCSFactoryImpl;
			CS_RequestPropagationStrategyImpl();
			virtual std::shared_ptr<CS_RequestPropagationStrategy> getThisCS_RequestPropagationStrategyPtr() const;
			virtual void setThisCS_RequestPropagationStrategyPtr(std::weak_ptr<CS_RequestPropagationStrategy> thisCS_RequestPropagationStrategyPtr);



		public:
			//destructor
			virtual ~CS_RequestPropagationStrategyImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::string getName() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<Any> > select(std::shared_ptr<Bag<Any> >  potentialTargets,Any context) ;
			
			
			
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
			std::weak_ptr<CS_RequestPropagationStrategy> m_thisCS_RequestPropagationStrategyPtr;
	};
}
#endif /* end of include guard: PSCS_SEMANTICS_STRUCTUREDCLASSIFIERS_CS_REQUESTPROPAGATIONSTRATEGYCS_REQUESTPROPAGATIONSTRATEGYIMPL_HPP */