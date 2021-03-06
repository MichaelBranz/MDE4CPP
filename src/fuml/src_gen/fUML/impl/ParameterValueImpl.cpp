#include "fUML/impl/ParameterValueImpl.hpp"

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
#include "fUML/impl/FUMLPackageImpl.hpp"
#include "fUML/FUMLFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "fUML/FUMLFactory.hpp"
#include "fUML/FUMLPackage.hpp"
#include <exception> // used in Persistence

#include "uml/Parameter.hpp"

#include "fUML/Value.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "fUML/FUMLPackage.hpp"
#include "fUML/FUMLFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ParameterValueImpl::ParameterValueImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

		m_values.reset(new Bag<fUML::Value>());
	
	

	//Init references
	

	
	
}

ParameterValueImpl::~ParameterValueImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ParameterValue "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




ParameterValueImpl::ParameterValueImpl(const ParameterValueImpl & obj):ParameterValueImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ParameterValue "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_parameter  = obj.getParameter();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::Value>> _valuesList = obj.getValues();
	for(std::shared_ptr<fUML::Value> _values : *_valuesList)
	{
		this->getValues()->add(std::shared_ptr<fUML::Value>(std::dynamic_pointer_cast<fUML::Value>(_values->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_values" << std::endl;
	#endif

	
	
}

std::shared_ptr<ecore::EObject>  ParameterValueImpl::copy() const
{
	std::shared_ptr<ParameterValueImpl> element(new ParameterValueImpl(*this));
	element->setThisParameterValuePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> ParameterValueImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getParameterValue_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************
std::shared_ptr<uml::Parameter > ParameterValueImpl::getParameter() const
{
//assert(m_parameter);
    return m_parameter;
}
void ParameterValueImpl::setParameter(std::shared_ptr<uml::Parameter> _parameter)
{
    m_parameter = _parameter;
}

std::shared_ptr<Bag<fUML::Value>> ParameterValueImpl::getValues() const
{

    return m_values;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<ParameterValue> ParameterValueImpl::getThisParameterValuePtr() const
{
	return m_thisParameterValuePtr.lock();
}
void ParameterValueImpl::setThisParameterValuePtr(std::weak_ptr<ParameterValue> thisParameterValuePtr)
{
	m_thisParameterValuePtr = thisParameterValuePtr;
}
std::shared_ptr<ecore::EObject> ParameterValueImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any ParameterValueImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_PARAMETER:
			return eAny(getParameter()); //390
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_VALUES:
			return eAny(getValues()); //391
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool ParameterValueImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_PARAMETER:
			return getParameter() != nullptr; //390
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_VALUES:
			return getValues() != nullptr; //391
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool ParameterValueImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_PARAMETER:
		{
			// BOOST CAST
			std::shared_ptr<uml::Parameter> _parameter = newValue->get<std::shared_ptr<uml::Parameter>>();
			setParameter(_parameter); //390
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void ParameterValueImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get FUMLFactory
	std::shared_ptr<fUML::FUMLFactory> modelFactory = fUML::FUMLFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void ParameterValueImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("parameter");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("parameter")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void ParameterValueImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("values") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<fUML::Value> values = std::dynamic_pointer_cast<fUML::Value>(modelFactory->create(typeName));
			if (values != nullptr)
			{
				std::shared_ptr<Bag<fUML::Value>> list_values = this->getValues();
				list_values->push_back(values);
				loadHandler->handleChild(values);
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

	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void ParameterValueImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case FUMLPackage::PARAMETERVALUE_EREFERENCE_PARAMETER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Parameter> _parameter = std::dynamic_pointer_cast<uml::Parameter>( references.front() );
				setParameter(_parameter);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void ParameterValueImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void ParameterValueImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<fUML::FUMLPackage> package = fUML::FUMLPackage::eInstance();

	

		// Add references
		saveHandler->addReference("parameter", this->getParameter());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'values'
		std::shared_ptr<Bag<fUML::Value>> list_values = this->getValues();
		for (std::shared_ptr<fUML::Value> values : *list_values) 
		{
			saveHandler->addReference(values, "values", values->eClass() != package->getValue_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

