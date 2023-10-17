// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include<iostream>

using namespace std;

int main(){
    int arr[] ={ 2,34,56,1,21,34,4,5,6};
    int len = 9;
    int k;
    cout<<"Enter a number which is kth smallest number for array: ";
    cin>>k;
    for(int i =0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //selection sort:
    for(int i =0; i<k; i++){
        int min = arr[i];
        int mindx = -1;
        for(int j =i+1; j<len; j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for(int i =0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}