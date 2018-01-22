#include <stdio.h>
void bubblesort(int *a,int n){
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int k = i+1; k < n; k++) {
            if (a[i]>a[k]) {
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }


}
int main(int argc, char const *argv[]) {
    int a[]={2,38,468,3,2,753,2,852,45,3,84};
    bubblesort(a,sizeof(a)/sizeof(int));
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
    	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
