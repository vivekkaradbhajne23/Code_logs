#include<stdio.h>
void bin(char arr[3] ,char c,int s,int e){
    int mid,flag=0;
    while(s<e){
        mid=(s+e)/2;
        if(c==arr[mid]){
          flag=1;break;}
        else if ((int)c>(int)arr[mid])
            s=mid+1;
        else
            e=mid-1;
    }
     if(flag==1){
       printf("ceiling value is %c\n",arr[s+1]);
    }
    else{
    printf("ceiling value is %c\n",arr[s]);
    }
}
int main(){
    char arr[3]={'c','f','i'};
    bin(arr,'c',0,2);

//  agar isko soolve karna hai toh cealing value me arr[s] nhi arr[s%n] se soch
}