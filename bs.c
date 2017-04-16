#include <stdio.h>
int bs(int *list, int target, int min , int max) {
	if (min > max) {
		return -1 ; 
	}
	int mid = (min + max)/2 ; 
	if(list[mid] == target) {
		return target ; 
	}
	else if (list[mid] < target) {
		return bs(list, target , mid+1 , max); 
	}
	else {
		return bs(list, target , min , max-1); 
	} 
}
int main () {
int A[] = {2,4,6,8,10,12,14,16}; 
int size = sizeof(A)/sizeof(A[0]); 
int target =  12;
for (int i = 0 ; i<25 ; i++) { 
int value = bs(A,i,0,size);
if (value == i) {
	printf("Vlaue exists: %d\n",value);
}
else 
printf("Values does not exist\n");
}
}
