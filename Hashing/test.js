var arr = [];
var anotherArray = [1234123412, 1234123413, 1234123414, 1234123415];

for (var t = 0; t < 4; t++) {
  arr[anotherArray[t] % 4] = anotherArray[t];
}

for (var t = 0; t < 4; t++) {
  console.log(arr[t] + " ");
}
