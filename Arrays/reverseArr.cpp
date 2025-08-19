#include <iostream>
using namespace std;

void reverseArray (int arr[], int siz){
    int start = 0, end = siz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}

int main(){
    int arr[] = {50,64,74,53,38,21,77};
    int siz = 7;
    

    reverseArray(arr,siz);

    for (int i=0;i<siz;i++){
        cout<<arr[i]<<" , ";
    }
    
    return 0;
}