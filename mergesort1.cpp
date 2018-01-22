#include<stdio.h>
#include<limits.h>
void merge(int *a,int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int ll[n1+1],rr[n2+1];
    for(int i=0;i<n1;i++){
    	ll[i]=a[p+i];
    }
    for(int i=0;i<n2;i++){
    	rr[i]=a[q+1+i];
    }
    ll[n1]=INT_MAX;
    rr[n2]=INT_MAX;
    int k=0,j=0;
    for(int i=p;i<=r;i++){
    	if(ll[k]<=rr[j]){
	    a[i]=ll[k];
	    k++;
	}else{
	    a[i]=rr[j];
	    j++;
	}
    
    }


}
void mergesort(int *a,int p,int r ){
    if(p<r){
    	int q=(p+r)/2;
    	mergesort(a,p,q);
	mergesort(a,q+1,r);
	merge(a,p,q,r);
    }
}
int main(){
    int a[]={2,34,235,3445,65,47,6,5,8,6,7};
    mergesort(a,0,10);
    for(int i=0;i<11;i++){
    	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;    

}
