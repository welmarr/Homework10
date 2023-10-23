#include "CStack.h"



CStack::CStack() {
    Initialize();
}

CStack::CStack(const CStack& clsOriginalToCopy) {
    DeepCopy(clsOriginalToCopy);
}

CStack::~CStack() {
    CleanUp();
}

void CStack::operator=(const CStack& clsOriginalToCopy) {
    DeepCopy(clsOriginalToCopy);
}

void CStack::Push(int intValue) {
    CNode* newNode = new CNode(intValue);
    if (IsEmpty()) {
        m_pclsHeadNode = newNode;
    }
    else {
        newNode->SetNextNode(m_pclsHeadNode);
        m_pclsHeadNode = newNode;
    }
}

int CStack::Pop() {
    if (IsEmpty()) {
        // Queue is empty, return a sentinel value or throw an exception.
        // Here, we'll return -1 as a sentinel value.
        return -1;
    }
    else {
        int poppedValue = m_pclsHeadNode->GetValue();
        CNode* temp = m_pclsHeadNode;
        m_pclsHeadNode = m_pclsHeadNode->GetNextNode();
        delete temp;
        return poppedValue;
    }
}

bool CStack::IsEmpty() const {
    return (m_pclsHeadNode == nullptr);
}

void CStack::Print() const {
    if (m_pclsHeadNode != nullptr) {
        CNode* current = m_pclsHeadNode;
        while (current != nullptr) {
            std::cout << "*" << current << " = " << current->GetValue() << std::endl;
            current = current->GetNextNode();
        }
    }
    else {
        std::cout << "Empty Queue." << std::endl;
    }
}

void CStack::Initialize() {
    m_pclsHeadNode = nullptr;
}

void CStack::DeepCopy(const CStack& clsOriginalToCopy) {
    if (this != &clsOriginalToCopy) {
        if (!IsEmpty()) {

            CleanUp();
            Initialize();

            CNode* current = clsOriginalToCopy.m_pclsHeadNode;
            while (current != nullptr) {
                Push(current->GetValue());
                current = current->GetNextNode();
            }
        }
    }
}

void CStack::CleanUp() {
    while (!IsEmpty()) {
        Pop();
    }
}