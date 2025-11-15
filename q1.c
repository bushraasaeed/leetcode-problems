#include<stdio.h>
void moveZeroes(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++){
		if(nums[i]==0){count++;
		}
	}
	int pos=0;
	for(int i=0;i<numsSize;i++){
			if(nums[i]!=0){
				nums[pos]=nums[i];
				pos++;
			}
	}
for(int i=numsSize-count;i<numsSize;i++){
		nums[i]=0;
	}	
}
int main(){
	int n;
	printf("enter size of array: ");
	scanf("%d",&n);
	int nums[n];
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	moveZeroes(nums,n);
	for(int i=0;i<n;i++){
		printf("%d ",nums[i]);
	}
	return 0;
}