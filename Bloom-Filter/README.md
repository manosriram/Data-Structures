### Bloom Filter.

![](https://external-content.duckduckgo.com/iu/?u=http%3A%2F%2F4.bp.blogspot.com%2F-l2nxkF4rMVg%2FVK7qaa0ND0I%2FAAAAAAAAAAg%2FkPC-a4ykUJ8%2Fs1600%2FBloom-fig1.1.png&f=1&nofb=1)

#### Introduction.
	A Bloom filter is a space-efficient probabilistic data structure, conceived by Burton
	Howard Bloom in 1970, that is used to test whether an element is a member of a set.
	False positive matches are possible, but false negatives are not – in other words, a query
	returns either "possibly in set" or "definitely not in set". Elements can be added to the set,
	but not removed (though this can be addressed with the counting Bloom filter variant);
	The more elements that are added to the set, the larger the probability of false positives.
	
#### Hash Function.
	3 Non-Cryptographic Hash functions are used to occupy bits. An Hash function must be consistent and
	must exhibit good Avalanche Effect. In this Code, We used 3 following 32-bit Hash functions:
	
	- Murmur Hash
	- Jenkins Hash
	- Fast Hash
	
	We can use any number of hash functions. Lower the size of the bit-array, higher the probability of
	false negatives.
	
	- Avalanche Effect: It is the effect which results in a completely different value even if the input is
	slightly changed.

#### Insertion.
	Each of the 3 Hash functions give us a digit. Let us assume 3 hash functions to be h1, h2 and h3.
	If h1 = 3, h2 = 5 and h3 = 8, Size of the bit-array = 15. The Positions 3, 5 and 8 are occupied. 
	For the next word, let h1 = 4, h2 = 3 and h3 = 5. But, 3 and 5 are already occupied. So 4 is marked.
	
	The bit-array now looks like <0 0 0 1 1 1 0 0 1 0 0 0 0 0 0>
	
#### Check.
	Checking if a word is present or not is simple. If all the hash-function's indices in the bit-array are 1,
	then we can say the word has a high probability of being present.
	
#### Deletion.
	Deletion of word may seem simple but it is not recommended. As deletion means flipping the ones of the
	hash-function indices, Any other word which might have occupied that index will be lost. When no of words
	are high, there is a high probability that many words will be lost. Hence, we don't delete words from
	bloom filter.
