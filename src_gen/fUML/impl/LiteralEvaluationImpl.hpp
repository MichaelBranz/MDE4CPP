//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALEVALUATIONLITERALEVALUATIONIMPL_HPP
#define FUML_LITERALEVALUATIONLITERALEVALUATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../LiteralEvaluation.hpp"

#include "impl/EvaluationImpl.hpp"

#include "SubsetUnion.hpp"

#include "ValueSpecification.hpp"
#include "PrimitiveType.hpp"
#include "Type.hpp"


//*********************************
namespace fUML 
{
	class LiteralEvaluationImpl :virtual public EvaluationImpl, virtual public LiteralEvaluation 
	{
		public: 
			LiteralEvaluationImpl(const LiteralEvaluationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			LiteralEvaluationImpl& operator=(LiteralEvaluationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LiteralEvaluationImpl();

		public:
			//destructor
			virtual ~LiteralEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<uml::PrimitiveType> 
			 getType(std::string builtInTypeName)  ;
			
			
			
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
#endif /* end of include guard: FUML_LITERALEVALUATIONLITERALEVALUATIONIMPL_HPP */
