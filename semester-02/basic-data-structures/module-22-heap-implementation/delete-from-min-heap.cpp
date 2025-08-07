#include <bits/stdc++.h>

using namespace std;

void insert_at_min_heap(vector<int> &v, int x)
{
  v.push_back(x);

  int cur_idx = v.size() - 1;

  while (cur_idx)
  {
    int par_idx = (cur_idx - 1) / 2;

    if (v[par_idx] > v[cur_idx])
    {
      swap(v[par_idx], v[cur_idx]);
    }
    else
    {
      break;
    }

    cur_idx = par_idx;
  }
}

void print_heap(vector<int> v)
{
  for (int x : v)
  {
    cout << x << ' ';
  }
}

void delete_from_min_heap(vector<int> &v)
{
  v[0] = v.back();
  v.pop_back();

  int curr_idx = 0;

  while (1)
  {
    int left_idx = (curr_idx * 2) + 1,
        right_idx = (curr_idx * 2) + 2;

    int left_val = INT_MAX, right_val = INT_MAX;

    if (left_idx < v.size())
    {
      left_val = v[left_idx];
    }
    if (right_idx < v.size())
    {
      right_val = v[right_idx];
    }

    if (left_val <= v[curr_idx] && left_val < right_val)
    {
      swap(v[curr_idx], v[left_idx]);
      curr_idx = left_idx;
    }
    else if (right_val <= v[curr_idx] && right_val < left_val)
    {
      swap(v[curr_idx], v[right_idx]);
      curr_idx = right_idx;
    }
    else
    {
      break;
    }
  }
}

int main()
{
  int n;
  cin >> n;

  vector<int> v;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    insert_at_min_heap(v, x);
  }

  print_heap(v);
  delete_from_min_heap(v);
  cout << endl;
  print_heap(v);

  return 0;
}
