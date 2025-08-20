#include <iostream>
#include <vector>
using namespace std;

int main(){
  //push_back
  vector <int> vec ;
  vec.push_back(25);
  vec.push_back(56);
  vec.push_back(66);
  cout << "after pushback size is "<< vec.size()<<endl;
  vec.pop_back();
  cout << "after popback size is "<< vec.size()<<endl;

  //front and back
  cout << vec.front()<< endl;
  cout << vec.back()<< endl;

  //at
  cout << vec.at(1)<< endl;

  //size
  vector <int> vec1 = {1,2,3,4,6,7};
  cout << "size is "<< vec1.size()<<endl;
  //for each loop
  for(int val:vec){ //vec
    cout << val << endl; 
  }
  
  return 0;
}
