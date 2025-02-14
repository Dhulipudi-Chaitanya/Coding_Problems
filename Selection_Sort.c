//SELECTION SORT ==> Time complexity=O(n^2)==>(Worst case)
//                   Space Complexity=O(1) 
/*=================================================================================================================================================================================*/
//                                                      NOTES
//If we take an array finding the min and min_Index and if the a[i] > min then swap them
/*=================================================================================================================================================================================*/

#include<stdio.h>
int selection_Sort(int a[],int n){
    int min,min_index;
    for(int i=0;i<n-1;i++){
        min=a[i];
        for(int j=i+1;j<n;j++){ //finding the min value
            if(min>a[j]){
                min=a[j];
                min_index=j;  // store the min_index value
            }
        }
        if(a[i]>min){    //swap
            int temp=a[min_index];
            a[min_index]=a[i];
            a[i]=temp;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection_Sort(a,n);   //calling function
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}


