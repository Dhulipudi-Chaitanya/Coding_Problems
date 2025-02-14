void Merge(int a[],int n, int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int B[n];
    int k=0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            B[k]=a[i];
            k++;
            i++;
        }
        else{
            B[k]=a[j];
            k++;j++;
        }
    }
    // if one array is sorted and another array is not sorted
    while(i<=mid){
        B[k]=a[i];
        k++;i++;
    }
    while(j<=high){
        B[k]=a[j];
        k++;j++;
    }
    for(int i=low;i<=high;i++){
        a[i]=B[i];
    }
}

void Merge_Sort(int a[],int n,int low,int high){
    //Base case where i and j are crossover or equals
    if(low>=high) return ;
    // real-case
    int mid=(low+high)/2;
    Merge_Sort(a,n,low,mid);
    Merge_Sort(a,n,mid+1,high);
    //To merge the arrays  
    Merge(a,n,low,mid,high);
}

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Merge_Sort(a,n,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}




