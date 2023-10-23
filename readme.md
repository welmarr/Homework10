RackMultipart20231023-1-424hkh.docxOctober 23, 2023 Page 6 of 2

**SET-252 CProgramming #2**

#### Homework: 10 – Linked List Classes: CStack and CQueue

Reading(s): Chapter 4 in C++ Primer Plus: pointers, new and delete.

**Step 1 – CNode**

1. Make a CNode class.

1. Add the following private properties:

- m\_intValue

  - m\_pclsNextNode

1. Add the following public methods:

- CNode( ) // Default constructor
- CNode( int intValue ) // Parameterized constructor #1
- CNode( int intValue, CNode\* pclsNextNode ) // Parameterized constructor #2
- CNode( const CNode &clsOriginalToCopy ) // Copy constructor with shallow copy!
- ~CNode( )
- operator=( const CNode &clsOriginalToCopy ) // Shallow copy!
- Set/Get Value

void SetValue( int intNewValue )

{

m\_intValue = intNewValue;

}

int GetValue( )

{

return m\_intValue;

}

- Set/Get Next Node

void SetNextNode( CNode\* pclsNextNode )

{

m\_pclsNextNode = pclsNextNode;

}

CNode\* GetNextNode( )

{

return m\_pclsNextNode;

}

1. Add the following private methods:

- ShallowCopy( const CNode &clsOriginalToCopy )

(continued on the next age)

**Step 2 – CStack**

1. Make a CStack class. A stack is last-in-first-out (LIFO) singly linked list.

1. Add the following private properties:

  - m\_pclsHeadNode

1. Add the following public methods:

- CStack( )
- CStack ( const CStack &clsOriginalToCopy ) // Deep copy!
- ~CStack ( ) // Clean up any allocated memory
- operator=( const CStack &clsOriginalToCopy ) // Deep copy!

- void Push( int intValue ) // Add 1 value to the top of the stack
- int Pop( ) // Remove 1 value from the top of the stack
- bool IsEmpty( ) const // Return true if head node pointer is zero
- void Print( ) const // This will print the whole list.

// It is non-destructive.

// You can call it over and over

1. Add the following private methods:

- Initialize( ) // Set class properties to zero.
- DeepCopy( const CStack &clsOriginalToCopy )
- CleanUp( ) // Delete the list

**Step 3 – CQueue**

1. Make a CQueue class. A queue is first-in-first-out (FIFO) singly linked list.

1. Add the following private properties:

  - m\_pclsHeadNode
  - m\_pclsTailNode

1. Add the following public methods:

- CQueue( )
- CQueue ( const CQueue &clsOriginalToCopy ) // Deep copy!
- ~CQueue ( ) // Clean up any allocated memory
- operator=( const CQueue &clsOriginalToCopy ) // Deep copy!

- void Push( int intValue ) // Add 1 value to the **end** of the queue
- int Pop( ) // Remove 1 value from the **front** of the queue
- bool IsEmpty( ) const // Return true if head node pointer is zero
- void Print( ) const // This will print the whole list.

// It is non-destructive.

// You can call it over and over

1. Add the following private methods:

- Initialize( ) // Set class properties to zero.
- DeepCopy( const CQueue &clsOriginalToCopy )
- CleanUp( ) // Delete the list

**\*\*\* Make a main that tests all of your code. Be sure to test your copy constructors by passing instances of CStack and CQueue by value. Print the original before the call, the copy during the call and the original after the call. The copies should print out in the \*\*\*SAME\*\*\* order as the original. \*\*\***