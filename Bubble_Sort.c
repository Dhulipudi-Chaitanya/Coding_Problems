//REACT
//R ==> REPEAT
//E ==> EXAMPLE
//A ==> ALGORITHM
//C ==> CODE
//T ==> TEST
/*================================================================================================================================================================================*/
//                                       NOTES
//BUBBLE SORT==> Time complexity=O(n^2)==>(Worst case)
//               Space Complexity=O(1) 
/*=================================================================================================================================================================================*/
#include<stdio.h>
void Bubble_sort(int a[], int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){   //if any array is sorted in the last==> we can optimize the code (j<n-i) 
        if(a[j-1]>a[j]){     //checking the condition 
           int temp=a[j-1];  //swap
            a[j-1]=a[j];
            a[j]=temp;
        }
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
    Bubble_sort(a,n);//calling_function
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}


// using recursion
#include<stdio.h>
void Bubblesort(int a[], int n,int i,int j){
    if(i>=n){
        return;
    }
    if(j>=n){
        return;
    }
    if(a[j] >a[j+1] && j< n-1){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    Bubblesort(a,n,i,j+1); // for inner loop recursive call
    Bubblesort(a,n,i+1,0);  // for outer loop recursive call
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i=0,j=0;
    Bubblesort(a,n,i,j);//calling_function
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
