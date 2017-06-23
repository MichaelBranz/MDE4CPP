#include "CollaborationUseImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
CollaborationUseImpl::CollaborationUseImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	m_roleBinding.reset(new std::vector<std::shared_ptr<uml::Dependency>>());
	
}

CollaborationUseImpl::~CollaborationUseImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CollaborationUse "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

CollaborationUseImpl::CollaborationUseImpl(const CollaborationUseImpl & obj)
{
	//create copy of all Attributes
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with now containment
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _clientDependency = obj.getClientDependency();
	this->getClientDependency()->insert(this->getClientDependency()->end(), _clientDependency->begin(), _clientDependency->end());

	m_namespace  = obj.getNamespace();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	m_type  = obj.getType();


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> _roleBindingList = obj.getRoleBinding();
	for(std::shared_ptr<uml::Dependency> _roleBinding : *_roleBindingList)
	{
		this->getRoleBinding()->push_back(std::shared_ptr<uml::Dependency>(dynamic_cast<uml::Dependency*>(_roleBinding->copy())));
	}
}

ecore::EObject *  CollaborationUseImpl::copy() const
{
	return new CollaborationUseImpl(*this);
}

std::shared_ptr<ecore::EClass> CollaborationUseImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getCollaborationUse();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool CollaborationUseImpl::client_elements(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool CollaborationUseImpl::connectors(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool CollaborationUseImpl::every_role(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> CollaborationUseImpl::getRoleBinding() const
{

    return m_roleBinding;
}


std::shared_ptr<uml::Collaboration> CollaborationUseImpl::getType() const
{
//assert(m_type);
    return m_type;
}
void CollaborationUseImpl::setType(std::shared_ptr<uml::Collaboration> _type)
{
    m_type = _type;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> CollaborationUseImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_ownedElement->push_back(getNameExpression());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Dependency>>> roleBinding = getRoleBinding();
	_ownedElement->insert(_ownedElement->end(), roleBinding->begin(), roleBinding->end());

	return _ownedElement;
}
std::shared_ptr<uml::Element> CollaborationUseImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getNamespace()!=nullptr)
	{
		_owner = getNamespace();
	}

	return _owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any CollaborationUseImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //904
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //900
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //905
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //906
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //907
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //901
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //902
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //903
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //908
		case UmlPackage::COLLABORATIONUSE_ROLEBINDING:
			return getRoleBinding(); //9010
		case UmlPackage::COLLABORATIONUSE_TYPE:
			return getType(); //9011
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //909
	}
	return boost::any();
}