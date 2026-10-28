#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int key;
    cout<<"enter the element to search";
    cin>>key;
    int low=0;
    int high= n-1;
    int mid;
    while(low<=high){
        mid =low +( high-low)/2;
        if(arr[mid]==key){
            cout<< "element found at index " <<mid;
            return 0;
        }
        else if(arr[mid] ==key){
            low=mid+1;
        }
        else {
            high = mid -1;
        }
        cout<< "element not found";
        return 0;
    
        }
        }