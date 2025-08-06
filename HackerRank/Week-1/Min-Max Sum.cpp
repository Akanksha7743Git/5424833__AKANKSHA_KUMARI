#include<iostream>
using namespace std;
int main(){
    int n=5;
    // cin>>n;
    long long arr[n];
    long long min_sum=0;
    long long max_sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                
                long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        min_sum+=arr[i];
    }
    for(int i=1;i<n;i++){
        max_sum+=arr[i];
    }
    cout<<min_sum<<" "<<max_sum;
    return 0;
}