### Segment Tree.

![](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fwww.codebycase.com%2Fassets%2Fimages%2Falgorithms%2Fsegment-tree.jpg&f=1&nofb=1)

#### Intro.

    A segment tree also known as a statistic tree is a tree data structure used for storing
    information about intervals, or segments. It allows querying which of the stored segments
    contain a given point. It is, in principle, a static structure; that is, it's a structure
    that cannot be modified once it's built.
    
#### Time Complexity.

    - Building a Tree: O(n) // One-time Process.
    - Query: O(logn)
    - Updation: O(logn)

#### Cases.

    Let,
        "start" be the left range,
        "end" be the right range,
        "inStart" be the input left range,
        "inEnd" be the input right range.
        
    Then,
         - Completely Overlapping: (inStart <= start && inEnd >= end).
         - No Overlap: (end < inStart || start > inEnd).
         - Partial Overlap: If none of the above cases satisfy.

#### Base Case.
    If (start == end), we have hit the bottom level and we return.
    
#### Build Process. (May change according to the problem statement.)
	We traverse the array in left and right manner until the base condition is hit. When the base
	condition is hit, we equal the value of the tree at the current index to something we want
	which depends on the problem statement. After both of the left and right calls, we will
	be at a point where the current node's value is derived from the left and right nodes.
	For example, In sum-range, the value of a node is equal to the minimum value between the
	left and right nodes.
		
	Left Node = 2 * index;
	Right Node = 2 * index + 1;
	Mid = (start + end) / 2;
		
#### Query Process. (May change according to the problem statement.)
	After building the tree, queries can be efficiently answered. The Tree is traversed in the following
	manner:
	- If the ranges are "Partially Overlapping", The node's children are explored.
	- If the ranges are "Not Overlapping", some extreme value is returned (MAX or MIN).
	- If the ranges are "Completely Overlapping", we return that node itself.
