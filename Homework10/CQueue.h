#pragma once
#include "CNode.h"
#include <iostream>
class CQueue
{
	private:
		CNode* m_pclsHeadNode;
		CNode* m_pclsTailNode;

	public:
		CQueue();
		CQueue(const CQueue& clsOriginalToCopy);	// Deep copy!
		~CQueue();	// Clean up any allocated memory
		void operator=(const CQueue& clsOriginalToCopy);	// Deep copy!

		void Push(int intValue);	// Add 1 value to the end of the queue
		int Pop();	// Remove 1 value from the front of the queue
		bool IsEmpty() const;	// Return true if head node pointer is zero
		void Print() const;	// This will print the whole list. 

	private:
		void Initialize();	// Set class properties to zero.
		void DeepCopy(const CQueue& clsOriginalToCopy);
		void CleanUp();					// Delete the list

};

