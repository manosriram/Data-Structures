function TrieNode(key) {
  this.key = key;
  this.end = false;
  this.children = {};
  this.parent = null;
}

function Trie() {
  this.root = new TrieNode(null);
}

Trie.prototype.insertWord = function(word) {
  var node = this.root;

  for (var i = 0; i < word.length; i++) {
    if (!node.children[word[i]]) {
      node.children[word[i]] = new TrieNode(word[i]);

      node.children[word[i]].parent = node;
    }

    node = node.children[word[i]];

    if (i == word.length - 1) {
      node.end = true;
    }
  }
};

Trie.prototype.containsWord = function(word) {
  var node = this.root;

  for (var i = 0; i < word.length; i++) {
    if (!node.children[word[i]]) return false;
    else {
      node = node.children[word[i]];
    }
  }
  return node.end;
};

var Tr = new Trie();

Tr.insertWord("hello");
Tr.insertWord("helium");

console.log(Tr.containsWord("hello"));
console.log(Tr.containsWord("mano"));
