#pragma once
#include <iostream>
#include "CNode.h"
class CStack
{
	private:
		CNode*	m_pclsHeadNode;
	public:
		CStack();
		CStack(const CStack& clsOriginalToCopy);	// Deep copy!
		~CStack();	// Clean up any allocated memory
		void operator=(const CStack& clsOriginalToCopy);	// Deep copy!
		void Push(int intValue);	// Add 1 value to the top of the stack
		int Pop();	// Remove 1 value from the top of the stack
		bool IsEmpty() const;	// Return true if head node pointer is zero
		void Print() const;	// This will print the whole list.
	private:
		void Initialize(); // Set class properties to zero.
		void DeepCopy(const CStack& clsOriginalToCopy);
		void CleanUp(); // Delete the list

};

