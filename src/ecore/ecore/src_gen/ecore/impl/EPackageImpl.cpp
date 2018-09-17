#include "ecore/impl/EPackageImpl.hpp"

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

#include <cassert>
#include <iostream>
#include <sstream>

#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "ecore/impl/EcorePackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"
#include <exception> // used in Persistence

#include "ecore/EAnnotation.hpp"

#include "ecore/EClassifier.hpp"

#include "ecore/EFactory.hpp"

#include "ecore/ENamedElement.hpp"

#include "ecore/EPackage.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ecore;

//*********************************
// Constructor / Destructor
//*********************************
EPackageImpl::EPackageImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_eClassifiers.reset(new Bag<ecore::EClassifier>());
	
	

	

		m_eSubpackages.reset(new Bag<ecore::EPackage>());
	
	

	

	//Init references
	
	

	

	
	

	
}

EPackageImpl::~EPackageImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EPackage "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			EPackageImpl::EPackageImpl(std::weak_ptr<ecore::EPackage > par_eSuperPackage)
			:EPackageImpl()
			{
			    m_eSuperPackage = par_eSuperPackage;
			}






EPackageImpl::EPackageImpl(const EPackageImpl & obj):EPackageImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EPackage "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_name = obj.getName();
	m_nsPrefix = obj.getNsPrefix();
	m_nsURI = obj.getNsURI();

	//copy references with no containment (soft copy)
	
	m_eFactoryInstance  = obj.getEFactoryInstance();

	m_eSuperPackage  = obj.getESuperPackage();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(std::dynamic_pointer_cast<ecore::EAnnotation>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EClassifier>> _eClassifiersList = obj.getEClassifiers();
	for(std::shared_ptr<ecore::EClassifier> _eClassifiers : *_eClassifiersList)
	{
		this->getEClassifiers()->add(std::shared_ptr<ecore::EClassifier>(std::dynamic_pointer_cast<ecore::EClassifier>(_eClassifiers->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eClassifiers" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EPackage>> _eSubpackagesList = obj.getESubpackages();
	for(std::shared_ptr<ecore::EPackage> _eSubpackages : *_eSubpackagesList)
	{
		this->getESubpackages()->add(std::shared_ptr<ecore::EPackage>(std::dynamic_pointer_cast<ecore::EPackage>(_eSubpackages->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eSubpackages" << std::endl;
	#endif

	
	

	
	
}

std::shared_ptr<ecore::EObject>  EPackageImpl::copy() const
{
	std::shared_ptr<EPackageImpl> element(new EPackageImpl(*this));
	element->setThisEPackagePtr(element);
	return element;
}

std::shared_ptr<EClass> EPackageImpl::eStaticClass() const
{
	return EcorePackageImpl::eInstance()->getEPackage_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void EPackageImpl::setNsPrefix(std::string _nsPrefix)
{
	m_nsPrefix = _nsPrefix;
} 

std::string EPackageImpl::getNsPrefix() const 
{
	return m_nsPrefix;
}

void EPackageImpl::setNsURI(std::string _nsURI)
{
	m_nsURI = _nsURI;
} 

std::string EPackageImpl::getNsURI() const 
{
	return m_nsURI;
}

//*********************************
// Operations
//*********************************
std::shared_ptr<ecore::EClassifier> EPackageImpl::getEClassifier(std::string name) const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<Bag<EClassifier> > classifierList = getEClassifiers();
    for (std::shared_ptr<EClassifier> c : *classifierList)
    {
        if(c->getName()==name)
        {
            return c;
        }
    }
    return std::shared_ptr<ecore::EClassifier>();
	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<ecore::EClassifier>> EPackageImpl::getEClassifiers() const
{

    return m_eClassifiers;
}


std::shared_ptr<ecore::EFactory > EPackageImpl::getEFactoryInstance() const
{
//assert(m_eFactoryInstance);
    return m_eFactoryInstance;
}
void EPackageImpl::setEFactoryInstance(std::shared_ptr<ecore::EFactory> _eFactoryInstance)
{
    m_eFactoryInstance = _eFactoryInstance;
}

std::shared_ptr<Bag<ecore::EPackage>> EPackageImpl::getESubpackages() const
{

    return m_eSubpackages;
}


std::weak_ptr<ecore::EPackage > EPackageImpl::getESuperPackage() const
{

    return m_eSuperPackage;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<EPackage> EPackageImpl::getThisEPackagePtr() const
{
	return m_thisEPackagePtr.lock();
}
void EPackageImpl::setThisEPackagePtr(std::weak_ptr<EPackage> thisEPackagePtr)
{
	m_thisEPackagePtr = thisEPackagePtr;
	setThisENamedElementPtr(thisEPackagePtr);
}
std::shared_ptr<ecore::EObject> EPackageImpl::eContainer() const
{
	if(auto wp = m_eSuperPackage.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EPackageImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case EcorePackage::EPACKAGE_EREFERENCE_ECLASSIFIERS:
			return eAny(getEClassifiers()); //125
		case EcorePackage::EPACKAGE_EREFERENCE_EFACTORYINSTANCE:
			return eAny(getEFactoryInstance()); //124
		case EcorePackage::EPACKAGE_EREFERENCE_ESUBPACKAGES:
			return eAny(getESubpackages()); //126
		case EcorePackage::EPACKAGE_EREFERENCE_ESUPERPACKAGE:
			return eAny(getESuperPackage()); //127
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSPREFIX:
			return eAny(getNsPrefix()); //123
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSURI:
			return eAny(getNsURI()); //122
	}
	return ENamedElementImpl::eGet(featureID, resolve, coreType);
}
bool EPackageImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case EcorePackage::EPACKAGE_EREFERENCE_ECLASSIFIERS:
			return getEClassifiers() != nullptr; //125
		case EcorePackage::EPACKAGE_EREFERENCE_EFACTORYINSTANCE:
			return getEFactoryInstance() != nullptr; //124
		case EcorePackage::EPACKAGE_EREFERENCE_ESUBPACKAGES:
			return getESubpackages() != nullptr; //126
		case EcorePackage::EPACKAGE_EREFERENCE_ESUPERPACKAGE:
			return getESuperPackage().lock() != nullptr; //127
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSPREFIX:
			return getNsPrefix() != ""; //123
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSURI:
			return getNsURI() != ""; //122
	}
	return ENamedElementImpl::internalEIsSet(featureID);
}
bool EPackageImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case EcorePackage::EPACKAGE_EREFERENCE_EFACTORYINSTANCE:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EFactory> _eFactoryInstance = newValue->get<std::shared_ptr<ecore::EFactory>>();
			setEFactoryInstance(_eFactoryInstance); //124
			return true;
		}
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSPREFIX:
		{
			// BOOST CAST
			std::string _nsPrefix = newValue->get<std::string>();
			setNsPrefix(_nsPrefix); //123
			return true;
		}
		case EcorePackage::EPACKAGE_EATTRIBUTE_NSURI:
		{
			// BOOST CAST
			std::string _nsURI = newValue->get<std::string>();
			setNsURI(_nsURI); //122
			return true;
		}
	}

	return ENamedElementImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EPackageImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get EcoreFactory
	std::shared_ptr<ecore::EcoreFactory> modelFactory = ecore::EcoreFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void EPackageImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("nsPrefix");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'std::string'
			std::string value;
			value = iter->second;
			this->setNsPrefix(value);
		}

		iter = attr_list.find("nsURI");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'std::string'
			std::string value;
			value = iter->second;
			this->setNsURI(value);
		}
		std::shared_ptr<EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("eFactoryInstance");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("eFactoryInstance")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ENamedElementImpl::loadAttributes(loadHandler, attr_list);
}

void EPackageImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("eClassifiers") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<ecore::EObject> eClassifiers = modelFactory->create(typeName, loadHandler->getCurrentObject(), EcorePackage::ECLASSIFIER_EREFERENCE_EPACKAGE);
			if (eClassifiers != nullptr)
			{
				loadHandler->handleChild(eClassifiers);
			}
			return;
		}

		if ( nodeName.compare("eSubpackages") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EPackage";
			}
			std::shared_ptr<ecore::EObject> eSubpackages = modelFactory->create(typeName, loadHandler->getCurrentObject(), EcorePackage::EPACKAGE_EREFERENCE_ESUPERPACKAGE);
			if (eSubpackages != nullptr)
			{
				loadHandler->handleChild(eSubpackages);
			}
			return;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	ENamedElementImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void EPackageImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references)
{
	switch(featureID)
	{
		case EcorePackage::EPACKAGE_EREFERENCE_EFACTORYINSTANCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EFactory> _eFactoryInstance = std::dynamic_pointer_cast<ecore::EFactory>( references.front() );
				setEFactoryInstance(_eFactoryInstance);
			}
			
			return;
		}
	}
	ENamedElementImpl::resolveReferences(featureID, references);
}

void EPackageImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ENamedElementImpl::saveContent(saveHandler);
	
	EModelElementImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void EPackageImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ecore::EcorePackage> package = ecore::EcorePackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getEPackage_EAttribute_nsPrefix()) )
		{
			saveHandler->addAttribute("nsPrefix", this->getNsPrefix());
		}

		if ( this->eIsSet(package->getEPackage_EAttribute_nsURI()) )
		{
			saveHandler->addAttribute("nsURI", this->getNsURI());
		}

		// Add references
		saveHandler->addReference("eFactoryInstance", this->getEFactoryInstance());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<EClass> metaClass = this->eClass();
		// Save 'eClassifiers'
		std::shared_ptr<Bag<ecore::EClassifier>> list_eClassifiers = this->getEClassifiers();
		for (std::shared_ptr<ecore::EClassifier> eClassifiers : *list_eClassifiers) 
		{
			saveHandler->addReference(eClassifiers, "eClassifiers", eClassifiers->eClass() != package->getEClassifier_EClass());
		}

		// Save 'eSubpackages'
		std::shared_ptr<Bag<ecore::EPackage>> list_eSubpackages = this->getESubpackages();
		for (std::shared_ptr<ecore::EPackage> eSubpackages : *list_eSubpackages) 
		{
			saveHandler->addReference(eSubpackages, "eSubpackages", eSubpackages->eClass() != package->getEPackage_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

