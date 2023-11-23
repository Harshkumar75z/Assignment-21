// 5. Check if the given array is almost sorted. (elements are at-most one position away).

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,8,7,9};
    int n=5;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
            }
        }
    if(flag==false) cout<<"Array is not almost sorted";
    else cout<<"Array is almost sorted";
}

