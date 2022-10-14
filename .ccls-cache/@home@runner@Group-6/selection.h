#ifndef selection_h
#define selection_h
#include <iostream>
using namespace std;

void selection(int a[], int argc){
  int i,j,N,low,ii;
  int row = 1;
  int change = 1;
  N = argc - 1;
  cout<<"---Selection Sorting---"<<endl;
  for(i=0;i<N-1;i++){
    ii = i;    //Set current minimum
    for(j=i;j<N-1;j++){
      if(a[ii] > a[j+1]){ //If current min is bigger
        ii = j + 1;       //Current min become that number
        }
    cout<<"No."<<row<<" - ";
    row++;
    display(a, N);
    }
    if(ii != i){
    swap(a[i], a[ii]);  //Current min switch with the possibly smaller number (switch with itself if theres none)
    cout<<"---- Change ---- = "<<change<<endl;
    cout<<"No."<<row<<" - ";
    row++,change++;
    display(a, N);
    }
  }
  cout<<"----Selection Sorted----"<<endl;
  display(a,N);
} 

#endif