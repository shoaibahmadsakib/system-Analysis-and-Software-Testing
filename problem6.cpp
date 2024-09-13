#include <bits/stdc++.h>
using namespace std;

void sum(vector<int>arr1){
    int i = 0, sum=0;
    do{
        sum = sum + arr1[i];
        i++;
    }while(i<arr1.size());
    cout<<"Sum : "<<sum;
}
void avg(vector<int>arr1){
    int i = 0;
    float sum =0;
    do{
        sum = sum + arr1[i];
        i++;
    }while(i<arr1.size());
    cout<<"Average : "<<sum/arr1.size();
}
int main(){
    int n;
    cout<<"Enter array size: ";    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements: ";
    for(int i = 0; i<n; i++){cin>>arr[i];}
    cout<<endl;
    sum(arr);
    cout<<endl;
    avg(arr);
    return 0;
}
