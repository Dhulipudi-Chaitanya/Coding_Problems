/*=================================================================================================================================================================================*/
        // Time complextiy   Best Case: O(n log n)
                            //Average Case: O(n log n)
                            //Worst Case: O(n log n)

/*=================================================================================================================================================================================*/
void Merge(int a[],int n, int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int B[n]; // we have to add into a new array
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
    for(int i=low;i<=high;i++){  // to change their indexs
        a[i]=B[i];
    }
}
void Merge_Sort(int a[],int n,int low,int high){
    //Base case where i and j are crossover or equals
    if(low>=high) return ;
    // real-case   
    int mid=(low+high)/2; // finding the mid and dividing them into furthur single array
    Merge_Sort(a,n,low,mid);
    Merge_Sort(a,n,mid+1,high);
    //To merge the arrays  
    Merge(a,n,low,mid,high);    //To merge the arrays  
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Merge_Sort(a,n,0,n-1);// calling function
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}




