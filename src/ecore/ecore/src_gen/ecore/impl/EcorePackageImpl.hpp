//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPACKAGEIMPL_HPP
#define ECOREPACKAGEIMPL_HPP

#include "ecore/EcorePackage.hpp"
#include "ecore/impl/EPackageImpl.hpp"


namespace ecore 
{	class EAnnotation;
	class EAttribute;
	class EClass;
	class EClassifier;
	class EDataType;
	class EEnum;
	class EEnumLiteral;
	class EFactory;
	class EGenericType;
	class EModelElement;
	class ENamedElement;
	class EObject;
	class EOperation;
	class EPackage;
	class EParameter;
	class EReference;
	class EStringToStringMapEntry;
	class EStructuralFeature;
	class ETypeParameter;
	class ETypedElement;
}

namespace ecore
{
	class EcoreFactory;
}


namespace ecore
{
	class EcorePackageImpl : public EPackageImpl ,virtual public EcorePackage
	{
		private:    
			EcorePackageImpl(EcorePackageImpl const&) = delete;
			EcorePackageImpl& operator=(EcorePackageImpl const&) = delete;

		protected:
			EcorePackageImpl();

		public:
			virtual ~EcorePackageImpl();

			// Begin Class EAnnotation
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAnnotation_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAnnotation_EAttribute_source() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_contents() const ;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_details() const ;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_eModelElement() const ;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EReference_references() const ;
			
			
			// End Class EAnnotation

			// Begin Class EAttribute
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAttribute_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEAttribute_EAttribute_iD() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEAttribute_EReference_eAttributeType() const ;
			
			
			// End Class EAttribute

			// Begin Class EClass
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClass_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClass_EAttribute_abstract() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEClass_EAttribute_interface() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllAttributes() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllContainments() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllGenericSuperTypes() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllOperations() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllReferences() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllStructuralFeatures() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAllSuperTypes() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eAttributes() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eGenericSuperTypes() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eIDAttribute() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eOperations() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eReferences() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eStructuralFeatures() const ;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReference_eSuperTypes() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEOperation_EInt() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEStructuralFeature_EInt() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getEStructuralFeature_EString() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureCount() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureID_EStructuralFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getFeatureType_EStructuralFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOperationCount() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOperationID_EOperation() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_getOverride_EOperation() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClass_EOperation_isSuperTypeOf_EClass() const ;
			
			// End Class EClass

			// Begin Class EClassifier
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClassifier_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_classifierID() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_defaultValue() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceClass() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceClassName() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_EAttribute_instanceTypeName() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEClassifier_EReference_ePackage() const ;
			virtual std::shared_ptr<ecore::EReference> getEClassifier_EReference_eTypeParameters() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_EOperation_getClassifierID() const ;
			virtual std::shared_ptr<ecore::EOperation> getEClassifier_EOperation_isInstance_EJavaObject() const ;
			
			// End Class EClassifier

			// Begin Class EDataType
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEDataType_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEDataType_EAttribute_serializable() const ;
			
			
			
			// End Class EDataType

			// Begin Class EEnum
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnum_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEEnum_EReference_eLiterals() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteral_EString() const ;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteral_EInt() const ;
			virtual std::shared_ptr<ecore::EOperation> getEEnum_EOperation_getEEnumLiteralByLiteral_EString() const ;
			
			// End Class EEnum

			// Begin Class EEnumLiteral
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnumLiteral_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_instance() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_literal() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_EAttribute_value() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEEnumLiteral_EReference_eEnum() const ;
			
			
			// End Class EEnumLiteral

			// Begin Class EFactory
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEFactory_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEFactory_EReference_ePackage() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_convertToString_EDataType_EJavaObject() const ;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_create_EClass() const ;
			virtual std::shared_ptr<ecore::EOperation> getEFactory_EOperation_createFromString_EDataType_EString() const ;
			
			// End Class EFactory

			// Begin Class EGenericType
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEGenericType_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eClassifier() const ;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eLowerBound() const ;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eRawType() const ;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eTypeArguments() const ;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eTypeParameter() const ;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EReference_eUpperBound() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEGenericType_EOperation_isInstance_EJavaObject() const ;
			
			// End Class EGenericType

			// Begin Class EModelElement
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEModelElement_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEModelElement_EReference_eAnnotations() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEModelElement_EOperation_getEAnnotation_EString() const ;
			
			// End Class EModelElement

			// Begin Class ENamedElement
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getENamedElement_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getENamedElement_EAttribute_name() const ;
			
			
			
			// End Class ENamedElement

			// Begin Class EObject
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEObject_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEObject_EReference_eContainer() const ;
			virtual std::shared_ptr<ecore::EReference> getEObject_EReference_eContens() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eAllContents() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eClass() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainer() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainingFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContainmentFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eContents() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eCrossReferences() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eGet_EStructuralFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eGet_EStructuralFeature_EBoolean() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eInvoke_EOperation_EEList() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eIsProxy() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eIsSet_EStructuralFeature() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eResource() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eSet_EStructuralFeature_EJavaObject() const ;
			virtual std::shared_ptr<ecore::EOperation> getEObject_EOperation_eUnset_EStructuralFeature() const ;
			
			// End Class EObject

			// Begin Class EOperation
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEOperation_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEOperation_EAttribute_operationID() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eContainingClass() const ;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eExceptions() const ;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eGenericExceptions() const ;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eParameters() const ;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EReference_eTypeParameters() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEOperation_EOperation_getOperationID() const ;
			virtual std::shared_ptr<ecore::EOperation> getEOperation_EOperation_isOverrideOf_EOperation() const ;
			
			// End Class EOperation

			// Begin Class EPackage
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEPackage_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_EAttribute_nsPrefix() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_EAttribute_nsURI() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eClassifiers() const ;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eFactoryInstance() const ;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eSubpackages() const ;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EReference_eSuperPackage() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEPackage_EOperation_getEClassifier_EString() const ;
			
			// End Class EPackage

			// Begin Class EParameter
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEParameter_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getEParameter_EReference_eOperation() const ;
			
			
			// End Class EParameter

			// Begin Class EReference
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEReference_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_container() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_containment() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_EAttribute_resolveProxies() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eKeys() const ;
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eOpposite() const ;
			virtual std::shared_ptr<ecore::EReference> getEReference_EReference_eReferenceType() const ;
			
			
			// End Class EReference

			// Begin Class EStringToStringMapEntry
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStringToStringMapEntry_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_EAttribute_key() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_EAttribute_value() const ;
			
			
			
			// End Class EStringToStringMapEntry

			// Begin Class EStructuralFeature
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStructuralFeature_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_changeable() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_defaultValue() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_defaultValueLiteral() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_derived() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_featureID() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_transient() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_unsettable() const ;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_EAttribute_volatile() const ;
			
			virtual std::shared_ptr<ecore::EReference> getEStructuralFeature_EReference_eContainingClass() const ;
			
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_EOperation_getContainerClass() const ;
			virtual std::shared_ptr<ecore::EOperation> getEStructuralFeature_EOperation_getFeatureID() const ;
			
			// End Class EStructuralFeature

			// Begin Class ETypeParameter
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypeParameter_EClass() const ;
			
			
			virtual std::shared_ptr<ecore::EReference> getETypeParameter_EReference_eBounds() const ;
			
			
			// End Class ETypeParameter

			// Begin Class ETypedElement
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypedElement_EClass() const ;
			
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_lowerBound() const ;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_many() const ;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_ordered() const ;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_required() const ;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_unique() const ;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_EAttribute_upperBound() const ;
			
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EReference_eGenericType() const ;
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EReference_eType() const ;
			
			
			// End Class ETypedElement

			virtual std::shared_ptr<ecore::EDataType> getEBigDecimal_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEBigInteger_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEBoolean_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEBooleanObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEByte_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEByteArray_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEByteObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEChar_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getECharacterObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEDate_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEDiagnosticChain_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEDouble_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEDoubleObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEEList_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEEnumerator_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMap_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMapEntry_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEFloat_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEFloatObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEInt_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEIntegerObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEJavaClass_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEJavaObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getELong_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getELongObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEMap_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEResource_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEResourceSet_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEShort_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEShortObject_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEString_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getETreeIterator_EDataType() const ;
			virtual std::shared_ptr<ecore::EDataType> getEInvocationTargetException_EDataType() const ;
			

		private:
			std::shared_ptr<ecore::EClass> m_eAnnotation_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eAttribute_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eClass_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eClassifier_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eDataType_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eEnum_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eEnumLiteral_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eFactory_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eGenericType_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eModelElement_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eNamedElement_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eObject_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eOperation_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_ePackage_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eParameter_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eReference_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eStringToStringMapEntry_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eStructuralFeature_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eTypeParameter_EClass = nullptr;
			std::shared_ptr<ecore::EClass> m_eTypedElement_EClass = nullptr;
			
			std::shared_ptr<ecore::EDataType> m_eBigDecimal_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eBigInteger_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eBoolean_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eBooleanObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eByte_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eByteArray_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eByteObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eChar_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eCharacterObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eDate_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eDiagnosticChain_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eDouble_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eDoubleObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eEList_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eEnumerator_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eFeatureMap_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eFeatureMapEntry_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eFloat_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eFloatObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eInt_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eIntegerObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eInvocationTargetException_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eJavaClass_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eJavaObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eLong_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eLongObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eMap_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eResource_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eResourceSet_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eShort_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eShortObject_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eString_EDataType = nullptr;
			std::shared_ptr<ecore::EDataType> m_eTreeIterator_EDataType = nullptr;
			
			std::shared_ptr<ecore::EAttribute> m_eClass_EAttribute_abstract = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_changeable = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClassifier_EAttribute_classifierID = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eReference_EAttribute_container = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eReference_EAttribute_containment = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClassifier_EAttribute_defaultValue = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_defaultValue = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_defaultValueLiteral = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_derived = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_featureID = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eAttribute_EAttribute_iD = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eEnumLiteral_EAttribute_instance = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClassifier_EAttribute_instanceClass = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClassifier_EAttribute_instanceClassName = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClassifier_EAttribute_instanceTypeName = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eClass_EAttribute_interface = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStringToStringMapEntry_EAttribute_key = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eEnumLiteral_EAttribute_literal = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_lowerBound = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_many = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eNamedElement_EAttribute_name = nullptr;
			std::shared_ptr<ecore::EAttribute> m_ePackage_EAttribute_nsPrefix = nullptr;
			std::shared_ptr<ecore::EAttribute> m_ePackage_EAttribute_nsURI = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eOperation_EAttribute_operationID = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_ordered = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_required = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eReference_EAttribute_resolveProxies = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eDataType_EAttribute_serializable = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eAnnotation_EAttribute_source = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_transient = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_unique = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_unsettable = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eTypedElement_EAttribute_upperBound = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eEnumLiteral_EAttribute_value = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStringToStringMapEntry_EAttribute_value = nullptr;
			std::shared_ptr<ecore::EAttribute> m_eStructuralFeature_EAttribute_volatile = nullptr;
			
			std::shared_ptr<ecore::EReference> m_eAnnotation_EReference_contents = nullptr;
			std::shared_ptr<ecore::EReference> m_eAnnotation_EReference_details = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllAttributes = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllContainments = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllGenericSuperTypes = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllOperations = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllReferences = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllStructuralFeatures = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAllSuperTypes = nullptr;
			std::shared_ptr<ecore::EReference> m_eModelElement_EReference_eAnnotations = nullptr;
			std::shared_ptr<ecore::EReference> m_eAttribute_EReference_eAttributeType = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eAttributes = nullptr;
			std::shared_ptr<ecore::EReference> m_eTypeParameter_EReference_eBounds = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eClassifier = nullptr;
			std::shared_ptr<ecore::EReference> m_ePackage_EReference_eClassifiers = nullptr;
			std::shared_ptr<ecore::EReference> m_eObject_EReference_eContainer = nullptr;
			std::shared_ptr<ecore::EReference> m_eOperation_EReference_eContainingClass = nullptr;
			std::shared_ptr<ecore::EReference> m_eStructuralFeature_EReference_eContainingClass = nullptr;
			std::shared_ptr<ecore::EReference> m_eObject_EReference_eContens = nullptr;
			std::shared_ptr<ecore::EReference> m_eEnumLiteral_EReference_eEnum = nullptr;
			std::shared_ptr<ecore::EReference> m_eOperation_EReference_eExceptions = nullptr;
			std::shared_ptr<ecore::EReference> m_ePackage_EReference_eFactoryInstance = nullptr;
			std::shared_ptr<ecore::EReference> m_eOperation_EReference_eGenericExceptions = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eGenericSuperTypes = nullptr;
			std::shared_ptr<ecore::EReference> m_eTypedElement_EReference_eGenericType = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eIDAttribute = nullptr;
			std::shared_ptr<ecore::EReference> m_eReference_EReference_eKeys = nullptr;
			std::shared_ptr<ecore::EReference> m_eEnum_EReference_eLiterals = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eLowerBound = nullptr;
			std::shared_ptr<ecore::EReference> m_eAnnotation_EReference_eModelElement = nullptr;
			std::shared_ptr<ecore::EReference> m_eParameter_EReference_eOperation = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eOperations = nullptr;
			std::shared_ptr<ecore::EReference> m_eReference_EReference_eOpposite = nullptr;
			std::shared_ptr<ecore::EReference> m_eClassifier_EReference_ePackage = nullptr;
			std::shared_ptr<ecore::EReference> m_eFactory_EReference_ePackage = nullptr;
			std::shared_ptr<ecore::EReference> m_eOperation_EReference_eParameters = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eRawType = nullptr;
			std::shared_ptr<ecore::EReference> m_eReference_EReference_eReferenceType = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eReferences = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eStructuralFeatures = nullptr;
			std::shared_ptr<ecore::EReference> m_ePackage_EReference_eSubpackages = nullptr;
			std::shared_ptr<ecore::EReference> m_ePackage_EReference_eSuperPackage = nullptr;
			std::shared_ptr<ecore::EReference> m_eClass_EReference_eSuperTypes = nullptr;
			std::shared_ptr<ecore::EReference> m_eTypedElement_EReference_eType = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eTypeArguments = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eTypeParameter = nullptr;
			std::shared_ptr<ecore::EReference> m_eClassifier_EReference_eTypeParameters = nullptr;
			std::shared_ptr<ecore::EReference> m_eOperation_EReference_eTypeParameters = nullptr;
			std::shared_ptr<ecore::EReference> m_eGenericType_EReference_eUpperBound = nullptr;
			std::shared_ptr<ecore::EReference> m_eAnnotation_EReference_references = nullptr;
			
			std::shared_ptr<ecore::EOperation> m_eFactory_EOperation_convertToString_EDataType_EJavaObject = nullptr;
			std::shared_ptr<ecore::EOperation> m_eFactory_EOperation_create_EClass = nullptr;
			std::shared_ptr<ecore::EOperation> m_eFactory_EOperation_createFromString_EDataType_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eAllContents = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eClass = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eContainer = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eContainingFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eContainmentFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eContents = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eCrossReferences = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eGet_EStructuralFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eGet_EStructuralFeature_EBoolean = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eInvoke_EOperation_EEList = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eIsProxy = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eIsSet_EStructuralFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eResource = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eSet_EStructuralFeature_EJavaObject = nullptr;
			std::shared_ptr<ecore::EOperation> m_eObject_EOperation_eUnset_EStructuralFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClassifier_EOperation_getClassifierID = nullptr;
			std::shared_ptr<ecore::EOperation> m_eStructuralFeature_EOperation_getContainerClass = nullptr;
			std::shared_ptr<ecore::EOperation> m_eModelElement_EOperation_getEAnnotation_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_ePackage_EOperation_getEClassifier_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_eEnum_EOperation_getEEnumLiteral_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_eEnum_EOperation_getEEnumLiteral_EInt = nullptr;
			std::shared_ptr<ecore::EOperation> m_eEnum_EOperation_getEEnumLiteralByLiteral_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getEOperation_EInt = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getEStructuralFeature_EInt = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getEStructuralFeature_EString = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getFeatureCount = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getFeatureID_EStructuralFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eStructuralFeature_EOperation_getFeatureID = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getFeatureType_EStructuralFeature = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getOperationCount = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getOperationID_EOperation = nullptr;
			std::shared_ptr<ecore::EOperation> m_eOperation_EOperation_getOperationID = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_getOverride_EOperation = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClassifier_EOperation_isInstance_EJavaObject = nullptr;
			std::shared_ptr<ecore::EOperation> m_eGenericType_EOperation_isInstance_EJavaObject = nullptr;
			std::shared_ptr<ecore::EOperation> m_eOperation_EOperation_isOverrideOf_EOperation = nullptr;
			std::shared_ptr<ecore::EOperation> m_eClass_EOperation_isSuperTypeOf_EClass = nullptr;
			

			friend class EcorePackage;

			static bool isInited;
			static EcorePackage* create();
			bool isInitialized = false;
 			bool isCreated = false;

			virtual void init(std::shared_ptr<ecore::EPackage> package);

		public:
			void createPackageContents(std::shared_ptr<ecore::EPackage> package);
			void initializePackageContents();

		private:
			void createEAnnotationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEAttributeContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEClassContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEClassifierContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEDataTypeContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEEnumContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEEnumLiteralContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEFactoryContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEGenericTypeContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEModelElementContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createENamedElementContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEObjectContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEOperationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEPackageContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEParameterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEReferenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEStringToStringMapEntryContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createEStructuralFeatureContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createETypeParameterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createETypedElementContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);
			void createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory);

			void initializeEAnnotationContent();
			void initializeEAttributeContent();
			void initializeEClassContent();
			void initializeEClassifierContent();
			void initializeEDataTypeContent();
			void initializeEEnumContent();
			void initializeEEnumLiteralContent();
			void initializeEFactoryContent();
			void initializeEGenericTypeContent();
			void initializeEModelElementContent();
			void initializeENamedElementContent();
			void initializeEObjectContent();
			void initializeEOperationContent();
			void initializeEPackageContent();
			void initializeEParameterContent();
			void initializeEReferenceContent();
			void initializeEStringToStringMapEntryContent();
			void initializeEStructuralFeatureContent();
			void initializeETypeParameterContent();
			void initializeETypedElementContent();
			void initializePackageEDataTypes();



	
	//prevent from hiding functions
	using EPackageImpl::getEAnnotation;
	using EPackageImpl::getEClassifier;
	};
}
#endif /* end of include guard: ECOREPACKAGEIMPL_HPP */
