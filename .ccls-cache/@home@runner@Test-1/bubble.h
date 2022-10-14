#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int t;
  t = a;
  a = b;
  b = t;
}

void display(int a[], int N) {
  int i;
  for (i = 1; i < N + 1; i++) {
    cout << a[i - 1] << "  ";
  }
  cout << endl;
}

void bubble(int a[], int argc) {
  int i, j, sorted;
  int row = 1;
  int change = 1;
  int N = argc - 1;
  cout << "-----Bubble Sorting-----" << endl;
  for (i = 0; i < N - 1; i++) {
    sorted = 0;
    for (j = 0; j < N - 1; j++) {
      // check neighbour
      // swap if it's not right
      if (a[j] > a[j + 1]) {
        cout<<"------------------------------------ Change = "<<change<<endl;
        change++;
        swap(a[j], a[j + 1]);
        sorted = 1;
      }
      cout<<"No."<<row<<" - ";
      row++;
      display(a, N);
    }
    if (sorted == 0) break;
  }
  cout << "--------Bubble Sorted--------" << endl;
  display(a, N);
}