#include<iostream>
using namespace std;

int binarysearch (int arr[], int size, int key) {
     int start = 0;
     int end = size - 1;

 int mid = (start + end)/2;                // also use    mid = start (end-start)/2;   incase if start != 0;

while (start <= end){

    if(arr[mid] == key){
        return mid;
    }
    // right wale pai joa

    if (key > arr[mid] ){
        start = mid +1 ;
    }
    else {
        end = mid - 1;
    }
    mid = (start + end)/2;
}
return -1;
}

 int main () {
  int even[6] = {1,2,3,5,7,9};
  int odd[5] = {2,3,4,7,9};

  int evenIndex = binarysearch(even, 6, 7);
  cout << "Index of 7 is" << evenIndex << endl;

  int oddIndex = binarysearch(odd, 5, 4);
  cout << "Index of 4 is" << oddIndex << endl;

  return  0;
 }


