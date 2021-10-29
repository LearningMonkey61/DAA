#include <bits/stdc++.h>
using namespace std;

// find the lcs of two strings
string lcs(const string s1, const string s2) {
  int m = s1.length();
  int n = s2.length();
  int L[m + 1][n + 1];
  int i, j;
  for (i = 0; i <= m; i++) {
    for (j = 0; j <= n; j++) {
      if (i == 0 || j == 0) {
        L[i][j] = 0;
      } else if (s1[i - 1] == s2[j - 1]) {
        L[i][j] = L[i - 1][j - 1] + 1;
      } else {
        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
      }
    }
  }
  string lcs = "";
  i = m;
  j = n;
  while (i > 0 && j > 0) {
    if (s1[i - 1] == s2[j - 1]) {
      lcs = s1[i - 1] + lcs;
      i--;
      j--;
    } else if (L[i - 1][j] > L[i][j - 1]) {
      i--;
    } else {
      j--;
    }
  }
  return lcs;
}

int main(void) {
  string s1, s2;
  s1 = "geeksforgeeks";
  s2 = "geeks";

  cout << lcs(s1, s2) << endl;

  return 0;
}
