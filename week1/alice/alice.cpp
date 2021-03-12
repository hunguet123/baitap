#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int min=-100;
    for(int i=0;i<n;i++){
        cin >>a[i];
        cout <<a[i]<<" ";
        if(a[i]<min){
            min=a[i];
        }
    }
    cout <<"gia tri nho nhat la: "<<min;
    int k;
    cin >>k;
    int s=1;
    for(int i=0;i<n;i++){
        if(i%k==0){
            s*=a[i];
        }
    }
    cout <<"gia tri tich la: "<<s;

}
