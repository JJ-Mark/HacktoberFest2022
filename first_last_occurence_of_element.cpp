#include<iostream>
using namespace std;

int firstOc(int arr[], int size , int t){
    int s = 0;
    int e = size-1;
    int ans = -1;
    

    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == t){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < t){
            s = mid + 1;
        }
        else if(arr[mid] > t){
            e = mid - 1;
        }
        
    }
    return ans;
}
int lastOc(int arr[], int size , int t){
    int s = 0;
    int e = size - 1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]== t){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > t){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}

int main() {

    int n;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array in increasing order  "<<endl;
    for(int i = 0; i< n; i++) {
        cin>>arr[i];
    } 
    int t;
    cout<<"enter element whose first and last index you want : ";
    cin>>t;
    
    int F_O = firstOc(arr, n, t);
    int L_O = lastOc(arr, n, t);

    cout<<"First index of "<<t<<" is : "<<F_O<<endl;
    cout<<"Last index of "<<t<<"4 is : "<<L_O<<endl;
    cout<<"Total nuber of occurence of "<<t<< " is : "<<L_O -F_O +1;


}