//REACT
//R ==> REPEAT
//E ==> EXAMPLE
//A ==> ALGORITHM
//C ==> CODE
//T ==> TEST
/*=================================================================================================================================================================================*/
//                                  NOTES
// INSERTION SORT==> Time complexity=O(n^2)==>(Worst case)
//               Space Complexity=O(1) 



// First Codition(true codition)

// 0 1 2 3 4 -- index
// 4 5 3 2 1 --array
//   i j 
// temp=3;5>3(condition true)==> into the loop
// a[2]=a[1]==> 3=5 ==> array--> 4 5 5 2 1 (i=0) out of the loop
// a[1]=3 ==> 5=3 ==> array --> 4 3 5 2 1.......

// False Codition
// 0 1 2 3 4 -- index
// 4 5 3 2 1 --array
// i j ==> i is sorted, j is unsorted
//  sort 5=temp,(4>5)codition fail==>out of the loop
// a[1]=5 ==> array is un changed....

/*=================================================================================================================================================================================*/
#include<stdio.h>
int Insertion_Sort(int a[],int n){
    int i,j,temp;
    for(int j=1;j<n;j++){
        i=j-1;
        temp=a[j];
        while(i>=0 && a[i]>temp){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=temp;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Insertion_Sort(a,n);
    
    
}