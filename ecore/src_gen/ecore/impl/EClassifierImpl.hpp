//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_ECLASSIFIERECLASSIFIERIMPL_HPP
#define ECORE_ECLASSIFIERECLASSIFIERIMPL_HPP

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

//*********************************
// generated Includes

//Model includes
#include "../EClassifier.hpp"

#include "ecore/impl/ENamedElementImpl.hpp"



//*********************************
namespace ecore 
{
	class EClassifierImpl :virtual public ENamedElementImpl, virtual public EClassifier 
	{
		public: 
			EClassifierImpl(const EClassifierImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EClassifierImpl& operator=(EClassifierImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EClassifierImpl();

			//Additional constructors for the containments back reference
			EClassifierImpl(std::weak_ptr<ecore::EPackage > par_ePackage);




		public:
			//destructor
			virtual ~EClassifierImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool isInstance(boost::any object)  const  ;
			
			/*!
			 */ 
			virtual void setGeneratedInstance(bool isGenerated)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual int getClassifierID() const ;
			
			/*!
			 */ 
			virtual void setClassifierID (int _classifierID); 
			
			/*!
			 */ 
			virtual boost::any getDefaultValue() const ;
			
			/*!
			 */ 
			virtual void *  getInstanceClass() const ;
			
			/*!
			 */ 
			virtual void setInstanceClass (void *  _instanceClass); 
			
			/*!
			 */ 
			virtual std::string getInstanceClassName() const ;
			
			/*!
			 */ 
			virtual void setInstanceClassName (std::string _instanceClassName); 
			
			/*!
			 */ 
			virtual std::string getInstanceTypeName() const ;
			
			/*!
			 */ 
			virtual void setInstanceTypeName (std::string _instanceTypeName); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EPackage > getEPackage() const ;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage_ePackage) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::ETypeParameter> > getETypeParameters() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_ECLASSIFIERECLASSIFIERIMPL_HPP */

