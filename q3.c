#include<stdio.h>
#include<limits.h>
int removeDuplicates(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
    	if(nums[i]==INT_MIN){
    		continue;
    	}
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                nums[j]=INT_MIN;
            }
        }
    }
    int count=0;
    for(int i=0;i<numsSize;i++){
		if(nums[i]!=INT_MIN){count++;
		}
	}
	int pos=0;
	for(int i=0;i<numsSize;i++){
			if(nums[i]!=INT_MIN){
				nums[pos]=nums[i];
				pos++;
			}
	}
	int temp;
	for(int i=0;i<count-1;i++){
		for(int j=0;j<count-i-1;j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
for(int i=count;i<numsSize;i++){
		nums[i]=INT_MIN;
	}	
    return count;
}
int main(){
	int n;
	printf("enter size: ");
	scanf("%d",&n);
	int nums[n]; 

for(int i=0;i<n;i++){
	scanf("%d",&nums[i]);
}

int k= removeDuplicates(nums,n); 
printf("%d\n",k);
for(int i=0;i<n;i++){
	if(nums[i]==INT_MIN){
		printf("_ ");
	}
	else
	printf("%d ",nums[i]);
}

	return 0;
}