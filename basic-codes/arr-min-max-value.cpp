#include<iostream>
using namespace std;

int get_max(int num[],int n){
    int max=INT_MIN;
    for (int i =0;i<n;i++)
    {
        if(num[i]>max) 
        {
        max=num[i];
        }
    }
  return max;
}
int get_min(int num[],int n){
    int min=INT_MAX;
    for (int i =0;i<n;i++)
    {
        if(num[i]<min) 
        {
        min=num[i];
        }
    }
  return min;
}


int main(){
    int  n;
    cin>>n;
    int* arr = new int[n]; 
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<get_max(arr,n)<<endl;
    cout<<get_min(arr,n)<<endl;
 delete [] arr;

}