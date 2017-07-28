//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DESTROYLINKACTIONACTIVATIONDESTROYLINKACTIONACTIVATIONIMPL_HPP
#define FUML_DESTROYLINKACTIONACTIVATIONDESTROYLINKACTIONACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../DestroyLinkActionActivation.hpp"

#include "impl/WriteLinkActionActivationImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace fUML 
{
	class DestroyLinkActionActivationImpl :virtual public WriteLinkActionActivationImpl, virtual public DestroyLinkActionActivation 
	{
		public: 
			DestroyLinkActionActivationImpl(const DestroyLinkActionActivationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			DestroyLinkActionActivationImpl& operator=(DestroyLinkActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DestroyLinkActionActivationImpl();

		public:
			//destructor
			virtual ~DestroyLinkActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_DESTROYLINKACTIONACTIVATIONDESTROYLINKACTIONACTIVATIONIMPL_HPP */
