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

TrieNode.prototype.getWord = function() {
  var arr = [];
  var node = this;

  while (node !== null) {
    arr.unshift(node.key);
    node = node.parent;
  }

  return arr.join("");
};

function findOnePrefix(node, arr) {
  if (node.end) {
    arr.unshift(node.getWord());
  }

  for (var child in node.children) {
    findOnePrefix(node.children[child], arr);
  }
}

Trie.prototype.findPrefixWords = function(prefix) {
  var node = this.root;
  var arr = [];

  for (var t = 0; t < prefix.length; t++) {
    if (node.children[prefix[t]]) {
      node = node.children[prefix[t]];
    } else {
      return arr;
    }
  }

  findOnePrefix(node, arr);
  return arr;
};

var Tr = new Trie();
Tr.insertWord("hello");
Tr.insertWord("helium");
Tr.insertWord("heart");
Tr.insertWord("hate");

console.log(Tr.containsWord("hello"));
console.log(Tr.containsWord("mano"));

console.log(Tr.findPrefixWords("ha"));
