// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossibleAns(int A[], int low, int mid, int high, int m, int n){
        int books=1;
        int pageSum=0;
        
        for(int i=0; i<n; i++){
            if(pageSum+A[i] <= mid){
                pageSum=pageSum+A[i];
            }
            else{
                books++;
                if(books > m || mid < A[i]){
                    return false;
                }
                else{
                    pageSum = A[i];
                }
                    
            }
        }
        return true;
    }
    int answer(int A[], int n, int low, int high, int m){
        
        int ans;
           
           while(low<=high){
               int mid = low + (high-low)/2;
               
               if(isPossibleAns(A, low, mid, high, m, n)){
                   ans = mid;
                   high = mid-1;
               }
               else{
                   low = mid+1;
               }
           }
           return ans;
    }
    
    int findPages(int A[], int N, int M) 
    {
        int low = *min_element(A,A+N);
        
        int high=0;
        for(int i=0; i<N; i++)
            high += A[i];
        
        //If pages will be more than students
        if(M > N)
            return -1;
        
        return answer(A, N, low, high, M);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends
