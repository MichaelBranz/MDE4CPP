//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EDATATYPEEDATATYPEIMPL_HPP
#define ECORE_EDATATYPEEDATATYPEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EDataType.hpp"

#include "ecore/impl/EClassifierImpl.hpp"

//*********************************
namespace ecore 
{
	class EDataTypeImpl :virtual public EClassifierImpl, virtual public EDataType 
	{
		public: 
			EDataTypeImpl(const EDataTypeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EDataTypeImpl& operator=(EDataTypeImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EDataTypeImpl();
			virtual std::shared_ptr<EDataType> getThisEDataTypePtr() const;
			virtual void setThisEDataTypePtr(std::weak_ptr<EDataType> thisEDataTypePtr);

			//Additional constructors for the containments back reference
			EDataTypeImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			EDataTypeImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~EDataTypeImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isSerializable() const ;
			
			/*!
			 */ 
			virtual void setSerializable (bool _serializable); 
			
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const ; 
			 
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
			std::weak_ptr<EDataType> m_thisEDataTypePtr;
	};
}
#endif /* end of include guard: ECORE_EDATATYPEEDATATYPEIMPL_HPP */
