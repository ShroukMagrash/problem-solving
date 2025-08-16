#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int num;
   cin>>num;
  int arr[num];
    int x ;
    int index = -1 ;
    for(int i=0;i<num;i++) {
        cin>>arr[i];
    }cin >> x;
    for ( int i =0 ; i < num ; i++ ) {
        if   ( arr[i] == x ) {
            index = i;
    }
        } cout << index;

   }


























