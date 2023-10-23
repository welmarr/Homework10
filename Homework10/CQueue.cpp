#include "CQueue.h"

CQueue::CQueue() {
    Initialize();
}

CQueue::CQueue(const CQueue& clsOriginalToCopy) {
    DeepCopy(clsOriginalToCopy);
}

CQueue::~CQueue() {
    CleanUp();
}

void CQueue::operator=(const CQueue& clsOriginalToCopy) {
    DeepCopy(clsOriginalToCopy);
}

void CQueue::Push(int intValue) {
    CNode* newNode = new CNode(intValue);

    if (IsEmpty()) {
        m_pclsHeadNode = newNode;
        m_pclsTailNode = newNode;
    }
    else {
        m_pclsTailNode->SetNextNode(newNode);
        m_pclsTailNode = newNode;
    }
}

int CQueue::Pop() {
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
        if (m_pclsHeadNode == nullptr) {
            // If the queue is now empty, update the tail node to nullptr.
            m_pclsTailNode = nullptr;
        }
        return poppedValue;
    }
}

bool CQueue::IsEmpty() const {
    return (m_pclsHeadNode == nullptr);
}

void CQueue::Print() const {
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

void CQueue::Initialize() {
    m_pclsHeadNode = nullptr;
    m_pclsTailNode = nullptr;
}

void CQueue::DeepCopy(const CQueue& clsOriginalToCopy) {
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

void CQueue::CleanUp() {
    while (!IsEmpty()) {
        Pop();
    }
}
