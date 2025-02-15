
 // Time Complexity  Best Case: O(n log n)
//                   Average Case: O(n log n)
//                   Worst Case: O(n^2)

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
    return e;  // where key index is stored
}
 void Quick_Sort(int a[],int n,int start,int end){
    
    if(start<end){     //  0< n-1
        int p=a[start];   // p=a[0]
        p=partation(a,n,p,start,end); // to find the index of the a[start]
        Quick_Sort(a,n,start,p-1);  // dividing them into furthur single arrays
        Quick_Sort(a,n,p+1,end);  // dividing them into furthur single arrays
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
    Quick_Sort(a,n,start,end);// function calling
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
