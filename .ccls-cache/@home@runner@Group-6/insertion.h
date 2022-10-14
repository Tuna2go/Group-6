#include<iostream>  
using namespace std;  

int insertion(int argc, char** argv){
  int *pa, n=argc-1, temp, i, j;
  pa= new int[n];

  for(i=0;i<n;i++){
    pa[i]= atoi(*(argv+1+i));
    
  }

  cout<<"Insertion:";
  for(i=0;i<n;i++){
    cout<< pa[i] << " ";
  }


  delete []pa;
  return 0;
}