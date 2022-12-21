#include<stdio.h>
int Bin_search(int arr[],int x, int l,int h){

    
    int mid=(l+h)/2;
    if(arr[mid]==x){
        printf("Elemnet found at %d",arr[mid]);
        return mid;
    }
    else if(arr[mid]>x)
        return Bin_search(arr,x,l,mid);
    else if(arr[mid]<x)
        return Bin_search(arr,x,mid+1,h);
    else
        printf("Element dosent exits in array");

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    Bin_search(arr,10,0,9);
}