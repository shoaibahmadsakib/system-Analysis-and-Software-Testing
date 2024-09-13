#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";    cin>>n;
    vector<double>vec(2*n);
    int j = 2*n;
    cout<<"Enter numbers: "<<endl;
    for(int i=0; i<j; i++)
        cin>>vec[i];
    char ch;
    cout<<"Enter operator: ";    cin>>ch;
    if(ch == '+'){
        for(int i=0; i<j; i+=2){
            cout<<vec[i]<<" + "<<vec[i+1]<<" = "<<vec[i] + vec[i+1]<<endl;}}
    if(ch == '-'){
        for(int i=0; i<j; i+=2){
            cout<<vec[i]<<" - "<<vec[i+1]<<" = "<<vec[i] - vec[i+1]<<endl;}}
    if(ch == '*')    {
        for(int i=0; i<j; i+=2)        {
            cout<<vec[i]<<" * "<<vec[i+1]<<" = "<<vec[i] * vec[i+1]<<endl;}}
    if(ch == '/')    {
        for(int i=0; i<j; i+=2)        {
            cout<<vec[i]<<" / "<<vec[i+1]<<" = "<<vec[i] / vec[i+1]<<endl;}}
    return 0;
}
