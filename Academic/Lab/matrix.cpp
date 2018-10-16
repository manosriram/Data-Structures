#include <iostream>

using namespace std;

int i, j, r, c;

class mat2;

class mat1
{

private:
  int a[100][100];

  void getmat1()
  {

    for (i = 0; i < r; i++)
    {
      for (j = 0; j < c; j++)
      {
        cin >> a[i][j];
      }
    }
  }
  friend void sum(mat1 v1, mat2 v2);
};

class mat2
{
  int b[100][100];

private:
  void getmat2()
  {
    for (int i1 = 0; i1 < r; i1++)
    {
      for (int j1 = 0; j1 < c; j1++)
      {
        cin >> b[i1][j1];
      }
    }
  }
  friend void sum(mat1 v1, mat2 v2);
};

void sum(mat1 v1, mat2 v2)
{

  int sum1[100][100];
  v1.getmat1();
  v2.getmat2();
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      sum1[i][j] = v1.a[i][j] + v2.b[i][j];
    }
  }

  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << sum1[i][j];
    }
    cout << endl;
  }
}

int main()
{
  cin >> r >> c;
  mat1 ob1;
  mat2 ob2;
  sum(ob1, ob2);
}
