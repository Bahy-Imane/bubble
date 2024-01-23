#include<stdio.h>

int bubbleSort (int L[],int t ){
int i,j,R;
	
		for ( i=0 ;i<t;i++){
		for (j=0;j<(t-1);j++){
			if (L[j]>L[j+1]){
		       R = L[j];
				L[j] = L[j+1];
				L[j+1] = R ;		
			}
		}

	}
}
int main (){
	int T[]= {9,4,0,7,5,3};
	int taille =6;
	int i ;
	
	printf ("le tableau avant le bubble sort :\n");
	
	for (i=0 ;i<taille;i++){
	printf ("T[%d]=%d\n",i,T[i]);
	}
	
	printf ("Le tableau apres le bubble sort :\n");
	
	bubbleSort(T,taille);
	
	for (i=0 ;i<taille ;i++)
   	printf ("T[%d]=%d\n",i,T[i]);
	return 0;
}
