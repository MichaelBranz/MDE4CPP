#include "TemplateBindingImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "umlPackageImpl.hpp"

using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
TemplateBindingImpl::TemplateBindingImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	
	m_parameterSubstitution.reset(new std::vector<std::shared_ptr<uml::TemplateParameterSubstitution>>());
	
}

TemplateBindingImpl::~TemplateBindingImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TemplateBinding "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

TemplateBindingImpl::TemplateBindingImpl(const TemplateBindingImpl & obj)
{
	//create copy of all Attributes

	//copy references with now containment
	
	m_boundElement  = obj.getBoundElement();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement = obj.getOwnedElement();
	this->getOwnedElement()->insert(this->getOwnedElement()->end(), _ownedElement->begin(), _ownedElement->end());

	m_owner  = obj.getOwner();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _relatedElement = obj.getRelatedElement();
	this->getRelatedElement()->insert(this->getRelatedElement()->end(), _relatedElement->begin(), _relatedElement->end());

	m_signature  = obj.getSignature();

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _source = obj.getSource();
	this->getSource()->insert(this->getSource()->end(), _source->begin(), _source->end());

	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _target = obj.getTarget();
	this->getTarget()->insert(this->getTarget()->end(), _target->begin(), _target->end());


	//clone containt lists
	std::shared_ptr<std::vector<std::shared_ptr<ecore::EAnnotation>>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->push_back(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->push_back(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateParameterSubstitution>>> _parameterSubstitutionList = obj.getParameterSubstitution();
	for(std::shared_ptr<uml::TemplateParameterSubstitution> _parameterSubstitution : *_parameterSubstitutionList)
	{
		this->getParameterSubstitution()->push_back(std::shared_ptr<uml::TemplateParameterSubstitution>(dynamic_cast<uml::TemplateParameterSubstitution*>(_parameterSubstitution->copy())));
	}
}

ecore::EObject *  TemplateBindingImpl::copy() const
{
	return new TemplateBindingImpl(*this);
}

std::shared_ptr<ecore::EClass> TemplateBindingImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getTemplateBinding();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool TemplateBindingImpl::one_parameter_substitution(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TemplateBindingImpl::parameter_substitution_formal(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::TemplateableElement> TemplateBindingImpl::getBoundElement() const
{
//assert(m_boundElement);
    return m_boundElement;
}
void TemplateBindingImpl::setBoundElement(std::shared_ptr<uml::TemplateableElement> _boundElement)
{
    m_boundElement = _boundElement;
}

std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateParameterSubstitution>>> TemplateBindingImpl::getParameterSubstitution() const
{

    return m_parameterSubstitution;
}


std::shared_ptr<uml::TemplateSignature> TemplateBindingImpl::getSignature() const
{
//assert(m_signature);
    return m_signature;
}
void TemplateBindingImpl::setSignature(std::shared_ptr<uml::TemplateSignature> _signature)
{
    m_signature = _signature;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<uml::Element> TemplateBindingImpl::getOwner() const
{
	std::shared_ptr<uml::Element> _owner = nullptr ;
	
	if(getBoundElement()!=nullptr)
	{
		_owner = getBoundElement();
	}

	return _owner;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> TemplateBindingImpl::getSource() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _source(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_source->push_back(getBoundElement());

	return _source;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> TemplateBindingImpl::getTarget() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _target(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	_target->push_back(getSignature());

	return _target;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> TemplateBindingImpl::getRelatedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _relatedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> source = getSource();
	_relatedElement->insert(_relatedElement->end(), source->begin(), source->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> target = getTarget();
	_relatedElement->insert(_relatedElement->end(), target->begin(), target->end());

	return _relatedElement;
}
std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> TemplateBindingImpl::getOwnedElement() const
{
	std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> _ownedElement(new std::vector<std::shared_ptr<uml::Element>>()) ;
	
	std::shared_ptr<std::vector<std::shared_ptr<uml::Comment>>> ownedComment = getOwnedComment();
	_ownedElement->insert(_ownedElement->end(), ownedComment->begin(), ownedComment->end());
	std::shared_ptr<std::vector<std::shared_ptr<uml::TemplateParameterSubstitution>>> parameterSubstitution = getParameterSubstitution();
	_ownedElement->insert(_ownedElement->end(), parameterSubstitution->begin(), parameterSubstitution->end());

	return _ownedElement;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any TemplateBindingImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::TEMPLATEBINDING_BOUNDELEMENT:
			return getBoundElement(); //199
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //190
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //191
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //192
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //193
		case UmlPackage::TEMPLATEBINDING_PARAMETERSUBSTITUTION:
			return getParameterSubstitution(); //197
		case UmlPackage::RELATIONSHIP_RELATEDELEMENT:
			return getRelatedElement(); //194
		case UmlPackage::TEMPLATEBINDING_SIGNATURE:
			return getSignature(); //198
		case UmlPackage::DIRECTEDRELATIONSHIP_SOURCE:
			return getSource(); //195
		case UmlPackage::DIRECTEDRELATIONSHIP_TARGET:
			return getTarget(); //196
	}
	return boost::any();
}