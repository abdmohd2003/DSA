#include <iostream>
#include <climits>
using namespace std;

int main(){
  int mark[]={45 ,34 ,56 ,74 ,88 ,90};
  int size = 6;
  int smallIndex;
  int largeIndex;
  int smallest = INT_MAX;
  int largest = INT_MIN;
  for(int i=0; i<size; i++){
    smallest = min(mark[i],smallest);
    if(smallest==mark[i]){
      smallIndex=i;
    }
  }

   for(int j=0; j<size; j++){
    largest = max(mark[j],largest);
    if(largest==mark[j]){
      largeIndex=j;
    } 
  }
  cout << "Smallest: " << smallest << endl;
  cout << "smallest index is" << smallIndex << endl;
  cout << "Largest: " << largest << endl;
  cout << "largest index is" << largeIndex << endl;

  return 0;
}


