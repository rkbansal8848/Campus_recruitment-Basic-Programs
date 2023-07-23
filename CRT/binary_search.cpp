#include <iostream>
#include <algorithm>
using namespace std;
void bins(int A[], int lb, int ub, int v)
{
  int pos, f = 0;
  if (lb <= ub)
  {
    int mid = (lb + ub) / 2;
    if (v == A[mid])
    {
      f = 1;
      cout << "Your no. found at position " << mid + 1;
    }
    else if (v < A[mid])
    {
      bins(A, lb, mid - 1, v);
    }
    else if (v > A[mid])
    {
      bins(A, mid + 1, ub, v);
    }
  }
  else
    cout << "not found";
}

int main()
{
  int n, value;
  cout << "Enter the no. of elements\n";
  cin >> n;
  int A[n];
  cout << "enter the array elements\n";
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  cout << "enter the value to search\n";
  cin >> value;
  sort(A, A + 4);
  int lb = 0, ub = n - 1;
  bins(A, lb, ub, value);

  return 0;
}