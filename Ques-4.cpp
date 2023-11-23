// Sort the array in descending order using Bubble Sort.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,2,4,1};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        
        // traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag = false;
            }
            
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

