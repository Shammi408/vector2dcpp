#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int k = 0;
  int aalu[2];

  for (int i = 0; i < 2; i++) {
    cin >> aalu[i];
  }
  for (int i = 0; i < 2; i++) {
    cout << aalu[i] << " ";
  }
  cout << endl;
  int num = aalu[0];
  int query = aalu[1];

  vector<vector<int>> arr;
  string str;
  cin.ignore(100, '\n');

  for (int i = 0; i < num; i++) {
    int a = 0;
    vector<int> temp;
    string s;
    getline(cin, s);
    int size = s.size();
    for (int j = 0; j < size; j++) {
      if (s[j] >= '0' && s[j] <= '9') {
        a = 10 * a + (s[j] - '0');
        if (j == size - 1) {
          temp.push_back(a);
        }
        continue;
      } else {
        temp.push_back(a);
        a = 0;
      }
    }
    arr.push_back(temp);
  }
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int ques[query][2];
  for (int i = 0; i < query; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> ques[i][j];
    }
  }
  for (int i = 0; i < query; i++) {
    for (int j = 0; j < 2; j++) {
      cout << ques[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < query; i++) {
    int a = ques[i][0];
    int b = ques[i][1];
    cout << arr[a][b] << endl;
  }
}
