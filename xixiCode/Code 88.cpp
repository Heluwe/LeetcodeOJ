class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int i,j,k;
        for(i=0,j=0;i<m,j<n;i++){ 
            if(A[i]>B[j]){
            for(k=m-1;k>=i;k--){
            	A[k+1]=A[k];         
        }
        A[i]=B[j];
        j++;m++;
}
        if(i==m&&j<n){
        	while(j<n){
        		A[i]=B[j];
        		i++;j++;
        	}
        }
    }
    }
};