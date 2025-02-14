#include<stdio.h>
 int partation(int a[],int n,int key,int start,int end){
    int s=start,e=end;
    while(s<e){
        while(a[s]<=key){
            s++;
        }
        while(a[e]>key){
            e--;
        }
        if(s<e){
            int temp=a[e];
            a[e]=a[s];
            a[s]=temp;
        }
    }
    int temp=a[e];
    a[e]=key;
    a[start]=temp;
    return e;
}
 void Quick_Sort(int a[],int n,int start,int end){
    
    if(start<end){
        int p=a[start];
        p=partation(a,n,p,start,end);
        Quick_Sort(a,n,start,p-1);
        Quick_Sort(a,n,p+1,end);
    }
   
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int start=0;
    int end=n-1;
    Quick_Sort(a,n,start,end);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}