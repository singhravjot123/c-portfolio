#include<iostream>
using namespace std;
bool IsPossible(int arr[],int n,int k,int mid){
    int cowcount=1;
    int lastposition=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastposition>=mid){
            cowcount++;
            if(cowcount=k){
                return true;
            }
            lastposition=arr[i];
        }
    }
    return false;
}


int aggressivecows(int arr[],int n,int k){
    sort(arr.begin[],arr.end[]);
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
   int e=maxi;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
    if(IsPossible(arr,n,k,mid)){
        ans=mid;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int n=5;
    int arr[5]={4,2,1,3,6};
    int k=2;
    cout<<"LARGEST ANSWER"<<aggressivecows(arr,n,k);
    return 0;
}