#include <iostream>
using namespace std;

int main() {
    int num;
    cin>> num ;
    int arr[num];
    int counter =0 ;
    for (  int i =0 ; i < num ; i++ ) {
        cin>> arr[i];
        counter +=arr[i];
    } float  AVG=   float (counter) / num ;
    cout <<  " sum : " << counter << " " << "average : " <<   AVG << endl;
}



























