## Fenwick-Tree  ||  Binary-Indexed-Tree
![Fenwick-Tree](https://upload.wikimedia.org/wikipedia/commons/d/dc/BITDemo.gif)
### Introduction.

    A Fenwick tree or binary indexed tree is a data structure that can efficiently update elements and calculate
    prefix sums in a table of numbers. As it is a Prefix-Tree, we can usually get range results between 0 -> x.
    
    Although Fenwick-Tree is said to be a Tree, it is implemented as an array using the properties of the tree.
    The whole concept of Fenwick-Tree was created just because any number can be represented in power of 2s.
    
    This structure was proposed by Boris Ryabko in 1989 with a further modification published in 1992.
    It has subsequently became known under the name Fenwick tree after Peter Fenwick who has described this structure
    in his 1994 paper.
    
    Fenwick-Tree is understood easily by using 1-based-array instead of 0-based-array.

### Time-Complexity.

    Building the Tree: O(nlogn). O(n) if optimized. (One-Time process)
    Update: O(logn)
    Query: O(logn)
    
### Parent-Child Access.
    
    The Essence of this Data-Structure is that it is efficient to travel between child and parent. As said, we can 
    assume each element as a power of 2. Each Node stores the result between 0 to x. So to calculate the result bw
    0 and y, we can sum up the results between parts till y. Ex: [0, y] can be obtained by [0, x1] + [0, x2] + ... 
    [0, xn], where xn = y.
    
    We can get the child of a Node by just considering this operation: x += (x & (x-1)), where 'x' is the index of
    the current element. We just flip the last set-bit and add it to the current index-value so that we get the
    child's index. We continue this operation until we reach the last node ie, (index <= n).
    
    Similarly, we can get the Parent of a Node by just considering this operation: x -= (x & (x - 1)), where 'x' is
    the index of the current element. Just flipping the last set-bit and subtracting it from the current-index value
    will give us the index of Parent Node. We continue this operation until we reach the Root-Node ie, (index > 0).
    
### Building Tree.
  
    As said, we use the Traversal-Technique to update nodes. We loop-through the array-elementsand call
    the updateNode() for each of the element. It updates the node and its children too as they are dependent
    on this node.
    
### Querying:
    
    Similarly, we go through [0, x] summing up the results of each index. Finally, when we hit the end;
    we return the result.
    
    
