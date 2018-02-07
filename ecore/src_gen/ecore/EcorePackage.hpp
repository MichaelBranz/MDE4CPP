//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECOREPACKAGE_HPP
#define ECOREPACKAGE_HPP

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

#include "ecore/EPackage.hpp"
#include "ecore/EcoreFactory.hpp"

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
	class EcorePackage;
}

namespace ecore 
{
	/*!
	The Metamodel Package for the ecore metamodel. This package is used to enable the reflection of model elements. It contains all model elements
	which were described in an ecore file.
	*/
	/*!
	 */
	class EcorePackage : virtual public EPackage 
	{
		private:    
			EcorePackage(EcorePackage const&) = delete;
			EcorePackage& operator=(EcorePackage const&) = delete;

		protected:
			EcorePackage(){}

		public:
			//static variables
			static const std::string eNAME;
			static const std::string eNS_URI;
			static const std::string eNS_PREFIX;

			// Begin Class EAnnotation
			//Class and Feature IDs 
			static const int EANNOTATION = 1;
			static const int EANNOTATION_FEATURE_COUNT = 6;
			static const int EANNOTATION_OPERATION_COUNT = 1;
			static const int EANNOTATION_SOURCE = 11;
			
			static const int EANNOTATION_CONTENTS = 14;
			static const int EANNOTATION_DETAILS = 12;
			static const int EANNOTATION_EMODELELEMENT = 13;
			static const int EANNOTATION_REFERENCES = 15;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAnnotation() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEAnnotation_Source() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Contents() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_Details() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_EModelElement() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEAnnotation_References() const = 0;
			
			
			// End Class EAnnotation


			// Begin Class EAttribute
			//Class and Feature IDs 
			static const int EATTRIBUTE = 0;
			static const int EATTRIBUTE_FEATURE_COUNT = 22;
			static const int EATTRIBUTE_OPERATION_COUNT = 1;
			static const int EATTRIBUTE_ID = 020;
			
			static const int EATTRIBUTE_EATTRIBUTETYPE = 021;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEAttribute() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEAttribute_ID() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEAttribute_EAttributeType() const = 0;
			
			
			// End Class EAttribute


			// Begin Class EClass
			//Class and Feature IDs 
			static const int ECLASS = 2;
			static const int ECLASS_FEATURE_COUNT = 25;
			static const int ECLASS_OPERATION_COUNT = 13;
			static const int ECLASS_ABSTRACT = 29;
			static const int ECLASS_INTERFACE = 210;
			
			static const int ECLASS_EALLATTRIBUTES = 213;
			static const int ECLASS_EALLCONTAINMENTS = 217;
			static const int ECLASS_EALLGENERICSUPERTYPES = 224;
			static const int ECLASS_EALLOPERATIONS = 218;
			static const int ECLASS_EALLREFERENCES = 214;
			static const int ECLASS_EALLSTRUCTURALFEATURES = 219;
			static const int ECLASS_EALLSUPERTYPES = 220;
			static const int ECLASS_EATTRIBUTES = 216;
			static const int ECLASS_EGENERICSUPERTYPES = 223;
			static const int ECLASS_EIDATTRIBUTE = 221;
			static const int ECLASS_EOPERATIONS = 212;
			static const int ECLASS_EREFERENCES = 215;
			static const int ECLASS_ESTRUCTURALFEATURES = 222;
			static const int ECLASS_ESUPERTYPES = 211;
			
			static const int ECLASS___GETEOPERATION__EINT = 9;
			static const int ECLASS___GETESTRUCTURALFEATURE__EINT = 5;
			static const int ECLASS___GETESTRUCTURALFEATURE__ESTRING = 7;
			static const int ECLASS___GETFEATURECOUNT = 4;
			static const int ECLASS___GETFEATUREID__ESTRUCTURALFEATURE = 6;
			static const int ECLASS___GETFEATURETYPE__ESTRUCTURALFEATURE = 12;
			static const int ECLASS___GETOPERATIONCOUNT = 8;
			static const int ECLASS___GETOPERATIONID__EOPERATION = 10;
			static const int ECLASS___GETOVERRIDE__EOPERATION = 11;
			static const int ECLASS___ISSUPERTYPEOF__ECLASS = 3;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClass() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClass_Abstract() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClass_Interface() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllContainments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAllSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EAttributes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EGenericSuperTypes() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EIDAttribute() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EOperations() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EReferences() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_EStructuralFeatures() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClass_ESuperTypes() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetEOperation__EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetEStructuralFeature__EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetEStructuralFeature__EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetFeatureCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetFeatureID__EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetFeatureType__EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetOperationCount() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetOperationID__EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___GetOverride__EOperation() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEClass___IsSuperTypeOf__EClass() const = 0;
			
			// End Class EClass


			// Begin Class EClassifier
			//Class and Feature IDs 
			static const int ECLASSIFIER = 3;
			static const int ECLASSIFIER_FEATURE_COUNT = 9;
			static const int ECLASSIFIER_OPERATION_COUNT = 3;
			static const int ECLASSIFIER_CLASSIFIERID = 35;
			static const int ECLASSIFIER_DEFAULTVALUE = 34;
			static const int ECLASSIFIER_INSTANCECLASS = 33;
			static const int ECLASSIFIER_INSTANCECLASSNAME = 32;
			static const int ECLASSIFIER_INSTANCETYPENAME = 36;
			
			static const int ECLASSIFIER_EPACKAGE = 37;
			static const int ECLASSIFIER_ETYPEPARAMETERS = 38;
			
			static const int ECLASSIFIER___ISINSTANCE__EJAVAOBJECT = 1;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEClassifier() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_ClassifierID() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_DefaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_InstanceClass() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_InstanceClassName() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEClassifier_InstanceTypeName() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEClassifier_EPackage() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEClassifier_ETypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEClassifier___IsInstance__EJavaObject() const = 0;
			
			// End Class EClassifier


			// Begin Class EDataType
			//Class and Feature IDs 
			static const int EDATATYPE = 4;
			static const int EDATATYPE_FEATURE_COUNT = 10;
			static const int EDATATYPE_OPERATION_COUNT = 3;
			static const int EDATATYPE_SERIALIZABLE = 49;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEDataType() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEDataType_Serializable() const = 0;
			
			
			
			// End Class EDataType


			// Begin Class EEnum
			//Class and Feature IDs 
			static const int EENUM = 5;
			static const int EENUM_FEATURE_COUNT = 11;
			static const int EENUM_OPERATION_COUNT = 6;
			
			static const int EENUM_ELITERALS = 510;
			
			static const int EENUM___GETEENUMLITERAL__ESTRING = 3;
			static const int EENUM___GETEENUMLITERAL__EINT = 4;
			static const int EENUM___GETEENUMLITERALBYLITERAL__ESTRING = 5;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnum() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEEnum_ELiterals() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEEnum___GetEEnumLiteral__EString() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum___GetEEnumLiteral__EInt() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEEnum___GetEEnumLiteralByLiteral__EString() const = 0;
			
			// End Class EEnum


			// Begin Class EEnumLiteral
			//Class and Feature IDs 
			static const int EENUMLITERAL = 6;
			static const int EENUMLITERAL_FEATURE_COUNT = 6;
			static const int EENUMLITERAL_OPERATION_COUNT = 1;
			static const int EENUMLITERAL_INSTANCE = 63;
			static const int EENUMLITERAL_LITERAL = 64;
			static const int EENUMLITERAL_VALUE = 62;
			
			static const int EENUMLITERAL_EENUM = 65;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEEnumLiteral() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Instance() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Literal() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEEnumLiteral_Value() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEEnumLiteral_EEnum() const = 0;
			
			
			// End Class EEnumLiteral


			// Begin Class EFactory
			//Class and Feature IDs 
			static const int EFACTORY = 7;
			static const int EFACTORY_FEATURE_COUNT = 2;
			static const int EFACTORY_OPERATION_COUNT = 4;
			
			static const int EFACTORY_EPACKAGE = 71;
			
			static const int EFACTORY___CONVERTTOSTRING__EDATATYPE_EJAVAOBJECT = 3;
			static const int EFACTORY___CREATE__ECLASS_EOBJECT = 1;
			static const int EFACTORY___CREATEFROMSTRING__EDATATYPE_ESTRING = 2;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEFactory() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEFactory_EPackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEFactory___ConvertToString__EDataType_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory___Create__EClass_EObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEFactory___CreateFromString__EDataType_EString() const = 0;
			
			// End Class EFactory


			// Begin Class EGenericType
			//Class and Feature IDs 
			static const int EGENERICTYPE = 50;
			static const int EGENERICTYPE_FEATURE_COUNT = 7;
			static const int EGENERICTYPE_OPERATION_COUNT = 15;
			
			static const int EGENERICTYPE_ECLASSIFIER = 506;
			static const int EGENERICTYPE_ELOWERBOUND = 504;
			static const int EGENERICTYPE_ERAWTYPE = 503;
			static const int EGENERICTYPE_ETYPEARGUMENTS = 502;
			static const int EGENERICTYPE_ETYPEPARAMETER = 505;
			static const int EGENERICTYPE_EUPPERBOUND = 501;
			
			static const int EGENERICTYPE___ISINSTANCE__EJAVAOBJECT = 14;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEGenericType() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EClassifier() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_ELowerBound() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_ERawType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_ETypeArguments() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_ETypeParameter() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEGenericType_EUpperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEGenericType___IsInstance__EJavaObject() const = 0;
			
			// End Class EGenericType


			// Begin Class EModelElement
			//Class and Feature IDs 
			static const int EMODELELEMENT = 8;
			static const int EMODELELEMENT_FEATURE_COUNT = 1;
			static const int EMODELELEMENT_OPERATION_COUNT = 1;
			
			static const int EMODELELEMENT_EANNOTATIONS = 80;
			
			static const int EMODELELEMENT___GETEANNOTATION__ESTRING = 0;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEModelElement() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEModelElement_EAnnotations() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEModelElement___GetEAnnotation__EString() const = 0;
			
			// End Class EModelElement


			// Begin Class ENamedElement
			//Class and Feature IDs 
			static const int ENAMEDELEMENT = 9;
			static const int ENAMEDELEMENT_FEATURE_COUNT = 2;
			static const int ENAMEDELEMENT_OPERATION_COUNT = 1;
			static const int ENAMEDELEMENT_NAME = 91;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getENamedElement() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getENamedElement_Name() const = 0;
			
			
			
			// End Class ENamedElement


			// Begin Class EObject
			//Class and Feature IDs 
			static const int EOBJECT = 10;
			static const int EOBJECT_FEATURE_COUNT = 1;
			static const int EOBJECT_OPERATION_COUNT = 14;
			
			static const int EOBJECT_ECONTAINER = 100;
			
			static const int EOBJECT___EALLCONTENTS = 6;
			static const int EOBJECT___ECLASS = 0;
			static const int EOBJECT___ECONTAININGFEATURE = 3;
			static const int EOBJECT___ECONTAINMENTFEATURE = 4;
			static const int EOBJECT___ECONTENTS = 5;
			static const int EOBJECT___ECROSSREFERENCES = 7;
			static const int EOBJECT___EGET__ESTRUCTURALFEATURE = 8;
			static const int EOBJECT___EGET__ESTRUCTURALFEATURE_EBOOLEAN = 9;
			static const int EOBJECT___EINVOKE__EOPERATION_EELIST = 13;
			static const int EOBJECT___EISPROXY = 1;
			static const int EOBJECT___EISSET__ESTRUCTURALFEATURE = 11;
			static const int EOBJECT___ERESOURCE = 2;
			static const int EOBJECT___ESET__ESTRUCTURALFEATURE_EJAVAOBJECT = 10;
			static const int EOBJECT___EUNSET__ESTRUCTURALFEATURE = 12;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEObject() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEObject_EContainer() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEObject___EAllContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EClass() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EContainingFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EContainmentFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EContents() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___ECrossReferences() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EGet__EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EGet__EStructuralFeature_EBoolean() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EInvoke__EOperation_EEList() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EIsProxy() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EIsSet__EStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EResource() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___ESet__EStructuralFeature_EJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EOperation> getEObject___EUnset__EStructuralFeature() const = 0;
			
			// End Class EObject


			// Begin Class EOperation
			//Class and Feature IDs 
			static const int EOPERATION = 11;
			static const int EOPERATION_FEATURE_COUNT = 16;
			static const int EOPERATION_OPERATION_COUNT = 2;
			static const int EOPERATION_OPERATIONID = 1110;
			
			static const int EOPERATION_ECONTAININGCLASS = 1111;
			static const int EOPERATION_EEXCEPTIONS = 1114;
			static const int EOPERATION_EGENERICEXCEPTIONS = 1115;
			static const int EOPERATION_EPARAMETERS = 1113;
			static const int EOPERATION_ETYPEPARAMETERS = 1112;
			
			static const int EOPERATION___ISOVERRIDEOF__EOPERATION = 1;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEOperation() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEOperation_OperationID() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEOperation_EContainingClass() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EGenericExceptions() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_EParameters() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEOperation_ETypeParameters() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEOperation___IsOverrideOf__EOperation() const = 0;
			
			// End Class EOperation


			// Begin Class EPackage
			//Class and Feature IDs 
			static const int EPACKAGE = 12;
			static const int EPACKAGE_FEATURE_COUNT = 8;
			static const int EPACKAGE_OPERATION_COUNT = 29;
			static const int EPACKAGE_NSPREFIX = 123;
			static const int EPACKAGE_NSURI = 122;
			
			static const int EPACKAGE_ECLASSIFIERS = 125;
			static const int EPACKAGE_EFACTORYINSTANCE = 124;
			static const int EPACKAGE_ESUBPACKAGES = 126;
			static const int EPACKAGE_ESUPERPACKAGE = 127;
			
			static const int EPACKAGE___GETECLASSIFIER__ESTRING = 1;
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEPackage() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_NsPrefix() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEPackage_NsURI() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEPackage_EClassifiers() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_EFactoryInstance() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_ESubpackages() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEPackage_ESuperPackage() const = 0;
			
			virtual std::shared_ptr<ecore::EOperation> getEPackage___GetEClassifier__EString() const = 0;
			
			// End Class EPackage


			// Begin Class EParameter
			//Class and Feature IDs 
			static const int EPARAMETER = 13;
			static const int EPARAMETER_FEATURE_COUNT = 11;
			static const int EPARAMETER_OPERATION_COUNT = 1;
			
			static const int EPARAMETER_EOPERATION = 1310;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEParameter() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEParameter_EOperation() const = 0;
			
			
			// End Class EParameter


			// Begin Class EReference
			//Class and Feature IDs 
			static const int EREFERENCE = 14;
			static const int EREFERENCE_FEATURE_COUNT = 26;
			static const int EREFERENCE_OPERATION_COUNT = 1;
			static const int EREFERENCE_CONTAINER = 1421;
			static const int EREFERENCE_CONTAINMENT = 1420;
			static const int EREFERENCE_RESOLVEPROXIES = 1422;
			
			static const int EREFERENCE_EKEYS = 1425;
			static const int EREFERENCE_EOPPOSITE = 1423;
			static const int EREFERENCE_EREFERENCETYPE = 1424;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEReference() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_Container() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_Containment() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEReference_ResolveProxies() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEReference_EKeys() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_EOpposite() const = 0;
			virtual std::shared_ptr<ecore::EReference> getEReference_EReferenceType() const = 0;
			
			
			// End Class EReference


			// Begin Class EStringToStringMapEntry
			//Class and Feature IDs 
			static const int ESTRINGTOSTRINGMAPENTRY = 48;
			static const int ESTRINGTOSTRINGMAPENTRY_FEATURE_COUNT = 3;
			static const int ESTRINGTOSTRINGMAPENTRY_OPERATION_COUNT = 14;
			static const int ESTRINGTOSTRINGMAPENTRY_KEY = 481;
			static const int ESTRINGTOSTRINGMAPENTRY_VALUE = 482;
			
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStringToStringMapEntry() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_Key() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStringToStringMapEntry_Value() const = 0;
			
			
			
			// End Class EStringToStringMapEntry


			// Begin Class EStructuralFeature
			//Class and Feature IDs 
			static const int ESTRUCTURALFEATURE = 15;
			static const int ESTRUCTURALFEATURE_FEATURE_COUNT = 20;
			static const int ESTRUCTURALFEATURE_OPERATION_COUNT = 1;
			static const int ESTRUCTURALFEATURE_CHANGEABLE = 1510;
			static const int ESTRUCTURALFEATURE_CONTAINERCLASS = 1518;
			static const int ESTRUCTURALFEATURE_DEFAULTVALUE = 1514;
			static const int ESTRUCTURALFEATURE_DEFAULTVALUELITERAL = 1513;
			static const int ESTRUCTURALFEATURE_DERIVED = 1516;
			static const int ESTRUCTURALFEATURE_FEATUREID = 1517;
			static const int ESTRUCTURALFEATURE_TRANSIENT = 1512;
			static const int ESTRUCTURALFEATURE_UNSETTABLE = 1515;
			static const int ESTRUCTURALFEATURE_VOLATILE = 1511;
			
			static const int ESTRUCTURALFEATURE_ECONTAININGCLASS = 1519;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getEStructuralFeature() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Changeable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_ContainerClass() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_DefaultValue() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_DefaultValueLiteral() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Derived() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_FeatureID() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Transient() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Unsettable() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getEStructuralFeature_Volatile() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getEStructuralFeature_EContainingClass() const = 0;
			
			
			// End Class EStructuralFeature


			// Begin Class ETypeParameter
			//Class and Feature IDs 
			static const int ETYPEPARAMETER = 51;
			static const int ETYPEPARAMETER_FEATURE_COUNT = 3;
			static const int ETYPEPARAMETER_OPERATION_COUNT = 1;
			
			static const int ETYPEPARAMETER_EBOUNDS = 512;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypeParameter() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getETypeParameter_EBounds() const = 0;
			
			
			// End Class ETypeParameter


			// Begin Class ETypedElement
			//Class and Feature IDs 
			static const int ETYPEDELEMENT = 16;
			static const int ETYPEDELEMENT_FEATURE_COUNT = 10;
			static const int ETYPEDELEMENT_OPERATION_COUNT = 1;
			static const int ETYPEDELEMENT_LOWERBOUND = 164;
			static const int ETYPEDELEMENT_MANY = 166;
			static const int ETYPEDELEMENT_ORDERED = 162;
			static const int ETYPEDELEMENT_REQUIRED = 167;
			static const int ETYPEDELEMENT_UNIQUE = 163;
			static const int ETYPEDELEMENT_UPPERBOUND = 165;
			
			static const int ETYPEDELEMENT_EGENERICTYPE = 169;
			static const int ETYPEDELEMENT_ETYPE = 168;
			
			
			//Class and Feature Getter
			virtual std::shared_ptr<ecore::EClass> getETypedElement() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_LowerBound() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Many() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Ordered() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Required() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_Unique() const = 0;
			virtual std::shared_ptr<ecore::EAttribute> getETypedElement_UpperBound() const = 0;
			
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EGenericType() const = 0;
			virtual std::shared_ptr<ecore::EReference> getETypedElement_EType() const = 0;
			
			
			// End Class ETypedElement

			static const int EBIGDECIMAL = 17;
			static const int EBIGINTEGER = 18;
			static const int EBOOLEAN = 19;
			static const int EBOOLEANOBJECT = 20;
			static const int EBYTE = 21;
			static const int EBYTEARRAY = 22;
			static const int EBYTEOBJECT = 23;
			static const int ECHAR = 24;
			static const int ECHARACTEROBJECT = 25;
			static const int EDATE = 26;
			static const int EDIAGNOSTICCHAIN = 27;
			static const int EDOUBLE = 28;
			static const int EDOUBLEOBJECT = 29;
			static const int EELIST = 30;
			static const int EENUMERATOR = 31;
			static const int EFEATUREMAP = 32;
			static const int EFEATUREMAPENTRY = 33;
			static const int EFLOAT = 34;
			static const int EFLOATOBJECT = 35;
			static const int EINT = 36;
			static const int EINTEGEROBJECT = 37;
			static const int EINVOCATIONTARGETEXCEPTION = 52;
			static const int EJAVACLASS = 38;
			static const int EJAVAOBJECT = 39;
			static const int ELONG = 40;
			static const int ELONGOBJECT = 41;
			static const int EMAP = 42;
			static const int ERESOURCE = 43;
			static const int ERESOURCESET = 44;
			static const int ESHORT = 45;
			static const int ESHORTOBJECT = 46;
			static const int ESTRING = 47;
			static const int ETREEITERATOR = 49;
			
			virtual std::shared_ptr<ecore::EDataType> getEBigDecimal() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBigInteger() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBoolean() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEBooleanObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByte() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteArray() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEByteObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEChar() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getECharacterObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDate() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDiagnosticChain() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDouble() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEDoubleObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEList() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEEnumerator() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMap() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFeatureMapEntry() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloat() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEFloatObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInt() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEIntegerObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEInvocationTargetException() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaClass() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEJavaObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELong() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getELongObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEMap() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResource() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEResourceSet() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShort() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEShortObject() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getEString() const = 0;
			virtual std::shared_ptr<ecore::EDataType> getETreeIterator() const = 0;
			

			//Singleton Instance and Getter
			private:
				static std::shared_ptr<EcorePackage> instance;
			public:
				static std::shared_ptr<EcorePackage> eInstance();

			//prevent from hiding functions
			using EPackage::getEAnnotation;
			using EPackage::getEClassifier;
	};
}
#endif /* end of include guard: ECOREPACKAGE_HPP */

