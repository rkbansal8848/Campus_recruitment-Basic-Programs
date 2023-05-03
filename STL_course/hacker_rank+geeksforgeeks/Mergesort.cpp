#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
 int mid=(s+e)/2;

 int len1=mid+1-s;
 int len2=e-mid;
  
 int *first=new int[len1];
 int *second=new int[len2];
 //copy values
 int k=s;
 for(int i=0;i<len1;i++){
    first[i]=arr[k++];
 }
    k=mid+1;
  for(int i=0;i<len2;i++){
    second[i]=arr[k++];
 }

 //merge 2 sorted arrays
 int index1=0;
 int index2=0;
 k=s;   //main array index
 while(index1<len1 and index2<len2){
    if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
    }
    else{
        arr[k++]=second[index2++];
    }
 }
 
 while(index1<len1){
 arr[k++]=first[index1++];
 }

 while(index2<len2){
 arr[k++]=second[index2++];
 }

 delete []first;
 delete []second;

}


void ms(int ar[],int s,int e){
    if(s>=e){ return;}
    int mid=(s+e)/2;
    ms(ar,s,mid);
    ms(ar,mid+1,e);
    merge(ar,s,e);
}

int main() {
    int ar[5]={5,6,2,1,3};
    ms(ar,0,4);
    for(int i=0;i<5;i++){
        cout<<ar[i]<<" ";
    }
return 0;
}