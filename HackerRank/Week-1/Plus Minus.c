#include <iostream>
using namespace std;

int main()
{
    //5424833_Akanksha Kumari
    int n;
    cin>>n;
    
    int arr[n];
    int pos = 0, zer = 0, neg = 0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if (arr[i]<0){
            neg++;
        }
        else{
            zer++;
        }
    }
    cout<<(double)pos/n<<endl;
    
    cout<<(double)neg/n<<endl;
    cout<<(double)zer/n<<endl;

    return 0;
}