#include<stdio.h>
int partion(int *a,int lo,int hi){
    //the pivot number.
    int pivot=a[lo];
    //the position of pivot.
    int k=lo;

    int i=lo,j=hi;
    //let the pivot in the mid position.
    while (1) {
        //put the number that is smaller than pivot at left.
        while (pivot<a[j]) {j--;}
        a[k]=a[j];a[j]=pivot;k=j;
        //put the number that is bigger than pivot at right.
        while (pivot>a[i]) {i++;}
        a[k]=a[i];a[i]=pivot;k=i;
        //if pivot at mid position.
        if (i==j) {break;}
    }
    return k;


}
void quicksort(int *a,int lo,int hi){
    if (lo<hi) {
        int k=partion(a,lo,hi);
        quicksort(a,lo,k-1);
        quicksort(a,k+1,hi);
    }
}
int main(int argc, char const *argv[]) {
    //the code below is for test.
    /*
    int a[]={34,1,4,867,6,3,398,465,7,57,84};
    partion(a,0,sizeof(a)/sizeof(int)-1);
    quicksort(a,0,sizeof(a)/sizeof(int)-1);
    for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
        printf("%d ",a[i] ) ;
    }
    printf("\n");
    */
    return 0;
}
