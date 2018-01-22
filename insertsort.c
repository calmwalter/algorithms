#include<stdio.h>
void insertsort(int *a,int n){
    for(int i=1;i<n;i++){
    	int key=a[i];
	for(int k=i;k>0;k--){
	    if(a[k]<a[k-1]){
	    	a[k]=a[k-1];
		a[k-1]=key;

	    }else{break;}
	
	}
    }
}
int main(){
    int a[]={2,38,468,3,2,753,2,852,45,3,84};
    insertsort(a,sizeof(a)/sizeof(int));
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
    	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;

}
