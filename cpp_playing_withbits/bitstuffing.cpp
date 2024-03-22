#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    vector <int> arr;
    int last_val;
    int c,d;
    int count=0;
    cout<<"Enter the value of N:"<<endl;
    cin>> n;
    cout<<"Enter the value of array: ";
    for(int i=0;i<n;i++){
        cin>>c;
        d=n;
        if(c==0 or c==1){
        arr.push_back(c);
      }
        if(arr[i]==1){
            count+=1;
        }
        if(count == 5){
            arr.push_back(0);
            last_val = arr[n];
            count =0;
        }
    }
    if(count ==0){
        d=n+1;
    }
    for(int i=0;i<d;i++){
        arr.push_back(last_val);
        cout<< arr[i];
    }
}
