#pragma once
class CNode
{
	private:
		int m_intValue;
		CNode* m_pclsNextNode;

	public:
		CNode();	// Default constructor
		CNode(int intValue);	// Parameterized constructor #1
		CNode(int intValue, CNode* pclsNextNode);	// Parameterized constructor #2
		CNode(const CNode& clsOriginalToCopy);	// Copy constructor with shallow copy! 
		~CNode();
		void operator=(const CNode& clsOriginalToCopy);	// Shallow copy! 
		void SetValue(int intNewValue);
		int GetValue();
		void SetNextNode(CNode* pclsNextNode);
		CNode* GetNextNode();

};

