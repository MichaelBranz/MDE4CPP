#include "StartClassifierBehaviorActionActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"

//Forward declaration includes
#include "ActionActivation.hpp";

#include "ActivityEdgeInstance.hpp";

#include "ActivityNode.hpp";

#include "ActivityNodeActivationGroup.hpp";

#include "PinActivation.hpp";

#include "Token.hpp";


using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
StartClassifierBehaviorActionActivationImpl::StartClassifierBehaviorActionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

StartClassifierBehaviorActionActivationImpl::~StartClassifierBehaviorActionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StartClassifierBehaviorActionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

StartClassifierBehaviorActionActivationImpl::StartClassifierBehaviorActionActivationImpl(const StartClassifierBehaviorActionActivationImpl & obj):StartClassifierBehaviorActionActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StartClassifierBehaviorActionActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with no containment (soft copy)
	
	m_group  = obj.getGroup();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _incomingEdges = obj.getIncomingEdges();
	m_incomingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getIncomingEdges().get())));

	m_node  = obj.getNode();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _outgoingEdges = obj.getOutgoingEdges();
	m_outgoingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getOutgoingEdges().get())));

		std::shared_ptr< Bag<fUML::PinActivation> >
	 _pinActivation = obj.getPinActivation();
	m_pinActivation.reset(new 	 Bag<fUML::PinActivation> 
	(*(obj.getPinActivation().get())));


    
	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::Token>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->add(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_heldTokens" << std::endl;
	#endif


}

ecore::EObject *  StartClassifierBehaviorActionActivationImpl::copy() const
{
	return new StartClassifierBehaviorActionActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> StartClassifierBehaviorActionActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getStartClassifierBehaviorActionActivation();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StartClassifierBehaviorActionActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIONACTIVATION_FIRING:
			return isFiring(); //1047
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //1043
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //1042
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //1041
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //1044
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //1040
		case FUMLPackage::ACTIONACTIVATION_PINACTIVATION:
			return getPinActivation(); //1046
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //1045
	}
	return boost::any();
}