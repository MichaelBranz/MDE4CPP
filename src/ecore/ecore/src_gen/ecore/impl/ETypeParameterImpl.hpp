//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP
#define ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ETypeParameter.hpp"

#include "ecore/impl/ENamedElementImpl.hpp"

//*********************************
namespace ecore 
{
	class ETypeParameterImpl :virtual public ENamedElementImpl, virtual public ETypeParameter 
	{
		public: 
			ETypeParameterImpl(const ETypeParameterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ETypeParameterImpl& operator=(ETypeParameterImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			ETypeParameterImpl();
			virtual std::shared_ptr<ETypeParameter> getThisETypeParameterPtr() const;
			virtual void setThisETypeParameterPtr(std::weak_ptr<ETypeParameter> thisETypeParameterPtr);



		public:
			//destructor
			virtual ~ETypeParameterImpl();
			
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
			 */
			virtual std::shared_ptr<Bag<ecore::EGenericType>> getEBounds() const ;
			
							
			
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ETypeParameter> m_thisETypeParameterPtr;
	};
}
#endif /* end of include guard: ECORE_ETYPEPARAMETERETYPEPARAMETERIMPL_HPP */
