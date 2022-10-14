#include <iostream>
#include <iomanip>
using namespace std;
#include "bubble.h"
#include "insertion.h"
#include "selection.h"

int main(int argc,char** argv){
  int i,*a,sorted;
    //./a.out 10 20 30
  a=new int [argc-1];
   for(i=1;i<argc;i++) {
  /* transfer the value from argv into a*/
    a[i-1] = atoi(argv[i]);
    }
  
   
   cout<<endl;
    
    
  //bubble(a,argc-1);

  int j,value,N=argc-1;
   for(i=1;i<N;i++){
     value=a[i];
    for(j=i-1;j>=0;j--){
      if(a[j]>value) a[j+1]=a[j];
      else break;
      display(a,N);
    }

     
  a[j+1]=value;
  display(a,N);
   
}
    
  cout <<"after sorting"<<endl;

  display(a,argc-1);
  cout<<endl;

  
  }
