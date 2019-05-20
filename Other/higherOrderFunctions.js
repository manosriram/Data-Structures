const companies = [
  { name: "Microsoft", CEO: "Satya Nadella", Best: "Windows" },
  { name: "Apple", CEO: "Tim Cook", Best: "Mac and iPod" },
  { name: "Alibaba", CEO: "Jack Ma", Best: "Products" },
  { name: "Amazon", CEO: "Jeff Bezos", Best: "E-Commerce" },
  { name: "SpaceX", CEO: "Elon Musk", Best: "Re-Usable Boosters" },
  { name: "Facebook", CEO: "Mark Zuckerberg", Best: "Social Media" },
  { name: "Tesla", CEO: "Elon Musk", Best: "Electric Cars" },
  {
    name: "The Boring Company",
    CEO: "Elon Musk",
    Best: "Underground Superfast Travel"
  },
  { name: "HP", CEO: "Dion Wiesler", Best: "Consumer Electronics" }
];

const ages = [33, 12, 20, 16, 5, 54, 21, 44, 61, 13, 15, 45, 25, 64, 32];

/* 
For Each
Parameters : Each Element in the Array, Index, Entire Array.
*/
// companies.forEach((company, index, companies) => {
//   console.log(company.name);
// });

/*
Filter
Parameters : Each Element and then a callback function returning a condition.
*/
// canDrink = ages.filter(age => age >= 21);
// console.log(canDrink);

/*
Sort
Paramters : Two Elements and Compares them.
*/
const sortedCompanies = companies.sort((c1, c2) => {
  return c1.name.length > c2.name.length ? true : false;
});
console.log(sortedCompanies.map((el, elInd) => console.log(el.name)));
