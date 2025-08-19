#include <iostream>
using namespace std;

int linearSearch(int arr[],int siz,int target){
    for (int i =0;i<siz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[] = {5,6,7,3,8,2,7};
    int siz = 7;
    int target = 2;
    cout << linearSearch(arr,siz,target)<< endl;
    return 0;
}