#include "CNode.h"

// Default constructor for CNode class
// Initializes the object with default values.
CNode::CNode() : m_intValue(0), m_pclsNextNode(nullptr) {}

// Constructor for CNode class with an integer value
// Initializes the object with the provided integer value and a nullptr for the next node.
CNode::CNode(int intValue) : m_intValue(intValue), m_pclsNextNode(nullptr) {}

// Constructor for CNode class with an integer value and a pointer to the next node
// Initializes the object with the provided integer value and the next node pointed to by pclsNextNode.
CNode::CNode(int intValue, CNode* pclsNextNode) : m_intValue(intValue), m_pclsNextNode(pclsNextNode) {}

// Copy constructor for CNode class with a shallow copy
// Creates a new object by copying the integer value and the next node from clsOriginalToCopy.
CNode::CNode(const CNode& clsOriginalToCopy) : m_intValue(clsOriginalToCopy.m_intValue), m_pclsNextNode(clsOriginalToCopy.m_pclsNextNode) {}

// Destructor for CNode class
CNode::~CNode() {
}

// Assignment operator for CNode class with shallow copy
// Copies the integer value and the next node from clsOriginalToCopy to the current object.
void CNode::operator=(const CNode& clsOriginalToCopy) {
    if (this != &clsOriginalToCopy) {
        m_intValue = clsOriginalToCopy.m_intValue;
        m_pclsNextNode = clsOriginalToCopy.m_pclsNextNode;
    }
}

// Set a new integer value for the CNode object
void CNode::SetValue(int intNewValue) {
    m_intValue = intNewValue;
}

// Get the integer value of the CNode object
int CNode::GetValue() {
    return m_intValue;
}

// Set the next node for the CNode object
void CNode::SetNextNode(CNode* pclsNextNode) {
    m_pclsNextNode = pclsNextNode;
}

// Get a pointer to the next node for the CNode object
CNode* CNode::GetNextNode() {
    return m_pclsNextNode;
}
