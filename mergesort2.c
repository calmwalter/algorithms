#include<stdio.h>
void merge(int *a,int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int ll[n1],rr[n2];
    for(int i=0;i<n1;i++){
    	ll[i]=a[p+i];
    }
    for(int i=0;i<n2;i++){
    	rr[i]=a[q+i+1];
    }
    int k=0,j=0,i=p;
    while(k!=n1 && j!=n2){
    	if(ll[k]<=rr[j]){
	    a[i]=ll[k];
	    k++;
	}else{
	    a[i]=rr[j];
	    j++;
	}
	i++;
    
    }
    int *ptr= (k==n1 ? rr+j : ll+k);
    for(i;i<=r;i++){
    	a[i]=*ptr++;
    }
}
void mergesort(int *a,int p,int r){
    if(p<r){
	int q=(p+r)/2;
    	mergesort(a,p,q);
	mergesort(a,q+1,r);
	merge(a,p,q,r);
    
    }
}

int main(){
    int a[]={35,47,385,7,3,29,4,8,823,5,4,23,8,5,32};
    mergesort(a,0,sizeof(a)/sizeof(int)-1);
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
    	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;


}
